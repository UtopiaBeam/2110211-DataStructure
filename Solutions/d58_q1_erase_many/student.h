#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  CP::vector<T> tmp(*this);
  clear();
  int nw = 0;
  for (int i = 0; i < tmp.size(); i++) {
    if (nw < pos.size() && i == pos[nw])
      nw++;
    else    push_back(tmp[i]);
  }
}

#endif
