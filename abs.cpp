#include "complex.h"

#include <iostream>
#include <ostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <math.h>

double abs (complex c1)
{
  return sqrt(c1.re*c1.re + c1.im*c1.im);
}
