#include <iostream>
using namespace std;

#include "Aluno.h"


 
    Aluno::Aluno()
    {

    }

    Aluno::Aluno(string matricula, string cpf, string nome, string telefone, string email)
    {
        this->matricula = matricula;
        this->cpf = cpf;
        this->nome = nome;
        this->telefone = telefone;
        this->email = email; 
    }

    string Aluno::getMatricula()const
    {
    return matricula;
    }

    void Aluno::setMatricula(const string matricula)
    {
        this->matricula = matricula;
    }
        void Aluno::toString(){
            cout << " === ALUNO ==== " << endl;
            cout << "Matrícula: "<<matricula<<endl;
            cout << "CPF: "<<cpf<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Telefone: "<<telefone<<endl;
            cout << "Email: "<<email<<endl;
    }
    void Aluno::registrar(int codigo)
    {
      this->codigo=codigo;
    };



