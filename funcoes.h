#ifndef FUNCOES_H
#define FUNCOES_H

// Funções de conversão de comprimento
float metros_para_centimetros(float metros);
float metros_para_milimetros(float metros);
float centimetros_para_metros(float centimetros);
float milimetros_para_metros(float milimetros);

// Funções de conversão de temperatura
float celsius_para_fahrenheit(float temp);
float celsius_para_kelvin(float temp);
float fahrenheit_para_celsius(float temp);
float fahrenheit_para_kelvin(float temp);
float kelvin_para_celsius(float temp);
float kelvin_para_fahrenheit(float temp);

// Funções de conversão de velocidade
float KilometroHora_para_MetroSegundo(float velocidade);
float KilometroHora_para_MilhaHora(float velocidade);
float MetroSegundo_para_MilhaHora(float velocidade);
float MetroSegundo_para_KilometroHora(float velocidade);
float MilhaHora_para_MetroSegundo(float velocidade);
float MilhaHora_para_KilometroHora(float velocidade);

// Funções de conversão de potência
float watts_para_kilowatts(float watts);
float watts_para_cv(float watts);
float kilowatts_para_watts(float kilowatts);
float kilowatts_para_cv(float kilowatts);
float cv_para_watts(float cv);
float cv_para_kilowatts(float cv);

// Funções de conversão de massa
float quilograma_para_grama(float kg_g);
float quilograma_para_tonelada(float kg_t);
float grama_para_tonelada(float g_t);
float grama_para_quilograma(float g_kg);
float tonelada_para_grama(float t_g);
float tonelada_para_quilograma(float t_kg);

// Funções de conversão de tempo
float horas_para_minutos(float horas);
float minutos_para_horas(float minutos);
float horas_para_segundos(float horas);
float segundos_para_horas(float segundos);
float minutos_para_segundos(float minutos);
float segundos_para_minutos(float segundos);

// Funções auxiliares
void exibir_menu_comprimento();
void executar_conversor_comprimento();

void exibir_menu_temperatura();
void executar_conversor_temperatura();

void exibir_menu_velocidade();
void executar_conversor_velocidade();

void exibir_menu_potencia();
void executar_conversor_potencia();

void exibir_menu_massa();
void executar_conversor_massa();

void exibir_menu_tempo();
void executar_conversor_tempo();

#endif