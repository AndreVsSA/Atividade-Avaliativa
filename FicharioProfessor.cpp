// não permitir exclusão de professores vinculados a turmas
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
#include "FicharioProfessor.h"
#include "Professor.h"

FicharioProfessor::FicharioProfessor(vector <Professor> professores){
        this->professores = professores;
}

void FicharioProfessor::cadastrar(){
        
    string nome, telefone, registro, cpf, email;

        
                cout << " === Cadastrar Professor ==== " << endl;
                cout << "\nRegistro: ";
                cin >> registro;
                cout << "\nCPF: ";
                cin >> cpf;
                cout << "\nNome: ";
                cin >> nome;
                cout << "\nTelefone: ";
                cin >> telefone;
                cout << "\nEmail: ";
                cin >> email;

                Professor professor(nome, telefone, registro, cpf, email);
                auto it = find(professores.begin(), professores.end(), professor);
                  if(it != professores.end())
                  {
                      cout << "Aluno já cadastrado!"<< endl;
                  }else
                  {
                      professores.push_back(professor);
                  }
                
        

}
    void FicharioProfessor::alterar()
    {
        string nome, telefone, cpf, email;
        int pos;

        cout<<"--==ALTERAR Professor==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(professores[pos].getCodigo()!=0)
        {
            cout<<"Cpf atual: "<<professores[pos].getCpf()<<endl;
            cout<<"Digite o novo cpf: ";
            cin>>cpf;
            professores[pos].setCpf(cpf);
            cout<<"\n\nNome atual: "<<professores[pos].getNome()<<endl;
            cout<<"Digite o novo nome: ";
            cin>>nome;
            professores[pos].setNome(nome);
            cout<<"\n\nTelefone atual: "<<professores[pos].getTelefone()<<endl;
            cout<<"Digite o novo telefone: ";
            cin>>telefone;
            professores[pos].setTelefone(telefone);
            cout<<"\n\nEndereco e email atual: "<<professores[pos].getEmail()<<endl;
            cout<<"Digite o novo email: ";
            cin>>email;
            professores[pos].setEmail(email);


        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    }
    void FicharioProfessor::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR Professor==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>professores.size())
        {
            cout<<"Posicao invalida"<<endl;
        }else
        {
            professores[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                professores.erase(professores.begin()+pos);
            }else
            {
                cout<<"Eclusao nao efetuada"<<endl;
            }

        }
    };
    void FicharioProfessor::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>professores.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                professores[pos].toString();
            }
    };
    void FicharioProfessor::relatorio()
    {
        cout<<"-==RELATORO DE professores==--"<<endl;
        
        
        
        for(int pos=0;pos<professores.size();pos++)
        {
            
                professores[pos].toString();
            
                
        }
        
        
    };
