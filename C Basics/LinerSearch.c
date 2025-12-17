// 5
// 9 40 50 70 80
// 50
// Found at index 2
#include <stdio.h>

int linearSearch(int a[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            return i;              // index where key is found
        }
    }
    return -1;                     // key not found
}

int main() {
    int a[100], n, i, key, pos;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &key);

    pos = linearSearch(a, n, key);

    if (pos == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", pos);

    return 0;
}
