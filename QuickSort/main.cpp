#include <iostream>
#include <ctime>
#include "quicklib.h"

using namespace std;


int main()
{
    srand(time(0));
    int a1[10];
    cout<<"Lista desordenada:\n";
    for(int i=0; i<10; i++)
        {
            a1[i]=rand()%100;
        }
    for(int i=0; i<10; i++)
        {
            cout<<"|"<<a1[i]<<"|";
        }
    ordenar(a1,0,9);
    cout<<"\n\nLista ordenada:\n";
    for(int i=0; i<10; i++)
        {
            cout<<"|"<<a1[i]<<"|";
        }
    return 0;
}



