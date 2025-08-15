// AdaptadorBateria.hpp
#ifndef ADAPTADOR_BATERIA_HPP
#define ADAPTADOR_BATERIA_HPP

#include "FonteDeEnergia.hpp"
#include "Bateria.hpp"

class AdaptadorBateria : public FonteDeEnergia {
private:
    Bateria& bateria;
public:
    AdaptadorBateria(Bateria& b) : bateria(b) {}
    void abastecer() override { bateria.carregarTotal(); }
    int obterNivel() const override { return bateria.obterNivelW(); }
};

#endif