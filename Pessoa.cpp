#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Aluno.h"

   
    Pessoa::Pessoa(){

    }
    Pessoa::Pessoa(string nome) {
        nome = nome;
    }

    string Pessoa::getEmail()const {
        return email;
    }

    void Pessoa::setEmail(string _email) {
        email = _email;
    }



    string Pessoa::getTelefone()const {
        return telefone;
    }

    void Pessoa::setTelefone(string _telefone) {
        telefone = _telefone;
    }



    string Pessoa::getNome()const {

        return nome;
    }

    void Pessoa::setNome(string _nome) {

        nome = _nome;
    }

    string Pessoa::getCpf()const {
        return cpf;
    }

    void Pessoa::setCpf(string _cpf) {
        cpf = _cpf;
    }
    


