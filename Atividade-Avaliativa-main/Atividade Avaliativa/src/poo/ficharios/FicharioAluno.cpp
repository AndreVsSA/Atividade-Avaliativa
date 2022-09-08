#include <iostream>
using namespace std;
#include "Aluno.h"
#include "FicharioAluno.h"
// adicionar os metodos alterar, excluir e consultar
// não permitir exclusão de alunos vinculados a turmas

    

     FicharioAluno::FicharioAluno(Aluno *_alunos[]){
        alunos = _alunos;
        
    }

     void FicharioAluno::cadastrar(){
        String nome, telefone, matricula, cpf;
        int contador = 0;

        while (alunos[contador] != null){
            contador++;
        }

        if(contador < 40){
           cout<<" === Cadastrar ALUNO ==== ";
            cout<<"Nome: ";
            cin>>nome;
            cout<<"Matrícula: ";
            cin>>matricula

            Aluno *aluno;
            aluno = new Aluno(nome);
            alunos[contador] = aluno;
        } else {
           cout<<"Cadastros esgotados!";
        }

    }
     void FicharioAluno::relatorio() {

       cout<<"[Relatório de ALUNOS]";
        for (int j = 0; j < alunos.; j++) {
            if (alunos[j] != null) {
               cout<<alunos[j];
               cout<<"---------------------";
            }

        }

    }


