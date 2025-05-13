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
    
    
    
    
  
	 
	    
	    
  	cout << "===== Digite o nome do Funcionáro 2: ";
	getline(cin, nome);
	
	cout <<"===== Digite o cpf do Funcionário 2: ";
	getline(cin, cpf);
	
	cout << "===== Digite o número da  matrícula: ";
	cin >> matricula;
	
	cout << "===== Digite o Salário: ";
	cin >> salario;


 // Obj 2 com parâmetros (utiliza o construtor com parâmetros)
    Funcionario func2(nome, cpf, matricula, salario);
    
    
     cout << "=== Dados do Funcionário 1 ===" << endl;
    mostraFuncionario(func1);
    
    cout << "=== Dados do Funcionário 2 ===" << endl;
    mostraFuncionario(func2);
    
	
	
	return 0;
} 


