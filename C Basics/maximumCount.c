input:
5
7 4 8 2 9

output:
3

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }//[7,4,8,2,9]=3
    
    int far=arr[0];
    int count=1;
    
    for(int i=1;i<n;i++){
        if(arr[i]>far){
            count++;
            far=arr[i];
        }
    }
    
    printf("%d",count);
    
    
}
