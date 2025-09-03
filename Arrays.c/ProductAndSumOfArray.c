//PRODUCT OF ARRAY

/*

#include <stdio.h> 

int main () {

int arr [5] = {1,2,3,4,2};

int Product = 1;

for(int i=0;i<=4;i++)
  Product = Product * arr[i];
  
  printf("The Product of elements of array is : %d",Product);

    return 0;

}

*/

//SUM OF ARRAY

#include <stdio.h> 
int main () {

int arr [5] = {1,2,3,4,5};

int sum = 0;

for(int i=1;i<=5;i++)
  sum = sum + arr[i];
  
  printf("The sum of elements of array is : %d",sum);

    return 0;
}

