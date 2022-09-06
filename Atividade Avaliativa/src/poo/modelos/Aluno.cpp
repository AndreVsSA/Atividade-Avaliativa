#include <iostream>
using namespace std;
#include "Pessoa.h"
#include "Aluno.h"


    
    Aluno(){}

    Aluno(string _nome){
        nome = _nome;
    }
    string toString(){
        return nome;
    }

}
