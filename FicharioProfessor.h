#ifndef FICHARIOPROFESSOR_H
#define FICHARIOPROFESSOR_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Professor.h"

 class FicharioProfessor{
   private:
       vector <Professor> professores;
   
   public:
        FicharioProfessor();
        FicharioProfessor(vector <Professor>); // ou FicharioProfessor(Professor *)
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif
