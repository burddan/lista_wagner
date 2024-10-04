#include <stdio.h>
#include <string.h>

int contar_vogais(char* input){
		char vogais[5] = "aeiou";
		int contador = 0;
		for (int i = 0;i<strlen(input);i++) {
				for (int a = 0;a<strlen(vogais);a++) {
						if (input[i] == vogais[a]) {
								contador++;
								break; 
						}
				}
		}
		return contador;
}

int main(){
		char input[100];
		printf("string: ");
		scanf("%s", input); 
		int numero_de_vogais = contar_vogais(input);
		printf("%d\n", numero_de_vogais);
}
