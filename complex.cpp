#include "complex.h"

#include <iostream>
#include <ostream>
#include <sstream>
#include <fstream>
#include <stdio.h>

complex::complex()
{
    re = 0.0;
    im = 0.0;
}

complex::complex(double r, double i)
{
    re = r;
    im = i;
}

complex complex::operator+(complex c)
{
    complex result;
    result.re = re + c.re;
    result.im = im + c.im;
    return result;
}

complex complex::operator-(complex c)
{
    complex result;
    result.re = re - c.re;
    result.im = im - c.im;
    return result;
}

complex complex::operator/(complex c)
{
  complex a;
  a.re=((re*c.re)+(im*c.im))/((c.re*c.re)+(c.im*c.im));
  a.im=((im*c.re)-(re*c.im))/((c.re*c.re)+(c.im*c.im));
  return a;
}

complex complex::operator*(complex c)
  {
  complex a;
  a.re=(re*c.re)-(im*c.im);
  a.im=(re*c.im)+(im*c.re);
  return a;
  }


bool complex::operator==(complex c)
  {
      if ( re == c.re && im == c.im)
        return true;
      else
        return false;
  }

bool complex::operator!=(complex c)
  {
      if ( re != c.re || im != c.im)
        return true;
      else
        return false;
  }


std::ostream &operator << (std::ostream &os, complex &c)
{

    os<< "(" << c.re << ", " << c.im << ")" ;

    return os;

}

std::istream& operator>>(std::istream& is_, complex& c) // assumes (a,bi) format
{
    char ch = 0;
    double r = 0;
    double i = 0;

    is_ >> ch >> r >> ch >> i >> ch >> ch;

    c.re = r;
    c.im = i;

    return is_;
}

