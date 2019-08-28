#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {       
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            // TODO
        }

        inline string name() { return "MergeSort"; }
};

#endif