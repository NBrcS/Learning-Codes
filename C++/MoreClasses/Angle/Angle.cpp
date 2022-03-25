#include "Angle.h"
#include <iostream>
#include <math.h>

using namespace std;

Angle::Angle(double angle){
    Degree = angle;

    Cosine = cos(angle);
    Sine = sin(angle);
    Tangent = tan(angle); 
}

double Angle::Radian(){
    return Degree / 180;
}
double Angle::comp(double degree){
    return 90 - degree;
}
Angle Angle::operator-(Angle& angle){
    return Degree - angle.Degree;
}
Angle Angle::operator+(Angle& angle){
    return Degree + angle.Degree;
}
void Angle::Print_Info(){
    cout << "Angle: " << Degree << endl;
    cout << "Tangent: " << Tangent << endl;
    cout << "Cosine: " << Cosine << endl;
    cout << "Sine: " << Sine << endl;
    cout << "Comp: " << Angle::comp(Degree) << endl;
    cout << "Radian: " << Angle::Radian() << endl;
    cout << endl;
}
ostream& operator<<(ostream& out, const Angle& a){
    out << a.Degree;
    return out;
}
istream& operator>>(istream& in, Angle& a){
    in >> a.Degree;
    return in;
}