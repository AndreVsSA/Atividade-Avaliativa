// não permitir exclusão de professores vinculados a turmas
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "ficharioprofessor.h"
#include "professor.h"

FicharioProfessor::FicharioProfessor(Professor * _professores){
        professores = _professores;
}

void FicharioProfessor::cadastrar(){
        
    string nome, telefone, registro, cpf, email;

        int contador = 0;

        Professor *pprofessor;

        while ((pprofessor = &professores[contador])==nullptr){
            contador++;
        }

        if(contador < 40)
        {
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

                Professor Professor(nome, telefone, registro, cpf, email);
                professores[contador] = Professor;
        }   else 
            {
                cout << "Cadastros esgotados!";
            }

}
    void FicharioProfessor::alterar()
    {
        string nome, telefone, cpf, email;
        int pos;

        cout<<"--==ALTERAR Professor==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(pos<0||pos>40)
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
        Professor *pprofessor;
        
        cout<<"--==EXCLUIR Professor==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        pprofessor=&professores[pos];
        if(pos<0||pos>40)
        {
            professores[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                delete[] pprofessor;//não consegui encontrar uma função pra deletar um componente de um vetor
            }else
            {
                cout<<"Eclusao nao efetuada"<<endl;
            }

        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    };
    void FicharioProfessor::consultar()
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
                
                professores[pos].toString();
            }
    };
    void FicharioProfessor::relatorio()
    {
        cout<<"-==RELATORO DE professores==--"<<endl;
        
        
        
        for(int pos=0;pos<40;pos++)
        {
            if ((&professores[pos]) == nullptr)
            {
                break;;
            }else{
                professores[pos].toString();
            }
                
        }
        
        
    };
