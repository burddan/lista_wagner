#include <stdio.h>

int fatorial(int inp){
		if(inp <= 1){
				return 1;
		} else {
				return inp * fatorial(inp - 1);
		}
}
int main(){
		int tentar = fatorial(4);
		printf("%d\n",tentar);
}
