#include <iostream>
#include <conio.h>

using namespace std;
main(){
	int opcion;
	cout<<" ingrese el dia (1-7) de la semana ";
	cin>>opcion;
	
	switch(opcion){
    	case 1:
		    cout<<"el dia de hoy lunes";
		    break;
    	case 2:
		    cout<<"el dia de hoy martes ";
		    break
    	case 3:
		    cout<<"el de¡ia de hoy miercoles";
		    break
	    case 4:
		    cout<<"el ida de hoy jueves";
		    break
	    case 5:
		    cout<<"el dia de hoy viernes";
		    break
	    case 6:
		    cout<<"el dia de hoy sabado";
		    break
	    case 7:
		    cout<<"el dia de hoy domingo";
		    break
	    default:
		    cout<<"numero invalidado";	
			break	
	}
}
