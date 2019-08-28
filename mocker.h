#ifndef MOCKER_H
#define MOCKER_H

#include <random>

using namespace std;

#define MIN 1
#define MAX 100

class Mocker {
    private:
        mt19937 rng;
        
    public:
        Mocker() {
            rng.seed(random_device()());
        }

        int generateRandomInt();
        int* generateRandomIntArray(size_t);
};

#endif