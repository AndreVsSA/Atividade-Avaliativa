#ifndef FICHARIOTURMA_H
#define FICHARIOTURMA_H
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Turma.h"

class FicharioTurma{
private:
        Turma * turmas;
        int tamanhoFicharioTurmas;
        int qtdeTurmasFichario;
public:
FicharioTurma(Turma *, int );

    void cadastrar();
    void alterar();    
    void excluir(); 
    void consultar();
    void relatorio();
};
#endif