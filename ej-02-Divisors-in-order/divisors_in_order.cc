/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 15 2021
  * @brief  Este programa imprime en orden todos los divisores de un número dado
  */

#include <iostream>

// Declaracion de funciones
void GetArray(int vector_numbers[]);
void NumberDividers(int vector_numbers[]);

int main () {
  int vector_numbers[6];
  std::cout << "Este programa imprime en orden todos los divisores de 6 números dados" << std::endl;
  std::cout << "Introduce los 6 números: " << std::endl;
  GetArray(vector_numbers);
  NumberDividers(vector_numbers);
  return 0;
}

// Definicion de funciones
void GetArray(int vector_numbers[]) {
  for (int i=0; i<6; i++) {
    std::cout << "número " << i + 1 << ':' ;
    std::cin >> vector_numbers[i];
  }
}

void NumberDividers(int vector_numbers[]) {
  int rest;
  for (int j=0; j < 6; j++) {
    std::cout << "divisors of " << vector_numbers[j] << ": ";
    for (int i=1; i<= vector_numbers[j]; i++) {
      rest = vector_numbers[j] % i;
      if (rest == 0) {
        std::cout << i << " ";
      }
    }
    std::cout << std::endl;
  }
}
