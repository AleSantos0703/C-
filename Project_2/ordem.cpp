#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int main(){

	setlocale(LC_ALL, "Portuguese");
	int i;
	int j;
	int counter = 1;
	 int matriz[3][3] = {0};
	
for (int i = 0; i < 3; i++) {
    matriz[1][1] = 1;  
}
		for(i = 0; i < 3;i++){
		  for(j = 0; j < 3; j ++){
		
		  printf("%d ", matriz[i][j]); 
		
		
		}
		printf("\n");
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

