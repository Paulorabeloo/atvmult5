#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero inteiro:\n");
    scanf("%i", &num);
    if (num % 5 == 0){
        printf("� multiplo de 5.");
    }
    else {
        printf("N�o � multiplo de 5.");
    }
return 0;
}
