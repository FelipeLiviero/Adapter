#ifndef CARRO_HPP
#define CARRO_HPP

#include "FonteDeEnergia.hpp"

class Carro {
private:
    FonteDeEnergia* fonte;  // Usa a interface adaptada
public:
    Carro(FonteDeEnergia* fonte) : fonte(fonte) {}
    void abastecer() { fonte->abastecer(); }
    int verificarNivel() const { return fonte->obterNivel(); }
    virtual ~Carro() { delete fonte; }
};

#endif