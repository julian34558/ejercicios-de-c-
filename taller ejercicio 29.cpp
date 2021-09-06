#include <iostream> 
#include <cstdlib> 
using namespace std; 
main()
{
	int a1,a2;
	cout<<" cual es el mayor de los dos numeros? "<<endl;
	cout<<" digita el primer numero "<<endl;
	cin>>a1;
	cout<<" digita el segundo numero"<<endl;
	cin>>a2;
	if (a1>a2)
	{
		cout<< a1 << " es mayor que " << a2 << endl;
	}else{
		cout<< a2 << " es mayor que " << a1 <<endl;
	}
}
