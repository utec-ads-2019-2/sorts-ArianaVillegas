#ifndef RADIX_H
#define RADIX_H

#include "sort.h"

class RadixSort : public Sort {       
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
        }

        inline string name() { return "RadixSort"; }
};

#endif