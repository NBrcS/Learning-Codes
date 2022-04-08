#include <string>
#include <iostream>

using namespace std;

class FiguraGeometrica{
    public:
        FiguraGeometrica(int tipo);

        string getNome();

        virtual float calcularArea();
        virtual void lerAtributosArea();

    protected:
        string nome;
        int tipo;


};

class Circulo : public FiguraGeometrica{
    public:
        Circulo();

        float calcularArea();
        void lerAtributosArea();

    private:
        float raio;
};


class Quadrado : public FiguraGeometrica{
    public:
        Quadrado();

        float calcularArea();
        void lerAtributosArea();

    private:
        float lado;
};

class Retangulo : public FiguraGeometrica{
    public:
        Retangulo();

        float calcularArea();
        void lerAtributosArea();

    private:
        float base;
        float altura;
};


class Triangulo : public FiguraGeometrica{
    public:
        Triangulo();

        float calcularArea();
        void lerAtributosArea();

    private:
        float base;
        float altura;
};



int main()
{
    int tipo=1;

    FiguraGeometrica *generic = new FiguraGeometrica(0);
    while(tipo){
        cin >> tipo;

        if (tipo==1){
            generic = new Quadrado();

            generic->lerAtributosArea();
            cout << generic->getNome() << " de área " << generic->calcularArea() << endl;
        }
        if (tipo==2){
            generic = new Retangulo();

            generic->lerAtributosArea();
            cout << generic->getNome() << " de área " << generic->calcularArea() << endl;
        }
        if (tipo==3){
            generic = new Triangulo();

            generic->lerAtributosArea();
            cout << generic->getNome() << " de área " << generic->calcularArea() << endl;
        }
        if (tipo==4){
            generic = new Circulo();

            generic->lerAtributosArea();
            cout << generic->getNome() << " de área " << generic->calcularArea() << endl;
        }
    }
}


//Triangle implements
Triangulo::Triangulo() : FiguraGeometrica(3){
    this->nome = "Triângulo";
}

float Triangulo::calcularArea(){
    return (this->base*this->altura)/2;
}
void Triangulo::lerAtributosArea(){
    cin >> this->base >> this->altura;
}


//Rectangle implements
Retangulo::Retangulo() : FiguraGeometrica(2){
    this->nome = "Retângulo";
}

float Retangulo::calcularArea(){
    return this->base*this->altura;
}
void Retangulo::lerAtributosArea(){
    cin >> this->base >> this->altura;
}


//Square implements
Quadrado::Quadrado() : FiguraGeometrica(1){
    this->nome = "Quadrado";
}


float Quadrado::calcularArea(){
    return lado*lado;
}

void Quadrado::lerAtributosArea(){
    cin >> lado;
}

//Circle implements
Circulo::Circulo() : FiguraGeometrica(4){
    this->nome = "Círculo";
}

float Circulo::calcularArea(){
    return 3.14*raio*raio;
}

void Circulo::lerAtributosArea(){
    cin >> raio;
}


//GeometricFigure implements
FiguraGeometrica::FiguraGeometrica(int tipo){}


float FiguraGeometrica::calcularArea(){
    return 0;
}
void FiguraGeometrica::lerAtributosArea(){}
string FiguraGeometrica::getNome(){
    return nome + " polimórfico";
}