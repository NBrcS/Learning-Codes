#include <iostream>
#include <fstream>

using namespace std;

void geraArquivo(string path, string data) 
{
    fstream fs;
    fs.open(path.c_str(), fstream::out);
    if (fs.is_open())
    { 
        fs.write(data.c_str(), data.size());
        fs.close();
    }
    else cout <<"Nao foi possivel abrir o arquivo " << path;
}

void geraArquivos()
{
    string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
                    "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"   
                    "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n" 
                    "1\nDenis Carlos\n(83) 5555-5555\n"; 
                    
    string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                    "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                    "1\nJonas Luz\n(83) 3333-3333\n";
                
    geraArquivo("dados01.txt", data1);
    geraArquivo("dados02.txt", data2);
}

class Person
{
    private: 
        int tipo;
        string nome;
        string telefone;
        string cpf;

    public:
        Person(){};

        string getNome() const { return nome; }
        void setNome(const string &nome_) { nome = nome_; }

        string getTelefone() const { return telefone; }
        void setTelefone(const string &telefone_) { telefone = telefone_; }

        string getCpf() const { return cpf; }
        void setCpf(const string &cpf_) { cpf = cpf_; }

        int getTipo() const { return tipo; }
        void setTipo(int tipo_) { tipo = tipo_; }
};

void operator<< (ostream& out, Person p)
{
    switch(p.getTipo())
    {
        case 1:
            out << p.getNome() + ", "
                    + "tel: " + p.getTelefone();

            break;
        case 2:
            out << p.getNome() + ", "
                    + "tel: " + p.getTelefone() + ", "
                    + "CPF: " + p.getCpf();
    }
}


int main()
{
    geraArquivos();

    ifstream in;
    Person* p;
    string line;

    getline(cin, line);
    in.open(line);
    if(!in.is_open()) return 1;   

    while(getline(in, line))
    {
        if(line.compare("1") == 0)
        {
            string name, phone;

            getline(in, line);
            name = line;

            getline(in, line);
            phone = line;

            p = new Person();
            p->setTipo(1);
            p->setNome(name);
            p->setTelefone(phone);

        }else if(line.compare("2") == 0){
            string name, phone, cpf;

            getline(in, line);
            name = line;

            getline(in, line);
            phone = line;

            getline(in, line);
            cpf = line;

            p = new Person();
            p->setTipo(2);
            p->setTelefone(phone);
            p->setNome(name);
            p->setCpf(cpf);

        }
        cout << *p;
        cout << endl;
    }
}