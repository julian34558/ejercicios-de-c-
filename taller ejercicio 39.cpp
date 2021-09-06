#include <iostream> 
#include <conio.h> 
using namespace std; 
main()
{
	int a,b,c,d,e;
	cout<<" 100 PRIMEROS NUMEROS DE  FIBONACCI \n\n";
	cout<<" digite el numero de veces que quiere que se repita la serie: ";
	cin>>a;
	b=0;
	c=1;
	for (e=1;e<=a;e++)
	{
		cout<<b<<endl;
		d=b+c;
		b=c;
		c=d;
	}
}
