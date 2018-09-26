#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last) {
  CP::vector<T> tmp;
  for (iterator it = begin(); it != position; it++) {
    tmp.push_back(*it);
  }
  for (iterator it = first; it != last; it++) {
    tmp.push_back(*it);
  }
  for (iterator it = position; it != end(); it++) {
    tmp.push_back(*it);
  }

  clear();
  for (iterator it = tmp.begin(); it != tmp.end(); it++) {
    push_back(*it);
  }
}

#endif
