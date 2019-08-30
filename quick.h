#ifndef QUICK_H
#define QUICK_H

#include "sort.h"

class QuickSort : public Sort {
    int partition(int *arr, int start, int end){
        int pivot = arr[end];
        int i=start;
        for(int j=start; j<end; ++j){
            if(arr[j]<pivot){
                swap(arr[i],arr[j]);
                ++i;
            }
        }
        swap(arr[i],arr[end]);
        return i;
    }

    void sortA(int *arr, int start, int end){
        if(end>start){
            int p = partition(arr, start, end);
            sortA(arr,start,p-1);
            sortA(arr,p+1,end);
        }

    }
    public:
        QuickSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            sortA(elements,0,size-1);
        }

        inline string name() { return "QuickSort"; }
};

#endif