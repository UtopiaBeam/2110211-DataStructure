#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"
#include <iostream>

template <typename T>
size_t CP::stack<T>::size() const {
  //write your code here
  return v.size();
}

template <typename T>
const T& CP::stack<T>::top() const {
  //write your code here
  return v.back();
}

template <typename T>
void CP::stack<T>::push(const T& element) {
  //write your code here
  v.push_back(element);
}

template <typename T>
void CP::stack<T>::pop() {
  v.pop_back();
}

template <typename T>
void CP::stack<T>::deep_push(const T& element, int depth) {
  if (depth > size())   depth = size();
  v.insert(v.end()-depth, element);
}

template <typename T>
void CP::stack<T>::multi_push(const std::vector<T> &w) {
  for (auto it = w.begin(); it != w.end(); it++) {
    push(*it);
  }
}

template <typename T>
void CP::stack<T>::pop_until(const T& e) {
  while (!empty() && top() != e) {
    pop();
  }
}

#endif

