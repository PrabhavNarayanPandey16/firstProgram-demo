#include<stdio.h>

#include <limits.h>

int main () {
    int arr [7] = {-10,-4,-200,-80,-19,-5,-12};

    int min = arr[0];

    for(int i=0;i<=6;i++)
    if(min>arr[i]) min = arr[i];

    printf("The min value in the array is : %d",min);

    return 0;
}

// 2ND METHOD 

//int main () {

//    int arr [7] = {-10,-4,-200,-80,-19,-5,-12};

//    int min = INT_MAX;

  //  for(int i=0;i<=6;i++)
   // if(min>arr[i]) min = arr[i];

   // printf("The min value in the array is : %d",min);

  //  return 0;
//}

