/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_position_of_even.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa lee una secuencia de números 
  * naturales e imprime la posición del primer número par.
  */

#include <iostream>
#include <vector>

// Declaracion de funciones
int FirstPositionEvenNumber(std::vector<int> myvector);

int main () {
  std::vector<int> myvector;
  int number, position;
  std::cout << "Este programa lee una secuencia de números naturales ";
  std::cout << "e imprima la posición del primer número par." << std::endl;
  std::cout << "Introduzca los números: ";
  do {
    std::cin >> number;
    myvector.push_back (number);
  } while (!(std::cin.get() == '\n'));  //mete todos los números en el vector, hasta que el usuario pulsa 'ENTER'
  //position = myvector[];
  std::cout << FirstPositionEvenNumber(myvector)<< std::endl;
  return 0;
}

// Definicion de funciones
int FirstPositionEvenNumber(std::vector<int> myvector) {
  int size = myvector.size();
  int position;
  for (int i = 0; i < size; i++) {
    if (myvector[i] % 2 == 0) {
      position = i + 1;
      break;
    } 
  }
  return position;
}