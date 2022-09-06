#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Aluno.h"

   
    Pessoa(){

    }
    Pessoa(String nome) {
        nome = nome;
    }

    String getEmail() {
        return email;
    }

    void setEmail(String _email) {
        email = _email;
    }



    String getTelefone() {
        return telefone;
    }

    void setTelefone(String _telefone) {
        telefone = _telefone;
    }



    String getNome() {

        return nome;
    }

    void setNome(String _nome) {

        nome = _nome;
    }

    String getCpf() {
        return cpf;
    }

    void setCpf(String _cpf) {
        cpf = _cpf;
    }

}
