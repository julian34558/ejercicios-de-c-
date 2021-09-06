#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
main (){
	int op,sleep;
	string numeros [10] = ("uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve","diez");
	cout <<"programa que cuenta por pantalla del 1 al 10, digite 1 para emepezar y 2 para salir: ";
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"\n";
			for(int i = 0; i < 10; i++)
			{
				cout<<numeros[i]<<endl;
			    sleep(80);
			}
			break;
			case 2:
				cout<<"eligio salir de la aplicacion"<<endl;
				break;
	}
}

