// Input :
// 99 -> Value of N
// 3  -> Value of R

// Output :
// 9  -> Possible ways to fill the cistern.

// Explanation:
// Here, the number N=99
// Sum of the digits N: 9+9 = 18
// Repeat step 2 ‘R’ times i.e. 3 tims  (9+9)+(9+9)+(9+9) = 18+18+18 =54
// Add digits of 54 as we need a single digit 5+4
// Hence , the output is 9.

#include<stdio.h>

int sum(int n) {
	int total=0;
	while(n>0) {
		total=n%10+total;
		n=n/10;
	}
	return total;
}

int main() {
	int n,r;
	scanf("%d",&n);
	scanf("%d",&r);

	int total=sum(n);
	// printf("%d",total);

	int result=r*total;

	int final = sum(result);
	printf("%d",final);


}
