// input:
// bbbaaababa
// 3
// output:
// 3
// explanation:
// bbb | aaa | bab | a

  
#include<stdio.h>
#include<string.h>
int main(){
    int l;//l=3
    char str[60];
    scanf("%s",str);
    scanf("%d",&l);
    int n=strlen(str);
    int max_a=0;
    
    for(int i=0;i<n;i+=l){
        int count_a=0;
        for(int j=i; j<i+l && j<n ;j++){
            if(str[j]=='a'){
                count_a++;
            }
        }
        if(count_a>max_a){
            max_a=count_a;
        }
    }
    printf("%d",max_a);
}
