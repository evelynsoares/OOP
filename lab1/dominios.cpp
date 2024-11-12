#include "dominios.hpp"

bool Dominio::validar(int valor){
    //cod validacao
    if (valor == 0 || valor > 1) return false;
    return true;
}

bool Dominio::setValor(int valor){
    if (!validar(valor)) return false;
    this->valor = valor;
    return true;
}
