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
void NumberDividers(int number);

int main () {
  std::string number;
  std::cout << "Este programa imprime en orden todos los divisores los números dados" << std::endl;
  std::cout << "Introduce los números: " << std::endl;
  while (std::getline(std::cin, number)) {
    if (number.empty()) {
      break;
    } else {
      NumberDividers(stoi(number));
      std::cout << std::endl;
    }
  }
  return 0;
}

// Definicion de funciones

void NumberDividers(int number) {
  int rest; 
  std::cout << "divisors of " << number << ": ";
  for (int i = 1; i<= number; i++) {
    rest = number % i;
    if (rest == 0) {
      std::cout << i << " ";
    }
  }
}