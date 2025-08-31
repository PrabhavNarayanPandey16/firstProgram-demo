#include <stdio.h>

// ONLy VALID FOR n=9 

int main () {
    
    int n;
    
    printf("Enter number of rows : ");
    
    scanf("%d",&n);
    
    int nst = 6;
    
    int nsp = 0;
    
    int ml = (n/2) + 1;
    
    for(int i=1;i<=n;i++){
        if(i<=ml){
            nst--;
            nsp++;
        }
        
        else {
            nst++;
            nsp--;
        }
        
        for(int j=1;j<=nsp;j++) printf("  ");
        
        for(int k=1;k<=nst;k++) printf("*   ");
        
        printf("\n");
        
    }
    
    return 0;
}