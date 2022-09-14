#ifndef FICHARIOPROFESSOR_H
#define FICHARIOPROFESSOR_H
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Professor.h"

 class FicharioProfessor{
   private:
        Professor * professores;
        int tamanhoFicharioProfessor;
        int qtdeProfessoresFichario;
   
   public:
        FicharioProfessor();
        FicharioProfessor(Professor *,int); // ou FicharioProfessor(Professor *)
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif
