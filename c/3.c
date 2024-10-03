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
		}
}

int main(){

}

