#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Aluno.h"

   
    Pessoa::Pessoa(){

    }
    Pessoa::Pessoa(String nome) {
        nome = nome;
    }

    String Pessoa::getEmail()const {
        return email;
    }

    void Pessoa::setEmail(String _email) {
        email = _email;
    }



    String Pessoa::getTelefone()const {
        return telefone;
    }

    void Pessoa::setTelefone(String _telefone) {
        telefone = _telefone;
    }



    String Pessoa::getNome()const {

        return nome;
    }

    void Pessoa::setNome(String _nome) {

        nome = _nome;
    }

    String Pessoa::getCpf()const {
        return cpf;
    }

    void Pessoa::setCpf(String _cpf) {
        cpf = _cpf;
    }

}
