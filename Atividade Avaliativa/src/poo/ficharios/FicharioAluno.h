#ifndef FICHARIOALUNO_H
#define FICHARIOALUNO_H
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Aluno.h"

// adicionar os metodos alterar, excluir e consultar
// não permitir exclusão de alunos vinculados a turmas
 class FicharioAluno{
   private:
        Aluno * alunos; 
   
   public:
        FicharioAluno(Aluno *); // ou FicharioAluno(Aluno *)
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif
