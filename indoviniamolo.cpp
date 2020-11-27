
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std::chrono;

using namespace std;
#define MAX_RAND 1000;

int main()
{
    srand(time(NULL));
    int n;
    int numerofortunato = rand() % MAX_RAND;


        cout << "indovina il numero randomico da 1 a 1000" << endl;
        auto start = high_resolution_clock::now(); 
        while (n!=numerofortunato)
        
        {
        cin >> n;
        
        if (n < numerofortunato)    
        {
            cout<<"ritenta!"<<endl<<"troppo piccolo"<<endl;
            continue;
            
        } 
        else if (n > numerofortunato)
        {
            cout<<"ritenta!"<<endl<<"troppo grande"<<endl;
            continue;
        
        }

        }    
   auto stop = high_resolution_clock::now(); 
   auto duration = duration_cast<seconds>(stop - start);

   
    cout << "hai indovinato! il numero e' " << numerofortunato<<endl;
     
    cout << duration.count() << "s." << endl;


    return 0;
}
