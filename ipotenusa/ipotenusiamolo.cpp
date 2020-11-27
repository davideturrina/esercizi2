#include <cmath>
#include <iomanip>
#include <iostream>
#include "ipotenusa.hpp"

using namespace std;

            float cateto[3];
            float risultato;
            float cateto1;
            float cateto2;
int main(int argc, char* argv[])

{

         if (argc != 3)
    {
            cout << "fornire dimensione di 2 cateti come argomenti" << endl;


    } 
    
        else     
        
    { 
  
        cateto1=atof(argv[1]);
        cateto2=atof(argv[2]);

        
        risultato= ipotenusa(cateto1, cateto2);
            cout << risultato;
        }

    return 0;
}
