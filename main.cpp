#include iostream

using namespace std;
// completar os menus
// todos devem ter os metodos cadastrar, alterar, excluir, consultar e relatorio


    int main(int argc, char **argv) {
        
        Aluno alunos [] = new Aluno[40];

        
        FicharioAluno ficharioAluno = new FicharioAluno(alunos);

        int operacaoGeral, operacaoCadastro;
        do {
            cout<<" === ALUNO === ";
            cout<<"1 - Aluno ";
            cout<<"2 - Professor ";
            cout<<"3 - Turmas ";
            cout<<"4 - Sair ";
            cin>>operacaoGeral
            entrada.skip("\n");

            switch (operacaoGeral){
                case 1: // cadastro de aluno
                    do {
                        cout<<" === ALUNO === "<<endl;
                        cout<<"1 - Cadastrar Aluno "<<endl;
                        cout<<"2 - Alterar Aluno "<<endl;
                        cout<<"3 - Excluir Aluno "<<endl;
                        cout<<"4 - Consultar Aluno "<<endl;
                        cout<<"5 - Relatório do Aluno "<<endl;
                        cout<<"6 - Voltar ao menu principal"<<endl;
                        cout<<"Opção: "<<endl;
                        cin>>operacaoCadastro
                        entrada.skip("\n");

                        switch (operacaoCadastro) {
                            case 1:
                                ficharioAluno.cadastrar();
                                break;
                            case 5:
                                ficharioAluno.relatorio();
                                break;
                            default:
                                if (operacaoCadastro != 6) {
                                    cout<<"Opção inválida."<<endl;
                                }
                        }

                    } while (operacaoCadastro != 6);

                    break; // fim do case aluno
                default:
                    if (operacaoGeral != 4) {
                        cout<<"Opção inválida."<<endl;
                    }
            }
        } while ( operacaoGeral != 4);

    }
