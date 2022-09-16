#include <iostream>
using namespace std;
#include "Professor.h"
#include "Pessoa.h"


     Professor::Professor(){

    }
     Professor::Professor(string registro, string cpf, string nome, string telefone, string email)
    {
        ++indice;
        this->codigo=indice;
        this->registro = registro;
        this->cpf = cpf;
        this->nome = nome;
        this->telefone = telefone;
        this->email = email; 
    }
    void Professor::toString()
    {
            cout << " === PROFESSOR ==== " << endl;
            cout << "Registro: "<<registro<<endl;
            cout << "CPF: "<<cpf<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Telefone: "<<telefone<<endl;
            cout << "Email: "<<email<<endl;
    }
    string Professor::getRegistro()const
    {
    return registro;
    }

    void Professor::setRegistro(const string registro)
    {
        this->registro = registro;
    }
    bool Professor::operator==(const Professor& o) const {
      return cpf == o.cpf;
    }
    int Professor::getCodigo()const
    {
      return codigo;
    }



