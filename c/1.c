#include <stdio.h>

char retorno(int num){
		if(num < 0){
				return 'N';
		} else if(num > 0){
				return 'P';
		} else {
				return 'I';
		}
}

int main(){
		int n;
		printf("input num: ");
		scanf("%d", &n);
		printf("%c\n",retorno(n));
}
