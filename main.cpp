#include "Carro.hpp"
#include "AdaptadorTanque.hpp"
#include "AdaptadorBateria.hpp"

int main() {
    // Carro a gasolina
    Tanque tanqueGasolina(100);
    Carro carroGasolina(new AdaptadorTanque(tanqueGasolina));

    // Carro elétrico
    Bateria bateriaEletrica(100);
    Carro carroEletrico(new AdaptadorBateria(bateriaEletrica));

    Carro* frota[] = {&carroGasolina, &carroEletrico};

    for (Carro* carro : frota) {
        std::cout << "Nível de energia atual: " 
                  << carro->verificarNivel() << "%\n";
        if (carro->verificarNivel() < 50) {
            carro->abastecer();
        }
        std::cout << "Nível após abastecer: " 
                  << carro->verificarNivel() << "%\n\n";
    }

    return 0;
}