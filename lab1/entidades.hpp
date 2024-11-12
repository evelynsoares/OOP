#ifndef ENTIDADES_HPP_INCLUDED
#define ENTIDADES_HPP_INCLUDED

using namespace std;

class Entidade {
    private:
        Dominio nomeAtributo; //declarar cada atributo

    public:
        // declarar metodo set pra cada atributo
        void setNomeAtributo(const Dominio&); // const before Dominio& means that the parameter is passed as a constant reference. Dominio& is a reference to a Dominio object (possibly another class). Using const Dominio& allows the function to read data from a Dominio object without making a copy, and it ensures that the Dominio object itself won’t be modified.
        Dominio getNomeAtributo() const;
};

// implementar metodos set e get para cada atributop

inline void Entidade::setNomeAtributo(const Dominio &nomeAtributo){
    this -> nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getNomeAtributo() const {
    return nomeAtributo;
}
#endif // ENTIDADES_HPP_INCLUDED

//use this mf website: https://www.w3schools.com/cpp/cpp_class_methods.asp
