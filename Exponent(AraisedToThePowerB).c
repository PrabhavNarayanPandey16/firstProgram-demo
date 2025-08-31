#include <stdio.h>

int power(int x,int y){
     if(y==0) return 1;
     return x * power(x,y-1);
}

int main() {
    int a,b;
    printf("Enter base : ");
    scanf("%d",&a);
    printf("Enter power :  ");
    scanf("%d",&b);
    power(a,b);
   // THIS IS SECOND METHOD (By using loops)
   // int p = 1; 
   // for(int i=1;i<=b;i++)
     //   p = a * p;
     
     printf("%d raised to the power %d is : %d",a,b,power(a,b));
     
    return 0;
}