#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contarpalavras(char *str) {
    int contar = 0;
    int dentropalavra = 0;

    for (int i=0;i<strlen(str);i++) {
        if (isspace(str[i])) {
            dentropalavra = 0;  
        } else if (dentropalavra == 0) {
            dentropalavra = 1; 
            count++;          
        }
    }

    return contar;
}

int main() {
    char str[64];
    printf("input: ");
	scanf("%s",str);
    printf("%d\n", contapalavras(str));
}
