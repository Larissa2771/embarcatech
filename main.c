#include <stdio.h>
#include "funcoes.h"


// Todas as funções do conversor de comprimeto:

// Funções de conversão de comprimento
float metros_para_centimetros(float metros) {
    return metros * 100;
}

float metros_para_milimetros(float metros) {
    return metros * 1000;
}

float centimetros_para_metros(float centimetros) {
    return centimetros / 100;
}

float milimetros_para_metros(float milimetros) {
    return milimetros / 1000;
}

// Função para exibir o menu de conversão de comprimento
void exibir_menu_comprimento() {
    printf("\n=== Conversor de Comprimento ===\n");
    printf("1. Metros para Centímetros\n");
    printf("2. Metros para Milímetros\n");
    printf("3. Centímetros para Metros\n");
    printf("4. Milímetros para Metros\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}

// Função para executar o conversor de comprimento
void executar_conversor_comprimento() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_comprimento(); // Exibe o menu de comprimento
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = metros_para_centimetros(valor);
                    printf("%.2f metros equivalem a %.2f centímetros.\n", valor, resultado);
                    break;
                case 2:
                    resultado = metros_para_milimetros(valor);
                    printf("%.2f metros equivalem a %.2f milímetros.\n", valor, resultado);
                    break;
                case 3:
                    resultado = centimetros_para_metros(valor);
                    printf("%.2f centímetros equivalem a %.2f metros.\n", valor, resultado);
                    break;
                case 4:
                    resultado = milimetros_para_metros(valor);
                    printf("%.2f milímetros equivalem a %.2f metros.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 4 ou 0 para voltar.\n");
        }
    } while (1);
}


// Todas as funcões do conversor de Temperatura:

// Funções de conversão de temperatura
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 1.8) + 32;
}

float celsius_para_kelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheit_para_celsius(float fahrenheit) {
    return (5.0/9.0) * (fahrenheit - 32);
}

float fahrenheit_para_kelvin(float fahrenheit) {
    return ((fahrenheit - 32) * 5.0/9.0) + 273.15;
}

float kelvin_para_celsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvin_para_fahrenheit(float kelvin) {
    return ((kelvin - 273.15) * 9.0/5.0) + 32;
}

// Função para exibir o menu de conversão de temperatura
void exibir_menu_temperatura() {
    printf("\n=== Conversor de Temperatura ===\n");
    printf("1. Celsius para fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. fahrenheit para Celsius\n");
    printf("4. fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para fahrenheit\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}
// Função para executar o conversor de temperatura
void executar_conversor_temperatura() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_temperatura(); // Exibe o menu de temperatura
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite a temperatura a ser convertida: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = celsius_para_fahrenheit(valor);
                    printf("%.2fC equivalem a %.2fF.\n", valor, resultado);
                    break;
                case 2:
                    resultado = celsius_para_kelvin(valor);
                    printf("%.2fC equivalem a %.2fK.\n", valor, resultado);
                    break;
                case 3:
                    resultado = fahrenheit_para_celsius(valor);
                    printf("%.2fF equivalem a %.2fC.\n", valor, resultado);
                    break;
                case 4:
                    resultado = fahrenheit_para_kelvin(valor);
                    printf("%.2fF equivalem a %.2fK.\n", valor, resultado);
                    break;
                case 5:
                    resultado = kelvin_para_celsius(valor);
                    printf("%.2fK equivalem a %.2fC.\n", valor, resultado);
                    break;
                case 6:
                    resultado = kelvin_para_fahrenheit(valor);
                    printf("%.2fK equivalem a %.2fF.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");
        }
    } while (1);
}


// Todas as funcões do conversor de velocidade:

// Funções de conversão de velocidade

float KilometroHora_para_MetroSegundo(float KilometroHora){
    return KilometroHora / 3.6;
}

float KilometroHora_para_MilhaHora(float KilometroHora){
    return KilometroHora / 1.6;
}

float MetroSegundo_para_MilhaHora(float MetroSegundo){
    return MetroSegundo * 2.2;
}

float MetroSegundo_para_KilometroHora(float MetroSegundo) {
    return MetroSegundo * 3.6;
}

float MilhaHora_para_MetroSegundo(float MilhaHora){
    return MilhaHora / 2.2;
}

float MilhaHora_para_KilometroHora(float MilhaHora){
    return MilhaHora * 1.6;
}

