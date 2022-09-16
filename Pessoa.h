#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;

class Pessoa {
    

    protected :string nome;
    string cpf;
    string telefone;
    string email;

    public:
    Pessoa();
    Pessoa(string);
    string getEmail()const;
    void setEmail(const string);
    string getTelefone()const;
    void setTelefone(const string);
    string getNome()const;
    void setNome(const string);
    string getCpf()const;
    void setCpf(const string);
    int getCodigo() const;

};
#endif
