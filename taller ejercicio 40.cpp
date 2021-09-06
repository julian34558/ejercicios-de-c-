#include <iostream> 
#include <conio.h> 
using namespace std; 
main()
{
	int a,b,c,d,e;
	cout<<" digite el numero hasta el cual desea factorizar ";
	cin>>a;
	for (d=1;d<=a;d++)
	{
		for (b=1;b<=d;b++)
		{
			for (c=1;c<=b;c++)
			{
				if (c==1)
				{
					e=c*c;
				}
				else
				{
					e=e*c;
				}
				if(c==b)
				{
					cout<<e<<endl;
				}
			}
		}
	}
}
