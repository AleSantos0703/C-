#include <iostream>
#include "Funcionario.h"
#include <string>
using namespace std;

int main() {
	
	string nome;
	string cpf;
	int matricula;
	double salario;
	
	
	
	
	//obj 1 sem parametro
    Funcionario func1;
    
    func1.setNome("Carlos");
    func1.setCpf("123.456.789-00");
    func1.setMatricula(101);
    func1.setSalario(2500.50);
    
    
    
    
  
	 
	    
	    
  	cout << "===== Digite o nome do Funcion�ro 2: ";
	getline(cin, nome);
	
	cout <<"===== Digite o cpf do Funcion�rio 2: ";
	getline(cin, cpf);
	
	cout << "===== Digite o n�mero da  matr�cula: ";
	cin >> matricula;
	
	cout << "===== Digite o Sal�rio: ";
	cin >> salario;


 // Obj 2 com par�metros (utiliza o construtor com par�metros)
    Funcionario func2(nome, cpf, matricula, salario);
    
    
     cout << "=== Dados do Funcion�rio 1 ===" << endl;
    mostraFuncionario(func1);
    
    cout << "=== Dados do Funcion�rio 2 ===" << endl;
    mostraFuncionario(func2);
    
	
	
	return 0;
} 


