#include<stdio.h>
#include <limits.h>

//int main () {
   // int arr [7] = {1,4,2,8,19,5,12};

    //int max = arr[0];

    //for(int i=0;i<=6;i++)
    //if(max<arr[i]) max = arr[i];

    //printf("The max value in the array is : %d",max);

    //return 0;
//}

// 2ND METHOD 

int main () {

    int arr [7] = {1,4,2,8,19,5,12};

    int max = INT_MIN;

    for(int i=0;i<=6;i++)
    if(max<arr[i]) max = arr[i];

    printf("The max value in the array is : %d",max);

    return 0;
}
