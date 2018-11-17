#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {
  if (mSize != other.mSize)   return false;
  CP::priority_queue<T, Comp> hp1(*this), hp2(other);
  while (!hp1.empty()) {
    if (hp1.top() != hp2.top()) {
      return false;
    }
    hp1.pop();
    hp2.pop();
  }
  return true;
}

#endif
