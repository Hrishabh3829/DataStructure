// input
// 10
// [2,1,0,2,1,0,0,1,2,0]
  
// output
// 0 0 0 0 1 1 1 2 2 2


#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++) {
		scanf("%d",&arr[i]);
		getchar();
	}
	int count0=0,count1=0,count2=0;
	//count the number of 0,1,2
	for (int i=0; i<n; i++) {
		if(arr[i]==0) {
			count0++;
		}
		else if(arr[i]==1) {
			count1++;
		}
		else if(arr[i]==2) {
			count2++;
		}
	}
	
	int index=0;
	for(int i=0;i<count0;i++){
	    arr[index++]=0;
	}
	for(int i=0;i<count1;i++){
	    arr[index++]=1;
	}
	for(int i=0;i<count2;i++){
	    arr[index++]=2;
	}
	
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;

}



// #include <stdio.h>
// #include <ctype.h>   // for isdigit()

// int main() {
//     int n;
//     scanf("%d", &n);   // read number of elements

//     int arr[n];
//     char ch;
//     int i = 0, num = 0;
//     int reading = 0;  // flag to detect numbers

//     while (i < n && (ch = getchar()) != EOF) {
//         if (isdigit(ch)) {         // if it's a digit
//             num = num * 10 + (ch - '0');
//             reading = 1;
//         } else if (reading) {      // when number ends (on comma, space, or bracket)
//             arr[i++] = num;
//             num = 0;
//             reading = 0;
//         }
//     }

//     int count0 = 0, count1 = 0, count2 = 0;

//     // Count occurrences
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) count0++;
//         else if (arr[i] == 1) count1++;
//         else if (arr[i] == 2) count2++;
//     }

//     // Rebuild array in sorted order
//     int index = 0;
//     for (int i = 0; i < count0; i++) arr[index++] = 0;
//     for (int i = 0; i < count1; i++) arr[index++] = 1;
//     for (int i = 0; i < count2; i++) arr[index++] = 2;

//     // Print result
//     for (int i = 0; i < n; i++)
//         printf("%d ", arr[i]);

//     return 0;
// }
