#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
using namespace std;

class Funcionario{
	private:
		
	string nome;
	int matricula;
	string cpf;
	double salario;
	
	public: 
	
	Funcionario();
	Funcionario(string nome,string cpf, int matricula = 0, double salario = 0);
	
	
	string getNome();
	string getCpf();
	int getMatricula();
	double getSalario();
	
	
	void setNome(string nome);
	void setMatricula(int matricula);
	void setCpf(string cpf);
	void setSalario(double salario);
	
	
	
	
	
};

	void mostraFuncionario(Funcionario f);
#endif
