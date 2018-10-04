#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
void CP::vector<T>::uniq() {
  CP::vector<T> tmp(*this);
  std::map<T, bool> mp;

  clear();
  for (T &x: tmp) {
    if (!mp[x]) {
      push_back(x);
      mp[x] = true;
    }
  }
}

#endif
