#include <iostream>
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

//adaptar pra cada classe



int main(){
    //std::cout << "Hello world!" << std::endl; ->> sem using namespace std
    int VALOR_VALIDO = 1, VALOR_INVALIDO = 0;

    Dominio dominio;

    if(dominio.setValor(VALOR_VALIDO)) // replace with actual values for testing
        cout << "Valor = " << dominio.getValor() << endl;
    else
        cout << "Valor invalido" << endl;

    if(dominio.setValor(VALOR_INVALIDO))
        cout << "Valor = " << dominio.getValor() << endl;
    else
        cout << "Valor invalido" << endl;


    // fazendo a manipulacao de ponteiros
    cout << "Usando ponteiros" << endl;
    Dominio *ptr;

    ptr = new Dominio();

    if(ptr->setValor(VALOR_VALIDO))
        cout << "Valor " << ptr->getValor() << endl;
    else
        cout << "Valor invalido" << endl;
    if (ptr->setValor(VALOR_INVALIDO))
        cout << "Valor = " << ptr->getValor() << endl;
    else
        cout << "Valor invalido" << endl;

    // adicionarndo entidades
    cout << "Adicionando entidades" << endl;

    Entidade entidade;
    //Dominio dominio;
    dominio.setValor(VALOR_VALIDO);
    entidade.setNomeAtributo(dominio);
    cout << entidade.getNomeAtributo().getValor();
    return 0;
}
