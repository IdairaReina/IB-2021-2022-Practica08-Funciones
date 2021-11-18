/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa lee un número n e imprime 
  * el n -ésimo número armónico, definido como 
  * Hn = 1/1 + 1/2 + ⋯ + 1 / n .
  */

#include <iostream>
#include <iomanip>

// Declaracion de funciones
float HarmonicNumber(int number);

int main () {
  int number;
  std::cout << "Este programa lee un número n e imprime el n -ésimo número";
  std::cout << " armónico, definido como Hn = 1/1 + 1/2 + ⋯ + 1 / n " << std::endl;
  std::cout << "Introduce un número: ";
  std::cin >> number;
  std::cout << std::fixed << std::setprecision(4) << HarmonicNumber(number) << std::endl;
  return 0;
}

// Definicion de funciones
float HarmonicNumber(int number) {
  float harmonic_number = 0.0;
  for (int i = 1; i <= number; i++) {
    harmonic_number += (float)1 / i;
  }
  return harmonic_number;
}