#ifndef FICHARIENTURMACAO_H
#define FICHARIOENTURMACAO_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Enturmacao.h"

class FicharioEnturmacao{
    private:
    vector <Aluno> alunos;
    vector <Turma> turmas;
    vector <Enturmacao> enturmacoes;

    public:
    FicharioEnturmacao(vector <Aluno>, vector <Turma>, vector <Enturmacao>);
    void cadastrar();
    void excluir();
    void consultar();
    void relatorio();
};
#endif