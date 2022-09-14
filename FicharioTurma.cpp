#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "FicharioTurma.h"
#include "Turma.h"


FicharioTurma::FicharioTurma(Turma  *turmas, int tamanhoFicharioTurmas){
        this->turmas = turmas;
        this->tamanhoFicharioTurmas = tamanhoFicharioTurmas;
        this->qtdeTurmasFichario = 0;
  }

void FicharioTurma::cadastrar()
{
        
    string codigo, periodo, materia;
    

        

        if(qtdeTurmasFichario < tamanhoFicharioTurmas)
        {
                cout << " === Cadastrar TURMA ==== " << endl;
                cout << "\nMateria: ";
                cin >> materia;
                cout << "\nPeriodo: ";
                cin >> periodo;
                cout << "\nCodigo: ";
                cin >> codigo;
                

                Turma Turma(materia, periodo, codigo);
                turmas[qtdeTurmasFichario] = Turma;
                qtdeTurmasFichario++;
                
                

        }   else 
            {
                cout << "Cadastros esgotados!";
            }

}
    void FicharioTurma::alterar()
    {
        string materia, periodo, codigo;
        int pos;

        cout<<"--==ALTERAR TURMA==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(pos<0||pos>tamanhoFicharioTurmas)
        {
            cout<<"Codigo atual: " <<turmas[pos].getCodigo()<<endl;
            cout<<"Digite o novo codigo ";
            cin>>codigo;
            turmas[pos].setCodigo(codigo);
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

        
        if(pos<0||pos>tamanhoFicharioTurmas)
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             turmas[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                turmas[pos].setCodigo("Apagado");
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

        if(pos<0||pos>tamanhoFicharioTurmas)
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
        
        
        
        for(int pos=0;pos<qtdeTurmasFichario;pos++)
        {
            if (turmas[pos].getCodigo() != "Apagado")
            {
            
                turmas[pos].toString();
            }
                
        }
        
        
    };
