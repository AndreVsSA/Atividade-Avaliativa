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
   
   public:
        FicharioProfessor(Professor *); // ou FicharioProfessor(Professor *)
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif
