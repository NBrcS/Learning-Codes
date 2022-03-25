#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(){
    X = 0;
    Y = 0;
    Radius = 0.0;
}
Circle::Circle(float rr, int xx, int yy){
    Radius = rr;
    X = xx;
    Y = yy;
}

float Circle::Area(){
    return Radius*Radius*3.141592;
}

float Circle::Diameter(){
    return Radius*2;
}

float Circle::Perimeter(){
    return 2*Radius*3.141592;
}

void Circle::Print_inf(){
    cout << "Radius = " << Radius << endl;
    cout << "Area = " << Circle::Area()<< endl;
    cout << "Perimeter = " << Circle::Perimeter()<< endl;
    cout << "Diameter = " << Circle::Diameter()<< endl;
}

void Circle::set_radius(float rr){
    if(rr > 0){
        Radius = rr;
    }
    else{
        Radius = 0;
    }
}

void Circle::set_origin(int xx, int yy){
    X = xx;
    Y = yy;
}