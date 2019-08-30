#ifndef SELECT_H
#define SELECT_H

#include "sort.h"

class SelectSort : public Sort {       
    public:
        SelectSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int min;
            for(int i=0; i<size-1; ++i){
                min = i;
                for(int j=i+1; j<size; ++j){
                    if(elements[min]>elements[j]) min = j;
                }
                swap(elements[i],elements[min]);
            }
        }

        inline string name() { return "SelectSort"; }
};

#endif