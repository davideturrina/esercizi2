using namespace std;
#include <iostream> 
#include <stdlib.h>
int studenti;
float media;
int voti;

float sommavoti;
int main ()         
{
    cout<<"ins n studenti";
    cin>>studenti;
    
    for (int i = 1; i < studenti+1; i++)
    {
        cout<<"ins voto del "<< i << "# studente";
        cin>>voti;
        sommavoti+= voti;
    }
    media=(sommavoti/studenti);
    
    cout<<"la media dei voti e'"<<media;
return 0;
}
