#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  for (size_t i = 0; i < mSize; i++) {
    if (!mLess(mData[i], k) && !mLess(k, mData[i])) {
      return true;
    }
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  int ans = -1;
  for (size_t i = 0; i < mSize; i++) {
    if (!mLess(mData[i], k) && !mLess(k, mData[i])) {
      ans = (int)log2(i+1);
    }
  }
  return ans;
}

#endif

