#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {

  CP::map_bst<KeyT,MappedT,CompareT> result;

  node* nw = mRoot;
  node* res = NULL;

  while (nw != NULL) {
    if (mLess(nw->data.first, val)) {
      nw = nw->right;
      continue;
    }
    if (nw == mRoot) {
      mRoot = mRoot->left;
    }
    if (res == NULL) {
      result.mRoot = nw;
    } else {
      res->left = nw;
    }
    if (nw->left != NULL) {
      nw->left->parent = nw->parent;
    }
    if (nw->parent != NULL) {
      nw->parent->right = nw->left;
    }
    nw->parent = res;
    res = nw;
    nw = nw->left;
    res->left = NULL;
  }

  return result;
}

#endif
