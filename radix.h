#ifndef RADIX_H
#define RADIX_H

#include "sort.h"

class RadixSort : public Sort {
    public:
        RadixSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int max = *max_element(elements,elements+size);
            int count[10];
            int sorted[size];

            for(int i=1;max>0;i*=10){
                memset(count, 0, sizeof(count));
                for(int j=0; j<size; ++j){
                    count[(elements[j]/i)%10]++;
                }
                for(int j=1; j<10; ++j){
                    count[j]+=count[j-1];
                }
                for(int j=size-1; j>=0; --j){
                    sorted[count[(elements[j]/i)%10]-1] = elements[j];
                    --count[(elements[j]/i)%10];
                }
                for(int j=0; j<size; ++j){
                    elements[j]=sorted[j];
                }
                max/=10;
            }
        }

        inline string name() { return "RadixSort"; }
};

#endif