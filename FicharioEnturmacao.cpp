#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
#include "FicharioEnturmacao.h"
#include "Enturmacao.h"

FicharioEnturmacao::FicharioEnturmacao(vector <Aluno> alunos, vector <Turma> turmas , vector <Enturmacao> enturmacoes)
{
        this->turmas = turmas;
        this->alunos = alunos;
        this->enturmacoes = enturmacoes;
}
void FicharioEnturmacao::cadastrar()
{
    int posTurma, posAluno;
    

    cout<<"--==Cadastrar ENTURMACAO==--"<<endl;
    cout<<"Qual a posicao da Turma no Vetor?"<<endl;
    cin>>posTurma;
    cout<<"Qual a posicao do Aluno no Vetor?"<<endl;
    cin>>posAluno;

    Enturmacao enturmacao(turmas[posTurma],alunos[posAluno]);

    auto it = find(enturmacoes.begin(), enturmacoes.end(),enturmacao);
    if(it != enturmacoes.end())
    {
        cout << "Enturmação já realizada!"<< endl;
    }else
    {
        enturmacoes.push_back(enturmacao);
    }
};
void FicharioEnturmacao::excluir()
{
    int pos, res;
    cout<<"--=Excluir Enturmacao=--"<<endl;
    cout<<"Qual posicao desejas excluir?"<<endl;
    cin>>pos;

    if(pos>enturmacoes.size())
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             enturmacoes[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                 enturmacoes.erase(enturmacoes.begin()+pos);
            }else
            {
                cout<<"Exclusao nao efetuada"<<endl;
            }
        }
};
void FicharioEnturmacao::consultar()
{
    int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>enturmacoes.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                enturmacoes[pos].toString();
            }
}
void FicharioEnturmacao::relatorio()
    {
        cout<<"-==RELATORO DE ALUNOS==--"<<endl;
        
        
        
        for(int pos=0;pos<enturmacoes.size();pos++)
        {
            
            
                enturmacoes[pos].toString();
            
                
        }
        
        
    };
