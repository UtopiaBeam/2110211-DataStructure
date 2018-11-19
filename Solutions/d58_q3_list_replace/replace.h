void replace(const T& x, list<T>& y) {
  for (iterator it = begin(); it != end(); it++) {
    if (*it == x) {
      for (T v: y) {
        insert(it, v);
      }
      erase(it);
      it--;
    }
  }
}
