#include <iostream>
using namespace std;
#include "Turma.h"
#include "Professor.h"
#include "Aluno.h"



    
    Turma::Turma(){}
    Turma::Turma(string materia,string periodo,string codigo){
      this->materia= materia;
      this->periodo=periodo;
      this->codigo=codigo;
    }
    string Turma::getMateria()const
    {
      return materia;
    }
    string Turma::getPeriodo()const
    {
      return periodo;
    }
    string Turma::getCodigo()const
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
    }void Turma::setCodigo(const string codigo)
    {
      this->codigo=codigo;
    }
    void Turma::toString(){
            cout << " === TURMA ==== " << endl;
            cout << "Materia: "<<materia<<endl;
            cout << "Periodo: "<<periodo<<endl;
            cout << "Codigo: "<<codigo<<endl;
            
    }
    
