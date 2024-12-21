#include <stdio.h>
#include <locale.h>
#include <string.h>

float metros_centimetros(float x) {
    return x * 10000;
}

float centimetros_metros(float x) {
    return x / 10000;
}
int main(void) {
    setlocale(LC_ALL, "Portuguese");
    

    float resultado, valor;
    int escolha;
    char resposta;

    do {
        printf("Olá, seja muito bem-vindo!!\n\n");
        printf("Selecione abaixo o tipo de transformação que deseja fazer:\n\n");
        printf("1 - Metros para centímetros.\n");
        printf("2 - Centímetros para metros.\n");
        scanf("%d", &escolha);

        
        switch (escolha) {
            case 1:
                printf("Você escolheu a opção 1 - Metros para centímetros.\n\n");
                printf("Digite o valor que você deseja transformar: \n\n");
                scanf("%f", &valor);
                
                resultado = metros_centimetros(valor);

                
                printf("\n %.f em centímetros quadrados é: %.2f\n", valor, resultado);
                
                break;

            case 2:

                printf("Você escolheu a opção 2 - Centímetros para metros.\n\n");
                printf("Digite o valor que você deseja transformar: \n\n");
                scanf("%f", &valor);
                
                resultado = centimetros_metros(valor);

                
                printf("\n %.f em metros quadrados é: %.2f\n", valor, resultado);
                
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }

        printf("\nDeseja fazer outra operação? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("\nMuito obrigada por utilizar nosso programa! ;)\n");
    printf("\nPrograma encerrado.\n");

    return 0;
}

