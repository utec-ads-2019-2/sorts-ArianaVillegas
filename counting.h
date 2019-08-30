#ifndef COUNTING_H
#define COUNTING_H

#include "sort.h"
#include <algorithm>
#include <cstring>

class CountingSort : public Sort {
    public:
        CountingSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int range = *max_element(elements,elements+size);
            int sorted[size];
            int count[range+1];
            memset(count, 0, sizeof(count));

            for(int i=0; i<size; ++i){
                ++count[elements[i]];
            }

            for(int i=0; i<range; ++i){
                count[i+1]+=count[i];
            }

            for(int i=0; i<size; ++i){
                sorted[count[elements[i]]-1]=elements[i];
                --count[elements[i]];
            }

            for(int i=0; i<size; ++i){
                elements[i]=sorted[i];
            }
        }

        inline string name() { return "CountingSort"; }
};

#endif