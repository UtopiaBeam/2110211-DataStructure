#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last) {
  std::vector<T> tmp(position, end());
  resize(position-begin());
  for (iterator it = first; it != last; it++) {
    push_back(*it);
  }
  for (auto &x: tmp) {
    push_back(x);
  }
}

#endif
