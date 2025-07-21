
#include <stdio.h>
#include<string.h>

// Array to store calculated Fibonacci values
int memo[1000] = {-1}; // Initialize with -1 (not calculated)

int fibonacci(int n){
    // Base cases
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    // If already calculated, return stored value
    if(memo[n] != -1) {
        return memo[n];
    }
    
    // Calculate and store the result
    memo[n] = fibonacci(n-1) + fibonacci(n-2);
    return memo[n];
}

int main() {
    // Initialize memoization array
    for(int i = 0; i < 1000; i++) {
        memo[i] = -1;
    }
    
    int number;
    scanf("%d",&number);
    for(int i = 0; i < number; i++){
        printf("%d\n", fibonacci(i));
    }
    return 0;
}
