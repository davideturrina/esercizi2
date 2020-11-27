
#include <iostream>
#include "powInt.hpp"
using namespace std;

    
int main()
{
    char frase[100];
    int posizione;
    cin.getline(frase,100);
    cin>>posizione;
    char risultato= frase[posizione-1];

    cout<< risultato;

return 0;
}



