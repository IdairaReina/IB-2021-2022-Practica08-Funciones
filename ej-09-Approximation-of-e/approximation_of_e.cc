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
#include <iomanip> 

// Declaración de funciones
double TaylorSeries(double number);

int main () {
  std::string number;
  double result;
  std::cout << "Este programa calcula la serie de Taylor." << std::endl;
  std::cout << "Introduce un número en el intervalo [0-20]: ";
  while (std::getline(std::cin, number)) {
    if (number.empty()) {
      break;
    } else {
      result = TaylorSeries(stoi(number));
      std::cout << "With " << number << " term(s) we get ";
      std::cout << std::fixed << std::setprecision(10) << result << '.' << std::endl;
    }
  }
  return 0;
}

// Definicion de funciones
double TaylorSeries(double number){
  double factorial = 1, division, add = 0;
  if (number == 0){
    add = 0;
  }
  else{
    for (int i = 1; i <= number; i++){
      for (int j = 1; j <= i; j++){
        factorial *= j;
      }
      division = i/factorial;
      add += division;
      factorial = 1;
    }
  }
  return add;
}