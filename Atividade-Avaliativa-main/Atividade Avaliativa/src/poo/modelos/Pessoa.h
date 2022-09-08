#ifndef PESSOA_H
#define PESSOA_H
#include <string>
using std::string;

class Pessoa {
    private:

    String nome;
    String cpf;
    String telefone;
    String email;

    public:
    Pessoa()
    Pessoa(string);
    String getEmail()const;
    void setEmail(const string);
    String getTelefone()const;
    void setTelefone(const string);
    String getNome()const;
    void setNome(const string);
    String getCpf()const;
    void setCpf(const string);

};
#endif
