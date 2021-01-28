#include <iostream>
#include <fstream>
using namespace std;

void Escribir_Archivo();
void Leer_Archivo();

int main()
{
    Escribir_Archivo();
    Leer_Archivo();
    return 0;
}

void Escribir_Archivo()
{
    string nombre, apellido, nombrearchivo;
    int edad;
    char r;
    ofstream archivoprueba;
    cout<<"Ingrese el nombre del archivo:\n";
    //cin>>nombrearchivo;
    getline(cin,nombrearchivo);
    archivoprueba.open(nombrearchivo.c_str(),ios::out);
    do
    {
        cout<<"\t Ingrese el nombre:\n";
        getline(cin,nombre);
        cout<<"\t Ingrese el apellido:\n";
        getline(cin,apellido);
        cout<<"\t Ingrese la edad:\n";
        cin>>edad;
        archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<endl;
        cout<<"Desea ingresar otro contacto: \n";
        cin>>r;
        cin.ignore();
    }
    while(r=='s');
    archivoprueba.close();
}




void Leer_Archivo()
{
    string nombre, apellido;
    int edad;
    ifstream archivolectura("Libreta.txt");
    string texto;
    while (!archivolectura.eof())
    {
        archivolectura>>nombre>>apellido>>edad;
        getline(archivolectura,texto);
        if (!archivolectura.eof())
        {
            cout<<"Nmobre: "<<nombre<<endl;
            cout<<"Apellido: "<<apellido<<endl;
            cout<<"Edad: "<<edad<<endl;
        }
    }
    archivolectura.close();
}
