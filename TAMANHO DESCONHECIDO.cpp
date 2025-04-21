/*Faça um programa que entre com vários números inteiros, ao final imprima o
maior número digitado, a soma dos números pares e a média dos números
ímpares. O programa encerra quando se digita o número -999*/
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int numero;
	int* vetor = NULL;
	int tamanho = 0; //tamanho atual do vetor;
	int maior = -999;
	int num_par = 0;
	int count_impar = 0;
	int num_impar = 0;
	int i;
	float media;

			
		while(true){
			
			
				
				cout << "Digite o número " << tamanho+1 <<" (ou -999 para encerrar)"<<": ";
		  cin >> numero;
		  
		  
		  if (numero == -999){
		  	
		  	break;
		  }
				
				
			vetor = (int*)realloc(vetor, (tamanho + 1) * sizeof(int));	
			vetor[tamanho] = numero;
				
				
				tamanho++;
				
				if(numero > maior){
					
					maior = numero;
				}
				
				if(numero %2 == 0){
					
				num_par+= numero;
					
				}
				
				if(numero %2 != 0){
					
					count_impar++;
					num_impar+= numero;
					
				}
				
		}
			
			media = num_impar / count_impar;	
		
	   cout << "\nMaior número digitado: "<< maior;
	   cout << "\nSoma do números pares: "<< num_par;
	   cout << "\nMédia dos números impares: "<< media;
	
	
	
       return 0;	
}
