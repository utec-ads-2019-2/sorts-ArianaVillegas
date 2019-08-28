#ifndef SORT_H
#define SORT_H

#include <algorithm>

using namespace std;

class Sort {
    protected:
        int *elements;
        size_t size;
        
    public:
        Sort(int *elements, size_t size) : elements(elements), size(size) {}

        virtual void execute() = 0;

        virtual string name() = 0;
};

#endif