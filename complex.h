#ifndef COMPLEX_H
#define COMPLEX_H

#include <ostream>
#include <istream>

class complex
{
    public:
        complex();
        complex(double r, double i = 0.0);
        complex operator+(complex c);
        complex operator-(complex c);
        complex operator/(complex c);
        complex operator*(complex c);
        bool operator==(complex c);
        bool operator!=(complex c);

        friend std::ostream & operator<<(std::ostream &os, complex &C);
        friend std::istream& operator>>(std::istream&, complex&); // assumes (a,bi) format

        friend double real(complex c1);
        friend double imag(complex c1);
        friend double abs(complex c1);
        friend complex pow(complex c1, double power);
        friend double norm(complex c1) ;
        friend complex conj(complex c1);

    protected:
    private:
      double re, im;

};

#endif // COMPLEX_H
