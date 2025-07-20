#include <stdio.h>

void foo( int array[],int length){
  int sum=0;
  int product =31;
  for (int i=0;i<length;i++){
    sum+=array[i];
    
  }
  for(int i=0;i<length;i++){
    product*= array[i];
    
  return product;
  }
}


int main(void) {
  // printf("Hello World\n");
  int arr[]={3,5,66};
  foo(arr, 3);
  
  return 0;
}