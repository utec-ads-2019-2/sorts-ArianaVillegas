#ifndef INSERT_H
#define INSERT_H

#include "sort.h"

class InsertSort : public Sort {       
    public:
        InsertSort(int *elements, size_t size) : Sort(elements, size) {}

        void execute() {
            int actual,pos;
            for(int i=1; i<size; ++i){
                actual = elements[i];
                pos = i-1;
                while(pos>=0 && actual<elements[pos]){
                    elements[pos+1]=elements[pos];
                    --pos;
                }
                elements[pos+1] = actual;
            }
        }

        inline string name() { return "InsertSort"; }
};

#endif