#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  for (int i = 0; i < k && i < size(); i++) {
    res.push_back(mData[(mFront+i) % mCap]);
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to) {
  int cap = 1;
  mData = new T[cap]();
  mCap = cap;
  mSize = 0;
  mFront = 0;
  for (auto it = from; it != to; it++) {
    push(*it);
  }
}

#endif
