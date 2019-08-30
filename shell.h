#ifndef SHELL_H
#define SHELL_H

#include "sort.h"

class ShellSort : public Sort {       
    public:
        ShellSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            for(int i=size/2; i>0;i/=2){
                for(int j=i; j<size; ++j){
                    int temp = elements[j];
                    int k=j;
                    while(k>=i && elements[k-i]>temp){
                        elements[k]=elements[k-i];
                        k-=i;
                    }
                    elements[k]=temp;
                }
            }
        }

        inline string name() { return "ShellSort"; }
};

#endif