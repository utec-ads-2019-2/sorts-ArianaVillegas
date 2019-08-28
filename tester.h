#ifndef TESTER_H
#define TESTER_H

#include <stdexcept>
#include <iostream>
#include <assert.h>

#include "sort.h"
#include "bubble.h"
#include "counting.h"
#include "select.h"
#include "insert.h"
#include "shell.h"
#include "quick.h"
#include "radix.h"
#include "merge.h"

#ifndef NDEBUG
#   define ASSERT(condition, message) \
    do { \
        if (! (condition)) { \
            std::cerr << "Assertion `" #condition "` failed in " << __FILE__ \
                      << " line " << __LINE__ << ": " << message << std::endl; \
            std::terminate(); \
        } \
    } while (false)
#else
#   define ASSERT(condition, message) do { } while (false)
#endif

enum Algorithm { BUBBLE, COUNTING, SELECT, INSERT, SHELL, QUICK, RADIX, MERGE };

class Tester {
    private:
        static Sort* getSort(Algorithm, int *, size_t);

    public:
        static void sorts(int *, size_t);
};

#endif