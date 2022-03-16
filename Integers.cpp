//
// Created by Olivia Wang on 16/03/2022.
//

bool isAnInt (double input) {
    int integral = input;
    double newIntegral = integral;
    if ((newIntegral - input) == 0) {
        return true;
    } else {
        return false;
    }
}