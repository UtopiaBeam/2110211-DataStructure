#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it,size_t pos) {
  CP::list<T> result;
  if (it == end()) {
    return result;
  }
  node* nw = it.ptr;
  node* last = it.ptr->prev;
  node* endNode = end().ptr->prev;
  
  result.mHeader->next = nw;
  nw->prev = result.mHeader;

  result.mHeader->prev = endNode;
  endNode->next = result.mHeader;

  mHeader->prev = last;
  last->next = mHeader;

  result.mSize = mSize - pos;
  mSize = pos;

  return result;
}

#endif
