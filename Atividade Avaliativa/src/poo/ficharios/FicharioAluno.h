#ifndef FICHARIOALUNO_H
#define FICHARIOALUNO_H
#include <string>
using std::string;
#include "Professor.h"
#include "Pessoa.h"
#include "Aluno.h"
#include "FicharioAluno.h"
// adicionar os metodos alterar, excluir e consultar
// não permitir exclusão de alunos vinculados a turmas
 class FicharioAluno {
    private:
    Aluno alunos[];
    
    public:
     FicharioAluno(Aluno){}

     void cadastrar(){}
     void relatorio(){}

}
#endif
