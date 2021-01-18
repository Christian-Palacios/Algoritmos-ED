#include <iostream>
using namespace std;
//DECLARACIÓN DE VARIABLES
int ma, num, pe, tot,pes, peso;
int aux=1;
int aux1=1;
int aux2=1;
char an[20];
char op;
int main()
{
    do
    {
        cout<<"MENU\na) Mamíferos\nb) Reptiles\nc) Aves\nd) Número de animales y peso total\ne) Salir\nOPCIÓN: ";
        cin>>op;
        switch(op)
        {
        case 'A':
        case 'a':
        {
            cout<<"¿Cuantos animales mamíferos ingresaran?\n";
            cin>>ma;
            do
            {
                cout<<"MAMÍFERO "<<aux<<":\n";
                cout<<"¿De qué animal se trata?\n";
                cin>>an;
                cout<<"¿Cuantos "<<an<<"s ingresarán\n";
                cin>>num;
                cout<<"Peso de cada "<<an<<" en kg\n";
                cin>>pe;
                aux++;
                tot=tot+num;
                pes=num*pe;
                peso=peso+pes;
            }
            while(ma>=aux);
        }
        break;
        case 'B':
        case 'b':
        {
            cout<<"¿Cuantos animales reptíles ingresaran?"<<endl;
            cin>>ma;
            do
            {
                cout<<"REPTIL "<<aux1<<":\n";
                cout<<"¿De qué animal se trata?\n";
                cin>>an;
                cout<<"¿Cuantos "<<an<<"s ingresarán\n";
                cin>>num;
                cout<<"Peso de cada "<<an<<" en kg\n";
                cin>>pe;
                tot=tot+num;
                aux1++;
                pes=num*pe;
                peso=peso+pes;
            }
            while(ma>=aux1);
        }
        break;
        case 'C':
        case 'c':
        {
            cout<<"¿Cuantos animales aves ingresaran?\n";
            cin>>ma;
            do
            {
                cout<<"AVE "<<aux2<<":\n";
                cout<<"¿De qué animal se trata?\n";
                cin>>an;
                cout<<"¿Cuantos "<<an<<"s ingresarán\n";
                cin>>num;
                cout<<"Peso de cada "<<an<<" en kg\n";
                cin>>pe;
                aux2++;
                tot=tot+num;
                pes=num*pe;
                peso=peso+pes;
            }
            while(ma>=aux2) ;
        }
        break;
        case 'D':
        case 'd':
            cout<<"Se han ingresado "<<tot<<" animales, con un peso total de "<<peso<<" kg\n";
            break;
        case 'E':
        case 'e':
            cout<<"\n\t\t\t\t\t¡¡¡¡¡ATENCIÓN!!!!!\n\n\n¡Gracias por su atención!";
        }
    }
    while(op!='e'&& op!='E' );
    return 0;
}
