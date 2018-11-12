#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  int ans = 0;
  while (1<<ans <= mSize) {
    ans++;
  }
  return ans - 1;
}

#endif

