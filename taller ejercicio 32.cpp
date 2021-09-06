#include <iostream> 
#include <cstdlib> 
using namespace std; 
main()
{
	int x,v;
	cout<<" paso o no paso "<<endl;
	cout<<" programa que pida la nota de un estudiante y si esta nota es menor a 3 envie un mensaje (lo siento debes recuperar), si es mayor o igual a 3 envie un mensaje (muy bien pastae la materua)"<<endl;
	cout<<" ¿cual es la nota del estudiante? "<<endl;
	cin>>x;
	if(x>=3)
	{
		cout<< " muy bien pasaste la materia " <<endl;
	}
	else{
		cout<<" lo siento;(jajajajaja) debes recuperar :(" <<endl;
	}
}
