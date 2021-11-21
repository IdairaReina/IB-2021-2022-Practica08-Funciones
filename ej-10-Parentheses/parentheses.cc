/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file parentheses.cc
  * @author Idaira Reina alu0101398495@ull.edu.es
  * @date Nov 22 2021
  * @brief  Este programa dada una secuencia formada 
  * solo por ' ( ' y ' ) ', indique si los paréntesis 
  * se cierran correctamente. Escribe “ sí ” o “ no ”, 
  * dependiendo de si los paréntesis se cierran 
  * correctamente o no.
  */

#include <iostream>
#include<stack>
#include <string>

// Declaración de funciones
bool ArePair(char opening,char closing);
bool BalancedParantheses(std::string expression);

int main() {
  std::string expression;
  std::cout << "Dada una secuencia formada por ' ( ' y ' ) ', este programa ";
  std::cout << "si los paréntesis se cierran correctamente." << std::endl;
  std::cout << "Introduce la secuencia de parentesis: ";
  while (std::getline(std::cin, expression)) {
    if (expression.empty()) {
      break;
    } else {
      if(BalancedParantheses(expression)) {
	  std::cout << "Yes" << std::endl;
      } else {
		std::cout << "No" << std::endl;;
      }
    }
  }

}

// Definicion de funciones

bool ArePair(char opening,char closing) {
  if((opening == '(') && (closing == ')')) {
    return true;
  } else {
	return false;
  }
}

bool BalancedParantheses(std::string expression) {
  std::stack<char>  parenthesis;
  for(int i = 0; i < expression.length(); i++) {
	if(expression[i] == '(') {
	  parenthesis.push(expression[i]);
    } else if(expression[i] == ')') {
	    if((parenthesis.empty()) || (!ArePair(parenthesis.top(),expression[i]))) {
		  return false;
        } else {
		  parenthesis.pop();
		}
    }
  }
  return parenthesis.empty() ? true:false;
}
