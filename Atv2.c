#include<stdio.h>

int main(){

    float chico = 1.5, ze = 1.1; 
    int ano = 0;

    while (chico >= ze)
    {
        chico += 0.02;
        ze += 0.03;
        ano++;

        printf("Chico: .2%f\n", chico);
        printf("Ze: .2%f\n", ze);
        printf("Anos: %d\n", ano);
    }
    
    printf("Serao necessarios %d anos.", ano);

}