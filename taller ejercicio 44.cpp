#include <iostream> 
#include <conio.h> 
using namespace std; 
main()
{
	int base,potencia,a,b;
	cout << "ingrese la base " <<endl;
	cin >> base;
	cout << "ingrese la potencia " <<endl;
	cin >> potencia;
	a=1;
	for (b=1 ; b<=potencia; b++)
	{
		a=a*base;
	}
	cout << "el resultado es: " <<a<<endl;
	system ("pause ");
	return 0;
}
