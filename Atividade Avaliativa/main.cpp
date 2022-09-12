#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include "aluno.h"
#include "ficharioaluno.h"

int main(){
        Aluno alunos[100]; 
        FicharioAluno ficharioAluno(alunos);
    
        int operacaoGeral, opCadastroAluno, opCadastroProfessor, opCadastroTurma, opCadastroEnturmacao;
        do {
            cout << " === ACADEMICO === " << endl;
            cout << "1 - Aluno " << endl;
            cout << "2 - Professor " << endl;
            cout << "3 - Turmas " << endl;
            cout << "4 - Enturmações " << endl;
            cout << "0 - Sair " << endl;
            cin >> operacaoGeral;

            switch (operacaoGeral){
                case 1: // cadastro de aluno
                    do {
                        cout << " === ALUNO === " << endl;
                        cout << "1 - Cadastrar Aluno " << endl;
                        cout << "2 - Alterar Aluno " << endl;
                        cout << "3 - Excluir Aluno " << endl;
                        cout << "4 - Consultar Aluno " << endl;
                        cout << "5 - Relatório do Aluno " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >> opCadastroAluno;

                        switch (opCadastroAluno) {
                            case 1:
                                ficharioAluno.cadastrar();
                                break;
                                /*
                            case 2:
                                ficharioAluno.alterar( << endl;
                                break;
                            case 3:
                                ficharioAluno.excluir( << endl;
                                break;
                            case 4:
                                ficharioAluno.consultar( << endl;
                                break;
                            case 5:
                                ficharioAluno.relatorio() << endl;
                                break;
                                */
                            default:
                                if (opCadastroAluno != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }

                    } while (opCadastroAluno != 0);

                    break; // fim do case aluno
                    /*
                case 2: // cadastro de professor
                    do {
                        cout << " === PROFESSOR === " << endl;
                        cout << "1 - Cadastrar Professor " << endl;
                        cout << "2 - Alterar Professor " << endl;
                        cout << "3 - Excluir Professor " << endl;
                        cout << "4 - Consultar Professor " << endl;
                        cout << "5 - Relatório do Professor " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >>  opCadastroProfessor;

                        switch (opCadastroProfessor) {
                            case 1:
                                ficharioProfessor.cadastrar( << endl;
                                break;
                            case 2:
                                ficharioProfessor.alterar( << endl;
                                break;
                            case 3:
                                ficharioProfessor.excluir( << endl;
                                break;
                            case 4:
                                ficharioProfessor.consultar( << endl;
                                break;
                            case 5:
                                ficharioProfessor.relatorio( << endl;
                                break;
                            default:
                                if (opCadastroProfessor != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }

                    } while (opCadastroProfessor != 0 << endl;

                    break; // fim do case professor
                case 3: // cadastro de turma
                    do {
                        cout << " === TURMAS === " << endl;
                        cout << "1 - Cadastrar Turma " << endl;
                        cout << "2 - Alterar Turma " << endl;
                        cout << "3 - Excluir Turma " << endl;
                        cout << "4 - Consultar Turma " << endl;
                        cout << "5 - Relatório da Turma " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >>  opCadastroTurma;


                        switch (opCadastroTurma) {
                            case 1:
                                ficharioTurma.cadastrar( << endl;
                                break;
                            case 2:
                                ficharioTurma.alterar( << endl;
                                break;
                            case 3:
                                ficharioTurma.excluir( << endl;
                                break;
                            case 4:
                                ficharioTurma.consultar( << endl;
                                break;
                            case 5:
                                ficharioTurma.relatorio( << endl;
                                break;
                            default:
                                if (opCadastroTurma != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }

                    } while (opCadastroTurma != 0 << endl;

                    break; // fim do case turma
                case 4: // cadastro de enturmação
                    do {
                        cout << " === ENTURMACAO === " << endl;
                        cout << "1 - Cadastrar Enturmação " << endl;
                        cout << "3 - Excluir Enturmação " << endl;
                        cout << "4 - Consultar Enturmação " << endl;
                        cout << "5 - Relatório do Enturmação " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >> opCadastroEnturmacao;

                        switch (opCadastroEnturmacao) {
                            case 1:
                                ficharioEnturmacao.cadastrar( << endl;
                                break;
                            case 3:
                                ficharioEnturmacao.excluir( << endl;
                                break;
                            case 4:
                                ficharioEnturmacao.consultar( << endl;
                                break;
                            case 5:
                                ficharioEnturmacao.relatorio( << endl;
                                break;
                            default:
                                if (opCadastroEnturmacao != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }

                    } while (opCadastroEnturmacao != 0 << endl;

                    break; // fim do case da enturmacao
                    */
                default:
                    if (operacaoGeral != 0) {
                        cout << "Opção inválida." << endl;
                    }
            }
        } while ( operacaoGeral != 0);


    return 0; // indica terminação bem-sucedida
}