#include <iostream>
using namespace std;
#include "Professor.h"
#include "Pessoa.h"


     Professor::Professor(){

    }
     int Professor::getRegistro()const {
        return registro;
    }

     void Professor::setRegistro(const int _registro) {
        registro = _registro;
    }
    void Professor::toString(){
            cout << " === PROFESSOR ==== " << endl;
            cout << "Registro: "<<registro<<endl;
            cout << "CPF: "<<cpf<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Telefone: "<<telefone<<endl;
            cout << "Email: "<<email<<endl;
    }



