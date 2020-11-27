using namespace std;
#include <iostream>

int somma=0;
int numero;

int main()

{
    
    for (int i = 0; i < 10; i++)
    {
        cout<< "inserisci numero" <<endl;
        cin>>numero;
        somma+=numero;
       
        if(numero==0)
        {
            break;
        }
        
        
    }
    cout<<"somma"<<somma<<endl;
    return 0;
}
