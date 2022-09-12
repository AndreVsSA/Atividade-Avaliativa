#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "ficharioaluno.h"
#include "aluno.h"

FicharioAluno::FicharioAluno(Aluno * _alunos){
        alunos = _alunos;
}

void FicharioAluno::cadastrar(){
        
    string nome, telefone, matricula, cpf, email;

        int contador = 0;

        Aluno *aaluno;

        while ((aaluno = &alunos[contador])==nullptr){
            contador++;
        }

        if(contador < 40)
        {
                cout << " === Cadastrar ALUNO ==== " << endl;
                cout << "\nMatrícula: ";
                cin >> matricula;
                cout << "\nCPF: ";
                cin >> cpf;
                cout << "\nNome: ";
                cin >> nome;
                cout << "\nTelefone: ";
                cin >> telefone;
                cout << "\nEmail: ";
                cin >> email;

                Aluno aluno(nome, telefone, matricula, cpf, email);
                alunos[contador] = aluno;
        }   else 
            {
                cout << "Cadastros esgotados!";
            }

}
    void FicharioAluno::alterar()
    {
        
    }
    void FicharioAluno::excluir(){

    };
    void FicharioAluno::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos<0||pos>39)
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
            cout << " === ALUNO ==== " << endl;
            cout << "Matrícula: "<<alunos[pos].matricula<<endl;
            cout << "CPF: "<<alunos[pos].cpf<<endl;
            cout << "Nome: "<<alunos[pos].nome<<endl;
            cout << "Telefone: "<<alunos[pos].telefone<<endl;
            cout << "Email: "<<alunos[pos].email<<endl;
            }
    };
    void FicharioAluno::relatorio(){

    };

