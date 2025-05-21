#include <iostream>

using namespace std;



void vendedor_ambulante(){
	int cantidad;

	cout << "\n\tIngresar cantidad de dinero en el banko: "; cin >> cantidad;
	cout << "\n\tSe vende arracha, cebolla, aguacate.";

	if (cantidad < 10000){
		cout << "\n\n\tEstá pelado de villegas parce...\n";
	}
}


int main(){
	
	cout << "\n\tquiero cafe dame cafe\n\t Tomate de aliño";

	vendedor_ambulante();
	return 0;
}

