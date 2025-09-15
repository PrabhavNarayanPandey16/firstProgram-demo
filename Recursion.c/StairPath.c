
#include <stdio.h>
/*
// Single step and Double steps will be taken 
// Number of ways , So that the person reaches nth stair 

int stairs(int n){
    if (n<=2) return n;
    int TotalWays = stairs(n-1) + stairs(n-2);
    return TotalWays;

}

int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int ways = stairs(n);

    printf("\nThe number of ways are : %d\n",ways);

    return 0;
}

*/

// Single , Double and Triple steps will be taken 
// Number of ways , So that the person reaches nth stair

int stairs(int n){
    if (n<=2) return n;
    if(n==3) return n+1;
    return stairs(n-1) + stairs(n-2) + stairs(n-3);

}

int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    stairs(n);

    printf("\nThe number of ways are : %d\n",stairs(n));

    return 0;
}

