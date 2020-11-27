#include <cmath>
#include <iomanip>
#include <iostream>
#include "nputils.hpp"


bool isPerfect(long long int n) 
{  
    long long int sum = 1;  
    for (long long int i=2; i<n; i++) 
    { 
        if (n%i==0) 
        {  
                sum += i; 
        } 
    }  
     if (sum == n && n != 1) 
          return true; 
   
     return false; 
} 

