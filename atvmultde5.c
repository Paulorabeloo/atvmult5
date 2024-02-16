#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%i", &num);
    if (num % 5 == 0){
        printf("É multiplo de 5.");
    }
    else {
        printf("Não é multiplo de 5.");
    }
return 0;
}
