#include <iostream>
#include <conio.h>

main (){
	int mes;
	cout<<"ingrese el numero del mes que quiere comprobar (formato 1-12): ";
	cin>>mes;
	if ( mes >= 1 && mes <= 12 ){
		switch(mes){
			case 1 :
				cout<<"el mes enero con 31 dias ";
				break;
			case 2:
				cout<<"el mes de febrero con 28 dias";
				break;
			case 3:
				cout<<"el mes de marzo con 31 dias";
				break;
			case 4:
				cout<<"el mes de abril con 30 dias ";
				break;
			case 5:
				cout<<"el mes de mayo con 31 dias ";
				break;
			case 6:
				cout<<"el mes de junio con 30 dias ";
				break;
			case 7:
				cout<<"el mes de julio con 31 dias ";
				break;
			case 8:
				cout<<"el mes de agosto  con 31 dias ";
				break;
			case 9:
				cout<<"el mes de septiembre con 30 dias ";
				break;
			case 10:
				cout<<"el mes de octubre con 31 dias ";
				break;
			case 11:
				cout<<"el mes de noviembre con 30 dias ";
				break;
			case 12:
				cout<<"el mes de diciembre con 31 dias ";
				break;                                                       
				
		}
	}else{
	cout<<"el mes ingresado no es correcto || ";
		}
}
