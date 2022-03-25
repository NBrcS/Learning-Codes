#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    private:
        float Radius;
        int X;
        int Y;
    
    public: 
        Circle();
        Circle(float, int = 0, int = 0);
        ~Circle(){};

        float Area();
        float Diameter();
        float Perimeter();
        void Print_inf();
        void set_radius(float);
        void set_origin(int, int);
};

#endif