#include <iostream>
using namespace std;
#include "Turma.h"
#include "Professor.h"
#include "Aluno.h"



    
    Turma::Turma(){}
    Turma::Turma(string materia,string periodo,string codigo){
      ++indice;
      this->materia= materia;
      this->periodo=periodo;
      this->codigo=indice;
    }
    string Turma::getMateria()const
    {
      return materia;
    }
    string Turma::getPeriodo()const
    {
      return periodo;
    }
    int Turma::getCodigo()const
    {
      return codigo;
    }
    void Turma::setMateria(const string materia)
    {
      this->materia=materia;
    }
    void Turma::setPeriodo(const string periodo)
    {
      this->periodo=periodo;
    }
    void Turma::toString(){
            cout << " === TURMA ==== " << endl;
            cout << "Materia: "<<materia<<endl;
            cout << "Periodo: "<<periodo<<endl;
            cout << "Codigo: "<<codigo<<endl;
            
    }
    

