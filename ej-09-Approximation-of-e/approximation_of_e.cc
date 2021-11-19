/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file approximation_of_e.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa calcula la serie de Taylor 
  * La entrada consta de varios números naturales n 
  * entre 0 y 20. Para cada n dado, imprime con 10 
  * dígitos después del punto decimal la aproximación 
  * de e que obtenemos al sumar los n primeros términos 
  * de la serie anterior. 
  */

#include <iostream>
#include <cmath>       /* pow */
#include <iomanip> 

// Declaración de funciones
int Factorial(int number);
double TaylorSeries(int number);

int main () {
  std::string number;
  std::cout << "Este programa calcula la serie de Taylor." << std::endl;
  std::cout << "Introduce un número en el intervalo [0-20]: ";
  while (std::getline(std::cin, number)) {
    if (number.empty()) {
      break;
    } else {
      std::cout << "With " << number << " term(s) we get ";
      std::cout << std::fixed << std::setprecision(10) << TaylorSeries(stoi(number)) << '.' << std::endl;
    }
  }
  return 0;
}

// Definicion de funciones
int Factorial(int number) {
  int result= 1;
  for (int i=1; i<=number; i++) {
    result*=i;
  }
  return result;
}

double TaylorSeries(int number) {
  double result = 0;
  if (number == 0) {
    result = 0;
  } else {
    for(int i = 0;i < number; i++){
      result += (double)1/Factorial(i);
    }
  }
  return result;
}
