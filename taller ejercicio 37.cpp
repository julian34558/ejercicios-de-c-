#include <iostream> 
#include <cstdlib> 
using namespace std; 
main()
{
	int a;
	cout<<" numeros pares, del 2 hasta el 1000 ";
	a=0;
	while (a<1000)
	{
		a=a+2;
		cout<<a<<endl;
	}
	cout<<" lista de numeros impares 1 al 999 ";
	a=-1;
	while (a<1000){
		a=a+2;
		cout<<a<<endl;
	}
}
