#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>


template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixUp(size_t idx) {
    if (idx == 0)       return;
    size_t p = (idx - 1)/4;
    if (mLess(mData[p], mData[idx])) {
        using std::swap;
        swap(mData[p], mData[idx]);
        fixUp(p);        
    }
}

template <typename T,typename Comp >
void CP::priority_queue<T,Comp>::fixDown(size_t idx) {
    if (idx > mSize)       return;
    size_t ch = idx;
    for (size_t i = 4*idx+1; i <= 4*idx+4 && i < mSize; i++) {
        if (mLess(mData[ch], mData[i])) {
            ch = i;
        }
    }
    if (idx != ch) {
        using std::swap;
        swap(mData[idx], mData[ch]);
        fixDown(ch);
    }
}

#endif

