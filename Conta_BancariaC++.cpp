#include <iostream>
#include <string>
using namespace std;

class conta{
public:
   string nome;
   float saldo_atual = 0.00;	
///////////////////////////////////////////		
void depositar(){
	
	
    float res;
	cout << "Digite a quantia a ser depositada:R$ ";
    cin >> res;
	saldo_atual += res;
	 
	
}
//////////////////////////////////////////
void sacar(){
	float res;
	while(true){
		
		
			cout << "Digite a quantia a ser sacada: R$";
	cin >> res;
	if (res > saldo_atual){
		
	cout << "\nQuantia Inválida...Digite novamente\n!";	
		
	}else{
		saldo_atual -= res;
		break;
	}
		
	
	}	


}
/////////////////////////////////////////
void mostrar_saldo(){

  cout << "Seu saldo é: "<< "R$" << saldo_atual << "\n";
}
	
};





int main(){
    int opcao;
	conta rg1, rg2;
	string name;
	conta* conta_atual = NULL;
	string troca;
	
	int i;
	cout << "================Bem vindo a Conta Bancária!============\n\n";
	
	cout << "Crie a conta 1 e 2 abaixo:\n\n";
	
		
		cout << "Digite o nome da conta 1: ";
	   getline(cin, rg1.nome);
		
		cout << "Digite o nome da conta 2: ";
	   getline(cin, rg2.nome);
		  cin.ignore();
		while(true){
			cin.ignore();
			 cout << "\nQual o seu nome de acesso?: ";
	          getline(cin,name);
	  
	  if(name!= rg1.nome && name!=rg2.nome){
	  	
	  	cout << "\nUsuário Inválido...Tente novamente!\n";
	  	
	  }else{
	  if(name == rg1.nome){
	  	
	  	
	  	conta_atual = &rg1;
	  	
	  } else{
	  	
	  	conta_atual = &rg2;
	  	
	  }
	  break;

}
			
}
	
	
	while(true){
		
		cout << "-----------------------\n 1. Depositar\n 2. Sacar\n 3.Mostrar Saldo\n 4.Trocar conta \n ----------------------";
		cout << "\nO que você deseja fazer?: ";
		cin >> opcao;
		

		
	if(opcao == 1){
    conta_atual->depositar();
}
else if(opcao == 2){
    conta_atual->sacar();
}
else if(opcao == 3){
    conta_atual->mostrar_saldo();	
}
else if(opcao == 4) {
   cin.ignore();
    cout << "\nQual o seu nome de acesso?: ";
     getline(cin, troca);

    if(troca == conta_atual->nome) {
        cout << "Você já está nessa conta!\n";
    } else if(troca == rg1.nome) {
        conta_atual = &rg1;
        name = rg1.nome;
        cout << "Você agora está na conta de " << rg1.nome << ".\n";
    } else if(troca == rg2.nome) {
        conta_atual = &rg2;
        name = rg2.nome;
        cout << "Você agora está na conta de " << rg2.nome << ".\n";
    } else {
        cout << "Nome inválido! Nenhuma conta foi trocada.\n";
    }
}
else {
    cout << "\nOperação Inválida\n";
}
	
	
}
	return 0;
}

