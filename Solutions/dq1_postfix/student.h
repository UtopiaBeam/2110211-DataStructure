#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>
#define P pair<int, int>
#define F first
#define S second

using namespace std;

int eval_postfix(vector<P> v) {
  stack<int> st;
  for (P pr : v) {
    if (pr.F == 1) {
      st.push(pr.S);
    }
    else {
      int y = st.top();   st.pop();
      int x = st.top();   st.pop();
      if (pr.S == 0)    st.push(x + y);
      if (pr.S == 1)    st.push(x - y);
      if (pr.S == 2)    st.push(x * y);
      if (pr.S == 3)    st.push(x / y);
    }
  }

  return st.top();
}

#endif
