// AdaptadorTanque.hpp
#ifndef ADAPTADOR_TANQUE_HPP
#define ADAPTADOR_TANQUE_HPP

#include "FonteDeEnergia.hpp"
#include "Tanque.hpp"

class AdaptadorTanque : public FonteDeEnergia {
private:
    Tanque& tanque;
public:
    AdaptadorTanque(Tanque& t) : tanque(t) {}
    void abastecer() override { tanque.completar(); }
    int obterNivel() const override { return tanque.obterNivel(); }
};

#endif