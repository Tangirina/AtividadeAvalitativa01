#include<stdio.h>

int main(){
  
    int a, b, c;

    do{
    printf("Insira o valor A:");
    scanf("%d", &a);
    printf("\nInsira o valor B:");
    scanf("%d", &b);
    printf("\nInsira o valor C:");
    scanf("%d", &c);

    }while (a + b < c || a + c < b || b + c < a);
    {
     printf("\nEsses valores podem ser valores dos lados de um triangulo");


         if(a < 90 && b < 90 && c < 90){
        printf("\nEste triangulo e acutangulo");
        }else if (a > 90 || b > 90 || c > 90){
        printf("\nEste triangulo e obtusangulo");
        }else if( a == 90 || b == 90 || c == 90){
        printf("\nEste triangulo e retangulo");
        }else{
        printf("\nEsses valores nao podem ser valores dos lados de um triangulo");
        }
    }
}
