// Input :

// 4   -> Value of N(No. of members)

// Output : 

// 12  -> Possible ways of seating the members

// 2×(N−1)!

#include<stdio.h>
int main(){
    long long  n;
    scanf("%lld",&n);
    long long fact=1;
    for(int i=1;i<n;i++){
        fact=fact*i;
    }
    long long result=2 * fact;
    printf("%lld",result);
}
