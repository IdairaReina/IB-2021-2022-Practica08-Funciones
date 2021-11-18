/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i_th.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa dado un número entero i y 
  * una secuencia de números naturales x 1 ,…, x n , imprime x i .
  * La entrada comienza con un número i , seguido de la secuencia 
  * x 1 ,…, x n termina con −1. Se sabe que 1 ≤ i ≤ n .
  */

#include <iostream>
#include <vector>

// Declaracion de funciones
void FindPositionNumber(std::vector<int> myvector, int position);

int main () {
  int position, number;
  std::vector<int> myvector;
  std::cout << "Este programa dado un número entero i y una secuencia de";
  std::cout << " números naturales x 1 ,…, x n , imprime x i ." << std::endl;
  std::cout << "Posicion del número: ";
  std::cin >> position;
  std::cout << "Introduzca los números, tiene que terminar el último en -1 para acabar: ";
  do {
    std::cin >> number;
    myvector.push_back (number);
  } while (number != -1);
  FindPositionNumber(myvector, position);
  return 0;
}

// Definicion de funciones
void FindPositionNumber(std::vector<int> myvector, int position) {
  int number_found = myvector[position - 1];
  std::cout << "At the position " << position << " there is a(n) " << number_found << '.' << std::endl;
}

