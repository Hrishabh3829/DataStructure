#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);      // read the number
        getchar();                 // read and ignore one extra character (comma or space)
    }

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0)
            arr[j++] = arr[i];
    }

    while (j < n)
        arr[j++] = 0;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
// Input

// 8
// 4,5,0,1,9,0,5,0


// Output

// 4 5 1 9 5 0 0 0
