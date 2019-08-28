#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {       
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
        }

        inline string name() { return "QuickSort"; }
};

#endif