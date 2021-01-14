#include <iostream>

using namespace std;

void ingresar (int a[], int n);

void ordenar (int a[], int n);

void imprimir (int a[], int n);

int main()
{
    int arreglo1[50];
    int n;
    cout<<"Ingrese el tamaño del arreglo:"<<endl;
    cin>>n;
    ingresar(arreglo1,n);
    ordenar(arreglo1,n);
    imprimir(arreglo1,n);
    return 0;
}

void ingresar (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"Ingrese el elementos del arreglo "<<i+1<<endl;
        cin>>a[i];
    }
}

void ordenar (int a[], int n)
{
    int aux;
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (a[j]<a[i])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
}

void imprimir (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<"!"<<a[i]<<"!"<<endl;
    }
}
