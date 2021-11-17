/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 15 2021
  * @brief  Este programa lee tres palabras a , b y c , 
  * e imprime una línea con c , b y a en este orden.
  */

#include <iostream>
#include <string>

// Declaración de funciones
void GetArray(std::string array[]);
void PrintReverseVector(std::string array[]);

int main () {
  std::string array[3];
  std::cout << "Este programa lee tres palabras a , b y c, "; 
  std::cout << "e imprime una línea con c , b y a en este orden" << std::endl;
  std::cout << "Introduce 3 palabras: " << std::endl;
  GetArray(array);
  PrintReverseVector(array);
  return 0;
}

// Definición de funciones
void GetArray(std::string array[]) {
  for (int i=0; i<3; i++) {
    std::cout << i + 1 << ':' ;
    std::cin >> array[i];
  }
}

void PrintReverseVector(std::string array[]) {
  for (int i = 2; i>=0; i--) {
    std::cout << array[i] << " ";
  }
}