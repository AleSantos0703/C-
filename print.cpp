# include <iostream>
//Faça um programa que o usuário digite um valor. Este valor é apresentado na tela
//juntamente com seu antecessor e sucessor.
int main(){
	int valor;
	using namespace std;
    cout << "Digite um valor: ";
     cin >> valor;
     
     int ant = valor - 1;
     int suc = valor + 1;
     
     cout << "Sucessor: " << suc << endl;
     cout << "Antecessor: " << ant << endl;
	
	return 0;
}

