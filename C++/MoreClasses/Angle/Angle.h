#ifndef ANGLE_H
#define ANGLE_H

class Angle{
    private:
        double Degree;
        double Cosine;
        double Sine;
        double Tangent;

    public:
        Angle(double = 0.0);
        ~Angle(){};

        double Radian();
        double comp(double);
        Angle operator-(Angle&);
        Angle operator+(Angle&);
        void Print_Info();

        friend std::ostream& operator<<(std::ostream&, const Angle&);
        friend std::istream& operator>>(std::istream&, Angle&);
};

#endif