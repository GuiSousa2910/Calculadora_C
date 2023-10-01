#include<stdio.h>
int main()
{
    char operacao;
    double n1,n2,resultado;
    
    //OPERAÇÃO
    printf("Bem vindo a calculadora!\n");
    printf("Digite a operação que deseja fazer (+ - * /)\n");
    scanf("%c", &operacao);
    
    //NUMEROS
    printf("Digite o primeiro numero: ");
    scanf("%lf", &n1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &n2);
    
    switch(operacao){
        case '+':
            resultado=n1+n2;
            break;
        case '-':
            resultado=n1-n2;
            break;
        case '*':
            resultado=n1*n2;
            break;
        case '/':
            if(n2 == 0){
                printf("NÃO É POSSIVEL FAZER DIVISÃO COM ZERO");
                break;
            }else{
                resultado = n1/n2;
                break;
            }   
        default:
            printf("VOCÊ ESCREVEU UMA OPERAÇÃO INVÁLIDA!!");
            break;
    }
    
    printf("%.2lf %c %.2lf = %.2lf",n1,operacao,n2,resultado);
}
