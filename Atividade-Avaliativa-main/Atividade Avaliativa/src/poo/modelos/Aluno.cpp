#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Aluno.h"


    
    Aluno::Aluno(){}

    Aluno::Aluno(string _nome){
        nome = _nome;
    }
    void Aluno::setMatricula(string _matricula){
    matricula = _matricula;
    }
    string Aluno::getMatricula(){
    return matricula;
    }



