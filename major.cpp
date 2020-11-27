/*
2.8
Trovare il numero più grande in un array è un problema ricorrente in programmazione. SUP che dati 10
numeri, inseriti dall'utente, restituisce il numero più grande.
2.9
Modicare il programma precedente in modo che trovi i due numeri più grandi.
*/

#include <cmath>
#include <cstring>
#include <iostream>
#include <stdlib.h>
using namespace std;

void bubbleSort(int arr[], int out[], int len)
{
    for (int i = 0; i < len; i++) {
        out[i] = arr[i];
    }

    bool swap;
    do { // Pass
        swap = false;
        // Sweep
        for (int i = 0; i < len - 1; i++) {
            // Bubble
            if (out[i] > out[i + 1]) {
                int temp = out[i];
                out[i] = out[i + 1];
                out[i + 1] = temp;

                swap = true;
            }
        }
     } while (swap);
}
    


int main()
{
    int* numero = new int[10];
    int temp[10];
    int out[10];
    for (int i = 0; i < 10; i++)

    {
        cout << "INS N" << endl;
        cin >> numero[i];
        

    }
bubbleSort(numero,out,10);
   
        cout << "secondo n + grande"<<out[8]<<endl;
        cout << "major" <<out[9]<<endl;
    delete[] numero;
    return 0;
}
