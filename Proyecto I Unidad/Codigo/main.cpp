#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int opcion = 0;
	
	system("cls");
	
	cout<<"**************\nMENU DE JUEGOS\n**************\n"<<endl;
	cout<<"Seleccione un juego\n"<<endl;
	cout<<"1 - StarShip"<<endl;
	cout<<"2 - Snake\n"<<endl;
	
	//Ciclo para validar la entrada de datos
	do {
		cout<<"Ingrese un numero del menu para continuar: ";
		cin>>opcion;
		
		if (opcion<1 || opcion>2)
			cout<<"\nError! Recuerda ingresar una de las opciones del menu"<<endl;
		
	} while (opcion<1 || opcion>2);

	switch (opcion)
	{
		case 1:
			system ("cls");
			starShip();
			break;
		
		case 2:
			system ("cls");
			snake();
			break;
	}
    return 0;
}