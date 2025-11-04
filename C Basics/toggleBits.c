#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);     // input number

    int temp = n;        // copy to temp for bit counting
    int bits = 0;
    while (temp > 0) {   // count how many bits in binary
        bits++;
        temp >>= 1;      // divide by 2 each time
    }

    int mask = (1 << bits) - 1; // create mask with all bits = 1
    int result = n ^ mask;      // toggle bits using XOR
    printf("%d", result);       // print result

    return 0;
}

// | Input | Binary | Toggled Binary | Output |
// | ----- | ------ | -------------- | ------ |
// | 10    | 1010   | 0101           | 5      |
// | 8     | 1000   | 0111           | 7      |
// | 5     | 0101   | 1010           | 10     |
// | 1     | 1      | 0              | 0      |
// | 7     | 111    | 000            | 0      |
