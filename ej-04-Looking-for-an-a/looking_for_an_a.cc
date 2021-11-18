/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file looking_for_an_a.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa lee una secuencia de 
  * caracteres terminada en un punto y dice si 
  * la secuencia tiene alguna "a" minúscula o no
  */

#include <iostream>
#include <string>
#include <istream>

// Declaración de funciones
int CountingA(std::string sentence);
void YesNotA(int example);

int main () {
  std::string sentence;
  std::cout << "Este programa lee una secuencia de caracteres ";
  std::cout << "terminada en un punto y dice si la secuencia tiene ";
  std::cout << "alguna a minúscula o no" << std::endl;
  std::cout << "Introduzca una frase: ";
  std::getline(std::cin, sentence, '.');
  CountingA(sentence);
  return 0;
}

//Definicion de funciones
int CountingA(std::string sentence) {
  int add = 0;
  char letter_a = 'a';
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] == letter_a) {
      add += 1;
    } 
  }
  return add;
}

void YesNotA(int example) {
  example = CountingA(sentence)
}