#ifndef TANQUE_HPP
#define TANQUE_HPP
#include <iostream>

class Tanque {
private:
    int capacidade_maxima;
    int nivel_atual;
    
public:
    Tanque(int capacidade) 
        : capacidade_maxima(capacidade), nivel_atual(0) {}

    void completar() { 
        nivel_atual = capacidade_maxima; 
        std::cout << "Tanque de gasolina completado!\n";
    }

    int obterNivel() const { 
        return nivel_atual; 
    }
};

#endif