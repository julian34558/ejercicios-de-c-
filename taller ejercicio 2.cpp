#include <iostream>
using namespace std;
bool ESPRIMO (int numero);
int main (){
	int numero;
	cout << "digita numero para saber si es primo o no: \n";
	cin >> numero;
	if  (ESPRIMO(numero)) {
		cout <<"el es primo";
	}else{
		cout<< "el numero digitado no es primo";	
	}
}

bool  ESPRIMO (int numero) {   
if (numero == 0 || numero ==1 || numero == 4) return false;        
for (int x = 2; x < numero / 2; x++) {
	if (numero % x == 0) return false;
}
return true;
}


