#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::queue<T>::operator==(const CP::queue<T> &other) const {
  //write your code here
  //
  // YOU CANNOT CALL push or pop
  if (this->size() != other.size()) {
    return false;
  }
  for (size_t i = 0; i < this->size(); i++) {
    size_t thisIndex = (this->mFront+i) % this->mCap;
    size_t otherIndex = (other.mFront+i) % other.mCap;
    if (this->mData[thisIndex] != other.mData[otherIndex]) {
      return false;
    }
  }
  return true;
}

#endif
