#include<iostream> 
#include<chrono>
#include "nputils.hpp"
using namespace std; 
using namespace std::chrono; 
   
int main() 
{ 
    int long long num;
    cout << "numeri perfetti fino a";
    cin>> num; 
    auto start = high_resolution_clock::now(); 
    for (int n =2; n<num; n++) 
    {
        if (isPerfect(n)) 
            cout << n << endl; 
    }
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << duration.count() << "ms." << endl;
    return 0; 
} 