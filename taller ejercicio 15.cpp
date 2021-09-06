#include <iostream>
#include <conio.h>

using namespace std;
main(){
	int n1,n2,op;
	cout<<"\t\t\t\t\t bienvenido a la mejor calculadora del mundo! \n\n";
	cout<<"ingrese wl peimer numero a operar: ";
	cin>>n1;
	cout<<"ingrese el segundo numero a operar: ";
	cin>>n2;
	system("cls");
	cout<<"\t\t\t\t\t\tmenu de opeeraciones\n\n";
	cout<<"\t\t\t\t\t\t1: suma\n";
    cout<<"\t\t\t\t\t\t2: resta\n";
    cout<<"\t\t\t\t\t\t3: multiplicacion\n";
    cout<<"\t\t\t\t\t\t4: division\n\n";
    cout<<"elija una operacion del menu para ejecutar: ";
    cin>>op;
    system("cls");
    switch(op){
    	case 1:
    		cout<<"\t\t\t\t\tresultado de la operacion "<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
    		break;
    	case 2:
    		cout<<"\t\t\t\t\tresultado de la operacion "<<n1<<" - "<<n2<<" = "<<n1+n2<<endl;
    		break;
    	case 3:
    		cout<<"\t\t\t\t\tresultado de la operacion "<<n1<<" x "<<n2<<" = "<<n1+n2<<endl;
    		break;
    	case 4:
    		cout<<"\t\t\t\t\tresultado de la operacion "<<n1<<" / "<<n2<<" = "<<n1+n2<<endl;
    		break;
    	default:
    		cout<<"\t\t\t\t\t\toperacion incorrecta! "<<endl;
			break;
	}

}
