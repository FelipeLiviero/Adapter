#ifndef BATERIA_HPP
#define BATERIA_HPP
#include <iostream>

class Bateria {
private:
    int capacidade_w;
    int nivel_atual_w;
    
public:
    Bateria(int capacidade) 
        : capacidade_w(capacidade), nivel_atual_w(0) {}

    void carregarTotal() { 
        nivel_atual_w = capacidade_w; 
        std::cout << "Bateria elétrica carregada!\n";
    }

    int obterNivelW() const { 
        return nivel_atual_w; 
    }
};

#endif