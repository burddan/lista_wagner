#include <stdio.h>
#include <string.h>

int array_soma(int arr[]){
		int soma = 0;
		for(int i = 0;i<5;i++){
				soma += arr[i];
		}
		return soma;
}
int main(){
		int input[5]; // lista contendo 5 numeros
		int resultado;
		for(int i=0;i<5;i++){
				printf("input lista numero %d: ",i + 1);
				scanf("%d",&input[i]);
		}
		resultado = array_soma(input);
		printf("%d",resultado);
}
