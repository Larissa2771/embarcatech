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
        printf("Ol�, seja muito bem-vindo!!\n\n");
        printf("Selecione abaixo o tipo de transforma��o que deseja fazer:\n\n");
        printf("1 - Metros para cent�metros.\n");
        printf("2 - Cent�metros para metros.\n");
        scanf("%d", &escolha);

        
        switch (escolha) {
            case 1:
                printf("Voc� escolheu a op��o 1 - Metros para cent�metros.\n\n");
                printf("Digite o valor que voc� deseja transformar: \n\n");
                scanf("%f", &valor);
                
                resultado = metros_centimetros(valor);

                
                printf("\n %.f em cent�metros quadrados �: %.2f\n", valor, resultado);
                
                break;

            case 2:

                printf("Voc� escolheu a op��o 2 - Cent�metros para metros.\n\n");
                printf("Digite o valor que voc� deseja transformar: \n\n");
                scanf("%f", &valor);
                
                resultado = centimetros_metros(valor);

                
                printf("\n %.f em metros quadrados �: %.2f\n", valor, resultado);
                
                break;

            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }

        printf("\nDeseja fazer outra opera��o? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("\nMuito obrigada por utilizar nosso programa! ;)\n");
    printf("\nPrograma encerrado.\n");

    return 0;
}

