#include "ipotenusa.hpp"
#include <iostream>
#include <cmath>
using namespace std;

float ipotenusa(float cateto1,float cateto2)
{
    float a= powf(cateto1, 2);
    float b= powf(cateto2, 2);
    return (sqrt(a+b));
}