// Função para exibir o menu de conversão de velocidade
void exibir_menu_velocidade() {
    
    printf("\n=== Conversor de Velocidade ===\n");
    printf("1. Km/h para m/s\n");
    printf("2. Km/h para mph\n");
    printf("3. m/s para mph\n");
    printf("4. m/s para km/h\n");
    printf("5. mph para m/s\n");
    printf("6. mph para km/h\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}

// Função para executar o conversor de velocidade
void executar_conversor_velocidade() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_velocidade(); // Exibe o menu de velocidade
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = KilometroHora_para_MetroSegundo(valor);
                    printf("%.2fKm/h equivalem a %.2fm/s.\n", valor, resultado);
                    break;
                case 2:
                    resultado = KilometroHora_para_MilhaHora(valor);
                    printf("%.2fKm/h equivalem a %.2fmph.\n", valor, resultado);
                    break;
                case 3:
                    resultado = MetroSegundo_para_MilhaHora(valor);
                    printf("%.2fm/s equivalem a %.2fmph.\n", valor, resultado);
                    break;
                case 4:
                    resultado = MetroSegundo_para_KilometroHora(valor);
                    printf("%.2fm/s equivalem a %.2fKm/h.\n", valor, resultado);
                    break;
                case 5:
                    resultado = MilhaHora_para_MetroSegundo(valor);
                    printf("%.2fmph equivalem a %.2fm/s\n", valor, resultado);
                    break;
                case 6:
                    resultado = MilhaHora_para_KilometroHora(valor);
                    printf("%.2fmph equivalem a %.2fKm/h.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");
        }
    } while (1);
}


// Todas as funcões do conversor de potência:

// Funções de conversão de potência
float watts_para_kilowatts(float watts) {
    return watts / 1000;
}

float watts_para_cv(float watts) {
    return watts / 735.5;
}

float kilowatts_para_watts(float kilowatts) {
    return kilowatts * 1000;
}

float kilowatts_para_cv(float kilowatts) {
    return kilowatts * 1000 / 735.5;
}

float cv_para_watts(float cv) {
    return cv * 735.5;
}

float cv_para_kilowatts(float cv) {
    return cv * 735.5 / 1000;
}

// Exibir menu de potência
void exibir_menu_potencia() {
    printf("\n=== Conversor de Potência ===\n");
    printf("1. Watts para Quilowatts\n");
    printf("2. Watts para Cavalos-vapor\n");
    printf("3. Quilowatts para Watts\n");
    printf("4. Quilowatts para Cavalos-vapor\n");
    printf("5. Cavalos-vapor para Watts\n");
    printf("6. Cavalos-vapor para Quilowatts\n");
    printf("0. Voltar ao Menu Principal\n");
    printf("Digite a opção desejada: ");
}

// Função para executar o conversor de potência
void executar_conversor_potencia() {
    int opcao;
    float valor, resultado;

    do {
        exibir_menu_potencia(); // Exibe o menu de potência
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (opcao) {
                case 1:
                    resultado = watts_para_kilowatts(valor);
                    printf("%.2f Watts equivalem a %.2f Quilowatts.\n", valor, resultado);
                    break;
                case 2:
                    resultado = watts_para_cv(valor);
                    printf("%.2f Watts equivalem a %.2f Cavalos-vapor.\n", valor, resultado);
                    break;
                case 3:
                    resultado = kilowatts_para_watts(valor);
                    printf("%.2f Quilowatts equivalem a %.2f Watts.\n", valor, resultado);
                    break;
                case 4:
                    resultado = kilowatts_para_cv(valor);
                    printf("%.2f Quilowatts equivalem a %.2f Cavalos-vapor.\n", valor, resultado);
                    break;
                case 5:
                    resultado = cv_para_watts(valor);
                    printf("%.2f Cavalos-vapor equivalem a %.2f Watts.\n", valor, resultado);
                    break;
                case 6:
                    resultado = cv_para_kilowatts(valor);
                    printf("%.2f Cavalos-vapor equivalem a %.2f Quilowatts.\n", valor, resultado);
                    break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");
        }
    } while (1);
}


// Todas as funções do conversor de massa:

// Funções de conversão de massa
float quilograma_para_grama(float quilograma){
    return quilograma * 1000;
}

float quilograma_para_tonelada(float quilograma){
    return quilograma * 0.001;
}

float grama_para_tonelada(float grama){
    return grama * 0.0000001;
}

float grama_para_quilograma(float grama){
    return grama * 0.001;
}

float tonelada_para_grama(float tonelada){
    return tonelada * 1000000;
}

float tonelada_para_quilograma(float tonelada){
    return tonelada * 1000;
}

// Função para exibir o menu de conversão de massa
void exibir_menu_massa(){
        printf("\n== Conversor de Massa ==\n");
        printf("Digite o numero correspondente a conversão desejada:\n");
        printf("1. Quilograma para grama\n");
        printf("2. Quilograma para tonelada\n");
        printf("3. Grama para quilograma\n");
        printf("4. Grama para tonelada\n");
        printf("5. Tonelada para grama\n");
        printf("6. Tonelada para quilograma\n");
        printf("0. Voltar ao Menu Principal\n");
        printf("Digite a opção desejada: ");
}

