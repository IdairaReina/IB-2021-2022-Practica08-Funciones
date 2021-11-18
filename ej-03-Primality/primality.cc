/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file primality.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa lee una secuencia de números 
  * naturales y, para cada uno, dice si es un número primo o no
  */

#include <iostream>

// Declaracion de funciones
void GetArray(int number, int array[]);
int Add(int number_example);
void PrimeNotPrime(int number, int array[]);

int main () {
  int number;
  std::cout << "Este programa lee una secuencia de números ";
  std::cout << "naturales y, para cada uno, dice si es un número primo o no" << std::endl;
  std::cout << "¿Cuántos números vas a introducir?: ";
  std::cin >> number;
  int array[number];
  std::cout << "Introduzcalos a continuación: " << std::endl;
  GetArray(number, array);
  PrimeNotPrime(number, array);
  return 0;
}


// Definicion de funciones
void GetArray(int number, int array[]) {
  for (int i = 0; i < number; i++) {
    std::cin >> array[i];
  }
}

int Add(int number_example) {
  int add = 0;
  for (int i = 1;i <= number_example; i++) {
    if (number_example % i == 0) {
      add += 1;
    } 
  }
  return add;
}

void PrimeNotPrime(int number, int array[]) {
  int add = 0;
  for (int i = 0; i < number; i++) {
    add = Add(array[i]); 
    if (add <= 2) {
      std::cout << array[i] << " is prime";
    } else {
      std::cout << array[i] << " is not prime";
    }
    std::cout << std::endl;
  }  
}

