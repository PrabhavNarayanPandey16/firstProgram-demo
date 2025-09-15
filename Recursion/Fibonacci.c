#include<stdio.h>

int fibonacci(int n) {
    if(n<=2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    
   int n;
   printf("Enter a number : ");
   scanf("%d",&n);

   int x = fibonacci(n);

   printf("The %dth fibonacci is : %d",n,x);
 
    return 0;
}

