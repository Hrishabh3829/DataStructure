// Array: [8, 3, 5, 2]

// Start with 8 → already sorted

// Take 3 → insert before 8 → [3, 8, 5, 2]

// Take 5 → insert between 3 and 8 → [3, 5, 8, 2]

// Take 2 → insert at start → [2, 3, 5, 8]
#include <stdio.h>

void insertionSort(int a[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    int a[100], n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    insertionSort(a, n);

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
