#include <stdio.h>

int sumOfElement(int arr[],int n){//n=123
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main() {
    int number; 
    scanf("%d",&number);
    int arr[number];
    
    for(int i = 0; i < number; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = sumOfElement(arr,number);
    printf("%d\n", result);

    return 0;
}