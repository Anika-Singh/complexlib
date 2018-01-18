#include "complex.h"

#include <iostream>
#include <ostream>
#include <sstream>
#include <fstream>
#include <stdio.h>
#include <math.h>


complex conj(complex c1) {

    complex c2(c1.re, -1*c1.im);
    return c2;
}
