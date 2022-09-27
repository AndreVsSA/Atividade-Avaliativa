#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "FicharioTurma.h"
#include "Turma.h"
#include <vector>
#include<bits/stdc++.h>
using std::vector;


FicharioTurma::FicharioTurma(vector <Turma> turmas){
        this->turmas = turmas;
        
  }

void FicharioTurma::cadastrar()
{
        
    string codigo, periodo, materia;
    

                cout << " === Cadastrar TURMA ==== " << endl;
                cout << "\nMateria: ";
                cin >> materia;
                cout << "\nPeriodo: ";
                cin >> periodo;
                cout << "\nCodigo: ";
                cin >> codigo;
                

                Turma turma(materia, periodo, codigo);
                auto it = find(turmas.begin(), turmas.end(), turma);
                  if(it != turmas.end())
                  {
                      cout << "Aluno já cadastrado!"<< endl;
                  }else
                  {
                      turmas.push_back(turma);
                  }

}
    void FicharioTurma::alterar()
    {
        string materia, periodo, codigo;
        int pos;

        cout<<"--==ALTERAR TURMA==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(turmas[pos].getCodigo()!=0)
        {
            
            cout<<"\n\nPeriodo Atual: "<<turmas[pos].getPeriodo()<<endl;
            cout<<"Digite o novo periodo: ";
            cin>>periodo;
            turmas[pos].setPeriodo(periodo);
            cout<<"\n\nMateria atual: "<<turmas[pos].getMateria()<<endl;
            cout<<"Digite a nova materia: ";
            cin>>materia;
            turmas[pos].setMateria(materia);
            


        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    }
    void FicharioTurma::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR TURMA==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>turmas.size())
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             turmas[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                turmas.erase(turmas.begin()+pos);
            }else
            {
                cout<<"Exclusao nao efetuada"<<endl;
            }
        }
    };
    void FicharioTurma::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>turmas.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                turmas[pos].toString();
            }
    };
    void FicharioTurma::relatorio()
    {
        cout<<"-==RELATORO DE TURMAS==--"<<endl;
        
        
        
        for(int pos=0;pos<turmas.size();pos++)
        {
            turmas[pos].toString();
                
        }
        
        
    };
