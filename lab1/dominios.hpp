#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

class Dominio {
    private:
        int valor;             // atributo - replaces Tipo with "int"
        bool validar(int);     // metodo
    public:
        bool setValor(int);    // metodo
        int getValor() const;  // metodo - The const indicates that this function does not modify any member variables of the class (it is a const member function), meaning it can be called on constant instances of Dominio.
};
inline int Dominio::getValor() const{
    return valor;
}
#endif // DOMINIOS_HPP_INCLUDED
