#include <iostream>
#include <conio.h>
using namespace std;

float convertir (int f);
main ()
{
	int farenheit;
	cout <<" digete los grados farenheit  que quiere convertir agrados celcios \m";
	cin>>farenheit;
	if(farenheit == 999)
	{
		cout<<" finalizacion del programa";
	}else{
	cout<<convertir(farenheit)<<" grados celcios";
	}
}
float convertir (int f)	
{
	return (f - 32) * 5/9;
}
