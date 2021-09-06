#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	float ropa,gafas,comida,iva,total,ivaropa,ivagafas,ivacomida;
	string eleccion;
	cout<<" hola, estas en el supermercado "<<endl;
	cout<<" que desea  comprar? \n";
	cout<<" ropa = $5000 \n";
	cout<<" gafas = $30000 \n";
	cout<<" comida = $15000 \n";
	ropa=5000;
	ivaropa=(ropa*16)/100;
	gafas=30000;
	ivagafas=(gafas*16)/100
	comida=15000;
	ivacomida=(comida*16)/100;
	cout<<" cual de estos productos quisiera adquirir? \n";
	cin>>eleccion;
	if (eleccion=="ropa")
	{
		cout<<" el valor total sin iva incluido es de "<< ropa << "pesos \n";
		cout<<" el valor total de iva es de "<< ivaropa << " pesos \n";
		cout<<" el valor total iincluido es de "<< (ivaropa+ropa) << " pesos \n"
	}
	if (eleccion=="gafas")
	{
		cout<<" el valor sin iva incluido es de "<< gafas <<" pesos \n":
		cout<<" el valor total del iva es de "<< ivagafas << " pesos \n";
		cout<<" el valor con iva incluido es de "<< (gafas+ivagafas) << " pesos \n";
	}
	if (eleccion=="comida")
	{
		cout<<" el valor sin iva incluido es de "<< ropa <<" pesos \n":
		cout<<" el valor total del iva es de "<< ivaropa << " pesos \n";
		cout<<" el valor con iva incluido es de "<< (ivacomida+comida) << " pesos \n";
	}
}
