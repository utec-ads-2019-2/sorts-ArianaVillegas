#include "mocker.h"

int Mocker::generateRandomInt() {
    uniform_int_distribution<mt19937::result_type> distribution(MIN, MAX);
    return distribution(rng);
}

int* Mocker::generateRandomIntArray(size_t size) {
    int *numbers = new int[size];
    for (int i = 0; i < size; i++) {
        numbers[i] = generateRandomInt();
    }

    return numbers;
}
