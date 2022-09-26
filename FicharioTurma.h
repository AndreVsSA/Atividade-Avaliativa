#ifndef FICHARIOTURMA_H
#define FICHARIOTURMA_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Turma.h"

class FicharioTurma{
private:
        vector <Turma> turmas;
public:
FicharioTurma(vector <Turma>);

    void cadastrar();
    void alterar();    
    void excluir(); 
    void consultar();
    void relatorio();
};
#endif