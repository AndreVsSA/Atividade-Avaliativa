#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "ficharioaluno.h"
#include "aluno.h"

FicharioAluno::FicharioAluno(Aluno  *alunos, int tamanhoFicharioAlunos){
        this->alunos = alunos;
        this->tamanhoFicharioAlunos = tamanhoFicharioAlunos;
        this->qtdeAlunosFichario = 0;

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
        string nome, telefone, cpf, email;
        int pos;

        cout<<"--==ALTERAR ALUNO==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(pos<0||pos>40)
        {
            cout<<"Cpf atual: "<<alunos[pos].getCpf()<<endl;
            cout<<"Digite o novo cpf: ";
            cin>>cpf;
            alunos[pos].setCpf(cpf);
            cout<<"\n\nNome atual: "<<alunos[pos].getNome()<<endl;
            cout<<"Digite o novo nome: ";
            cin>>nome;
            alunos[pos].setNome(nome);
            cout<<"\n\nTelefone atual: "<<alunos[pos].getTelefone()<<endl;
            cout<<"Digite o novo telefone: ";
            cin>>telefone;
            alunos[pos].setTelefone(telefone);
            cout<<"\n\nEndereco e email atual: "<<alunos[pos].getEmail()<<endl;
            cout<<"Digite o novo email: ";
            cin>>email;
            alunos[pos].setEmail(email);


        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    }
    void FicharioAluno::excluir()
    {
        int pos, res;
        Aluno *aaluno;
        
        cout<<"--==EXCLUIR ALUNO==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        aaluno=&alunos[pos];
        if(pos<0||pos>40)
        {
            alunos[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                delete[] aaluno;//não consegui encontrar uma função pra deletar um componente de um vetor
            }else
            {
                cout<<"Eclusao nao efetuada"<<endl;
            }

        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
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
                
                alunos[pos].toString();
            }
    };
    void FicharioAluno::relatorio()
    {
        cout<<"-==RELATORO DE ALUNOS==--"<<endl;
        
        
        
        for(int pos=0;pos<40;pos++)
        {
            if ((&alunos[pos]) == nullptr)
            {
                break;;
            }else{
                alunos[pos].toString();
            }
                
        }
        
        
    };

