
#include <iostream>
#include "powInt.hpp"
using namespace std;

int splitter(int toSplit, int index)
{
    return (toSplit / powInt(10, index)%10);
}
    
int main()
{
    int numero;
    int indice;
    int risultato;
        cout<<"numero";
            cin>>numero;
        cout<<"indice";
            cin>>indice;
    int digits[12];
    for (int i = 0; i < 12; i++)
    {
        digits[i] = splitter(numero, indice);
    }        
        risultato= digits[indice] ;
    cout<< risultato;

}



