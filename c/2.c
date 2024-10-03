#include <stdio.h>

int digitos(int num){
		if (num < 10) {
				return 1;
		} else {
				return 1 + digitos(num / 10);
		}
}
int main(){
		int n;
		printf("input num: ");
		scanf("%d", &n);
		printf("%d",digitos(n));
}
