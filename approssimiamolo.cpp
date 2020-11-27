#include <cmath>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])

{
        float valoredapprossimare;
        int risultato;

         if (argc == 1)
    {
            cout << "fornire i valori in argomento" << endl;

    } 
    
        else        
        
    {
        for (int i = 1; i < argc ; i++)
        {
            valoredapprossimare= atof(argv[i]);
           
            risultato = roundf(valoredapprossimare);
            setprecision(1);
            cout << risultato<<endl;
            
        }
    }
    return 0;
}
