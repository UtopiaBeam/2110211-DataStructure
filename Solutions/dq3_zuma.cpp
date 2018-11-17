#include <cstdio>
#define N (int)1e6

int ls[N+2];
int n, k, v;

int findL(int pos) {
    while (ls[--pos] == v);
    return pos;
}

int findR(int pos) {
    while (ls[++pos] == v);
    return pos;
}

int main() {
    scanf("%d %d %d", &n, &k, &v);
    for (int i = 0; i <= n; i++) {
        if (i == k) {
            ls[i] = v;
        } else {
            scanf("%d", ls+i);
        }
    }

    int l = k, r = k, sz = 0;
    while (findR(r) - findL(l) - sz > 3) {
        l = findL(l), r = findR(r);
        if (ls[l] != ls[r])     break;
        sz = r-l-1, v = ls[l];
    }

    for (int i = 0; i <= n; i++) {
        if (i <= l || i >= r) {
            printf("%d ", ls[i]);
        }
    }
    printf("\n");

    return 0;
}