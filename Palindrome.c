#include <stdio.h>

int main (){
    int n; 
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = n;
    int r = 0;
    while (n>0){
        r = r * 10;
        r = r + (n%10);
        n = n/10;
        
    }
    if (a==r)
    printf("The number is a palindrome ");
    else 
    printf("The number is not a palindrome ");
    
    return 0;
    
}