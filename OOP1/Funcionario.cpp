#include <iostream>
#include "Funcionario.h"
#include <string>
using namespace std;


// Construtor com parâmetros
Funcionario::Funcionario(string nome,string cpf, int matricula , double salario ){
	this-> nome = nome;
	this-> matricula = matricula;
	this-> cpf = cpf;
	this-> salario = salario;
}

// Construtor sem parâmetros

Funcionario::Funcionario(){
	
	nome = "";
	cpf = "";
	matricula = 0;
	salario = 0;
	
	
}




//Encapsulamento get
string Funcionario::getNome(){
	return this->nome;
}
   int Funcionario::getMatricula(){
   	
   	return this-> matricula;
   }
   
    string Funcionario::getCpf(){
   	
   	return this->cpf;
   }
   
   double Funcionario::getSalario(){
   	
   	return this->salario;
   	
   }
   
   
   
   
   
     //Encapsulamento set
   void Funcionario::setNome(string nome){
   	
   	this->nome = nome;
   	
   }
   
   void Funcionario::setMatricula(int matricula){
   	
   	this->matricula = matricula;
   }
   	void Funcionario::setCpf(string cpf){
   		
   		this->cpf = cpf;
	   }
   	void Funcionario::setSalario(double salario){
   		
   		
   		this->salario = salario;
	   }
   
   
   
   
   
     void mostraFuncionario(Funcionario f) {
    cout << "Matrícula: " << f.getMatricula() << endl;
    cout << "Nome: " << f.getNome() << endl;
    cout << "CPF: " << f.getCpf() << endl;
    cout << "Salário: " << f.getSalario() << endl;
}



