#ifndef FICHARIOALUNO_H
#define FICHARIOALUNO_H
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Aluno.h"


// não permitir exclusão de alunos vinculados a turmas
 class FicharioAluno{
   private:
        Aluno * alunos; 
        int qtdeAlunosFichario;
        int tamanhoFicharioAlunos;

   
   public:
        FicharioAluno(Aluno *, int); // ou FicharioAluno(Aluno *)
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif
