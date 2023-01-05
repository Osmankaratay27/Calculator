// B211202063_Calculator.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include "Addition.h"

int main()
{
    std::cout << "Welcome to Calculator!\n";

    std::cout << "Welcome to new Calculator!\n";
    Addition addition;
    int number1, number2;

    std::cout << "Input two number to Sum: \n";
    std::cin >> number1 >> number2;
    std::cout << "The sum is:" << addition.Sum(number1, number2);
}


