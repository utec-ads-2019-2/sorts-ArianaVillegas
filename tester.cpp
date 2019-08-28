#include "tester.h"

Sort* Tester::getSort(Algorithm sort, int *array, size_t size) {
    switch (sort) {
        case BUBBLE: return new BubbleSort(array, size);
        case COUNTING: return new CountingSort(array, size);
        case SELECT: return new SelectSort(array, size);
        case INSERT: return new InsertSort(array, size);
        case SHELL: return new ShellSort(array, size);
        case QUICK: return new QuickSort(array, size);
        case RADIX: return new RadixSort(array, size);
        case MERGE: return new MergeSort(array, size);
        default: throw invalid_argument("Not a valid sort");
    }
}

void Tester::sorts(int *array, size_t size) {
    Sort* sort;
    int temp[size];

    for (int i = BUBBLE; i <= COUNTING; i++) {
        copy(array, array + size, temp);
        sort = getSort(static_cast<Algorithm>(i), temp, size);
        sort->execute();
        ASSERT(is_sorted(temp, temp + size), "The " + sort->name() + " is not ordering all the elements");
    }
}