// Função para o executar o conversor de massa
void executar_conversor_massa(){
    int opcao;
    float valor, resultado;

    do{
        exibir_menu_massa(); // Exibe o menu de massa
        scanf("%d", &opcao);

        if(opcao==0){
            printf("Voltando ao Menu Principal...\n");
            break;
        }

        if(opcao>= 1 && opcao <=6){
            printf("Digite o valor a ser convertido:");
            scanf("%f", &valor);

            switch(opcao){
                case 1:
                    resultado= quilograma_para_grama(valor);
                    printf("%.2f Quilos equivalem a %.2f gramas.\n", valor, resultado);
                    break;
                case 2:
                    resultado= quilograma_para_tonelada(valor);
                    printf("%.2f Quilos equivalem a %.2f toneladas.\n", valor, resultado);
                    break;
                case 3:
                    resultado= grama_para_quilograma(valor);
                    printf("%.2f Gramas equivalem a %.2f quilos.\n", valor, resultado);
                    break;
                case 4:
                    resultado= grama_para_tonelada(valor);
                    printf("%.2f Gramas equivalem a %.2f toneladas.\n", valor, resultado);
                    break;
                case 5:
                    resultado= tonelada_para_grama(valor);
                    printf("%.2f Toneladas equivalem a %.2f gramas.\n", valor, resultado);
                    break;
                case 6:
                    resultado= tonelada_para_quilograma(valor);
                    printf("%.2f Toneladas equivalem a %.2f quilos.\n", valor, resultado);
                    break;
            }
        }else{
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");    
        }

    }while (1);
    
}


// Todas as funções do conversor de tempo:

// Funções de conversão de tempo
float horas_para_minutos(float horas){
    return horas * 60;
}
float minutos_para_horas(float minutos){
    return minutos / 60;
}
float horas_para_segundos(float horas){
    return horas * 3600;
}
float segundos_para_horas(float segundos){
    return segundos / 3600;
}
float minutos_para_segundos(float minutos){
    return minutos * 60;
}
float segundos_para_minutos(float segundos){
    return segundos / 60;
}

// Função para exibir o menu de conversão de tempo
void exibir_menu_tempo(){
    printf("\n=== Conversor de Tempo ===\n");
    printf("1. Horas para Minutos.\n");
    printf("2. Minutos para Horas.\n");
    printf("3. Horas para Segundos.\n");
    printf("4. Segundos para Horas\n");
    printf("5. Minutos para Segundos\n");
    printf("6. Segundos para Minutos\n");
    printf("O. Voltar ao Menu Principal.\n");
    printf("Digite a opção desejada: ");
}

// Função para executar o conversor de tempo
void executar_conversor_tempo(){
    int opcao;
    float valor, resultado;

    do{
        exibir_menu_tempo(); // Exibe o menu de tempo
        scanf("%d", &opcao);

        if(opcao==0){
            printf("Voltando ao menu principal...\n");
            break;
        }

        if(opcao>=1 && opcao<=6){
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            switch (opcao){
            case 1:
            resultado=horas_para_minutos(valor);
            printf("%.2f horas equivalem a %.2f minutos.\n", valor, resultado);
            break;

            case 2:
            resultado=minutos_para_horas(valor);
            printf("%.2f minutos equivalem a %.2f horas.\n", valor, resultado);
            break;
            
            case 3:
            resultado=horas_para_segundos(valor);
            printf("%.2f horas equivalem a %.2f segundos.\n", valor, resultado);
            break;

            case 4:
            resultado=segundos_para_horas(valor);
            printf("%.2f segundos equivalem a %.2f horas.\n", valor, resultado);
            break;

            case 5:
            resultado=minutos_para_segundos(valor);
            printf("%.2f minutos equivalem a %.2f segundos.\n", valor, resultado);
            break;

            case 6:
            resultado=segundos_para_minutos(valor);
            printf("%.2f segundos equivalem a %.2f minutos.\n", valor, resultado);
            break;
            }
        } else {
            printf("Opção inválida! Escolha entre 1 e 6 ou 0 para voltar.\n");
        } 
    }while (1); 
}

// Função main
int main() {
    int opcao_principal;
    do {
        // Menu principal
        printf("\n=== Conversor de Unidades ===\n");
        printf("Escolha o tipo de conversor:\n");
        printf("1. Conversor de Comprimento\n");
        printf("2. Conversor de Temperatura\n");
        printf("3. Conversor de Velocidade\n");
        printf("4. Conversor de Potência\n");
        printf("5. Conversor de Massa\n");
        printf("6. Conversor de Tempo\n");
        printf("0. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao_principal);

        switch (opcao_principal) {
            case 1:
                executar_conversor_comprimento();
                break;
            case 2:
                executar_conversor_temperatura();
                break;
            case 3:
                executar_conversor_velocidade();
                break;
            case 4:
                executar_conversor_potencia();
                break;
            case 5:
                executar_conversor_massa();
                break;
            case 6:
                executar_conversor_tempo();
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opção inválida! Escolha entre 1 e 6 ou 0 para sair.\n");
        }
    } while (opcao_principal != 0);

    return 0;
}


