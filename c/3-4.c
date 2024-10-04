#include <stdio.h>

float calcular(float n1,float n2,char op){
		switch(op){
				case '/':
						return n1 / n2;
						break;
				case '+':
						return n1 + n2;
						break;
				case '-':
						return n1 - n2;
						break;
				case '*':
						return n1 * n2;
						break;
		}
}

int main(){
		float numero1, numero2;
		char operacao;
		printf("digite o primeiro numero: ");
		scanf("%f", &numero1);
		printf("digite o segundo numero: ");
		scanf("%f", &numero2);
		printf("digite a operacao (+, -, *, /): ");
		scanf(" %c", &operacao);
		printf("%f",calcular(numero1,numero2,operacao));
}

