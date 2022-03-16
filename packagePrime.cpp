//
// Created by Olivia Wang on 16/03/2022.
//
#include <iostream>
#include "Functions.h"
void calculator() {
    std::cout << "Hello, World!" << std::endl;
    double toBeJudged;
    std::cin >> toBeJudged;
    int toTakePrime;
    if (isAnInt(toBeJudged)) {
        toTakePrime = toBeJudged;
        bool prime = calculatePrime(toTakePrime);
        int divisor;
        if (!prime) {
            std::cout << "This number is a prime" << std::endl;
        } else {
            std::cout << "This number is not a prime " << std::endl;
            divisor = calculateDivisor(toTakePrime);
            std::cout << "This number is divisible by " << divisor << std::endl;
        }
    } else {
        toTakePrime = 0;
        std::cout << "INVALID INPUT, returning " << toTakePrime << std::endl;
    }
}