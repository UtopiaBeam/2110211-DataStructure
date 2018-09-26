#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
  idx = (idx + mSize) % mSize;
  return mData[(mFront+idx) % mCap];
}

#endif
