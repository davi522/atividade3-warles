#include <stdio.h>
questao 1
int main() {
    int opcao;
    float num1, num2, resultado;

    
    printf("=== CALCULADORA BÁSICA ===\n");
    printf("Escolha uma operação:\n");
    printf("1 - Adição (+)\n");
    printf("2 - Subtração (-)\n");
    printf("3 - Multiplicação (*)\n");
    printf("4 - Divisão (/)\n");
    printf("Digite a opção (1 a 4): ");
    scanf("%d", &opcao);

    // Verificando se a opção é válida
    if(opcao < 1 || opcao > 4) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Lendo os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

  
    switch(opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case 4:
            if(num2 == 0) {
                printf("Erro: divisão por zero não é permitida.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;
    }

    return 0;
}

questao 2
#include <stdio.h>

int main() {
    int numero;

  
    printf("Digite um número de 5 dígitos: ");
    scanf("%d", &numero);

   
    if (numero < 10000 || numero > 99999) {
        printf("Erro: o número deve ter exatamente 5 dígitos.\n");
        return 1;
    }

    int d1 = numero / 10000;
    int d2 = (numero / 1000) % 10;
    int d3 = (numero / 100) % 10;
    int d4 = (numero / 10) % 10;
    int d5 = numero % 10;

    
    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}

questao 3
#include <stdio.h>

int main() {
    int i;

  
    printf("Número\tQuadrado\tCubo\n");
    printf("-----------------------------\n");

    // Loop de 0 a 10
    for(i = 0; i <= 10; i++) {
        printf("%d\t%d\t\t%d\n", i, i*i, i*i*i);
    }

    return 0;
}

questao 4 
#include <stdio.h>

int main() {
    short idade;
    int montante;
    long numeroConta;


    printf("Digite sua idade: ");
    scanf("%hd", &idade); 

   
    printf("Digite o montante a depositar: ");
    scanf("%d", &montante);

 
    printf("Digite o número da conta: ");
    scanf("%ld", &numeroConta);  

 
    printf("\nDados informados:\n");
    printf("Idade: %hd anos\n", idade);
    printf("Montante a depositar: %d\n", montante);
    printf("Número da conta: %ld\n", numeroConta);

    return 0;
}



