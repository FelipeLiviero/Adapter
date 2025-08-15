#ifndef FONTE_ENERGIA_HPP
#define FONTE_ENERGIA_HPP

class FonteDeEnergia {
public:
    virtual ~FonteDeEnergia() = default;
    virtual void abastecer() = 0;          // Método para abastecer
    virtual int obterNivel() const = 0;    // Método para obter nível
};

#endif