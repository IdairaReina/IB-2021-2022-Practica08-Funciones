/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers_II.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa lee pares de números n y m 
  * con n ≥ m , y para cada par imprime H n - H m .
  */

#include <iostream>
#include <iomanip>

// Declaracion de funciones
double HarmonicNumber(int number);

int main () {
  int number_n, number_m;
  double result;
  std::cout << "Este programa lee pares de números n y m con n ≥ m , ";
  std::cout << "y para cada par imprime H n - H m ." << std::endl;
  std::cout << "Introduce n y m: ";
  std::cin >> number_n;
  std::cin >> number_m;
  while(number_m > number_n) {
    std::cout << "n tiene que ser mayor o igual que m." << std::endl;
    std::cout << "Vuelve a introducir m: ";
    std::cin>> number_m;
  }
  result = HarmonicNumber(number_n) - HarmonicNumber(number_m);
  std::cout << std::fixed << std::setprecision(10) << result << std::endl;
  return 0;
}

// Definicion de funciones
double HarmonicNumber(int number) {
  double harmonic_number = 0.0;
  for (int i = 1; i <= number; i++) {
    harmonic_number += (double)1 / i;
  }
  return harmonic_number;
}