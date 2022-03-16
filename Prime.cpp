//
// Created by Olivia Wang on 16/03/2022.
//

bool calculatePrime(int toBeJudged) {
    int remainder;
    for (int i = 2; i < toBeJudged; i++) {
        remainder = toBeJudged % i;
        if (remainder == 0) {
            return true;
        }
    }
    return false;
}
int calculateDivisor(int toBeJudged) {
    int remainder;
    for (int i = 2; i < toBeJudged; i++) {
        remainder = toBeJudged % i;
        if (remainder == 0) {
            return i;
        }
    }
}