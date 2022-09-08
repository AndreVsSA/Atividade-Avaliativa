#ifndef FICHARIOALUNO_H
#define FICHARIOALUNO_H
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Aluno.h"

// adicionar os metodos alterar, excluir e consultar
// não permitir exclusão de alunos vinculados a turmas
 class FicharioAluno {
    private:
    Aluno alunos[];
    
    public:
     FicharioAluno();
     FicharioAluno(Aluno *);

     void cadastrar();
     void relatorio();
     void alterar();
     void excluir();
     void consultar();


}
#endif
