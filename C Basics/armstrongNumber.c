// 153
// 1³ + 5³ + 3³ = 1 + 125 + 27 = 153  

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, rem, digits = 0;
    double sum = 0;
    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    temp = n;   
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    (sum == n) ? printf("Armstrong Number") : printf("Not an Armstrong Number");

    return 0;
}
