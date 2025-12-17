// 5
// 2 4 6 8 10
// key=8
// Found at index 3
#include <stdio.h>

int binarySearch(int a[], int n, int key) {
    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = low + (high - low) / 2;   // avoid overflow

        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;              // search in right half
        else
            high = mid - 1;             // search in left half
    }

    return -1;                          // not found
}

int main() {
    int a[100], n, i, key, pos;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);             // array MUST be sorted

    scanf("%d", &key);                  // element to search

    pos = binarySearch(a, n, key);

    if (pos == -1)
        printf("Not found\n");
    else
        printf("Found at index %d\n", pos);

    return 0;
}
