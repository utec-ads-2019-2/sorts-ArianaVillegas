#ifndef MERGE_H
#define MERGE_H

#include "sort.h"

class MergeSort : public Sort {
    void merge(int *arr, int start, int middle, int end){
        int n = middle-start+1; int m = end-middle;
        int temp1[n], temp2[m];
        int i, j=0, k=start;
        for(i=0; i<n; ++i){
            temp1[i] = arr[start+i];
        }
        for(i=0; i<m; ++i){
            temp2[i] = arr[middle+i+1];
        }
        i=0;
        while(i<n && j<m){
            if(temp1[i]<temp2[j]){
                arr[k] = temp1[i];
                ++i;
            } else {
                arr[k] = temp2[j];
                ++j;
            }
            ++k;
        }
        while(i<n){
            arr[k] = temp1[i];
            ++i;
            ++k;
        }
        while(j<m){
            arr[k] = temp2[j];
            ++j;
            ++k;
        }
    }
    void sortA(int *arr, int start, int end){
        if(end>start){
            int middle = (start+end-1)/2;
            sortA(arr,start,middle);
            sortA(arr,middle+1,end);
            merge(arr,start,middle,end);
        }
    }
    public:
        MergeSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            sortA(elements,0,size-1);
        }

        inline string name() { return "MergeSort"; }
};

#endif