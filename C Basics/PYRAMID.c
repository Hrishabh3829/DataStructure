// 4
// *
// * *
// * * *
// * * * *
#include<stdio.h>
int main(){
    int n;
    int i ,j,rows;
    scanf("%d",&rows);
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 4
// * * * *
// * * *
// * *
// *
#include<stdio.h>
int main(){
    int n;
    int i ,j,rows;
    scanf("%d",&rows);
    
    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
