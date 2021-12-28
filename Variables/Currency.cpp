#include <iostream>

//Currency converter for pesos, reais, and soles to dollars DEMO
// 
//1 peos = 0.048 usd
//1 reais = 0.18 usd
//1 soles = 0.25 usd
//
int main() 
{
  //Declare variables
  //
  double pesos, reais, soles, dollars, cPeso, cReais, cSoles;
  //Initialize conversions
  //
  cPeso = 0.048;
  cReais = 0.18; 
  cSoles = 0.25; 
  //User input to initialize foreign currency
  //
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;
  //Calculate total USD and output
  //
  dollars = (cPeso * pesos) + (cReais * reais) + (cSoles * soles);
  std::cout << "US Dollars = $" << dollars <<"\n";
}
