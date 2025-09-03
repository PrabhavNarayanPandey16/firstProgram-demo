#include <stdio.h> 

int main () {
    
   int n;
   
   printf("Enter number of rows : ");
   
   scanf("%d",&n);
   
   int nst = (2*n)-1;
   
   int nst1 = (2*n)-1;
   
   int nst2 = (2*n)+1;
   
   int nsp = 1;
   
   int nsp1 = 1;
   
   int nsp2 = n;
   
   for(int k=1;k<=(4*n)+1;k++) printf("*");
       printf("\n");
       
   
   for(int i=1;i<=n;i++){
       
       if(i==n) continue;
       
       for(int j=1;j<=nsp;j++) printf(" ");
       
       for(int k=1;k<=nst;k++) printf("*");
       
       nst-=2;
       
       nsp++;
      
       for(int j=1;j<=nsp1;j++) printf(" ");
       
       for(int k=1;k<=nst1;k++) printf("*");
       
       nsp1+=2;
       
       nst1-=2;
       
       printf("\n");
       
   }
   
   for(int i=1;i<=n+1;i++){
       
       for(int j=1;j<=nsp2;j++) printf(" ");
       
       for(int k=1;k<=nst2;k++) printf("*");
       
       for(int j=1;j<=nsp2;j++) printf(" ");
       
       nst2-=2;
       
       nsp2++;
       
       printf("\n");
       
   }
   
      
      return 0;
}
       
       
       
      
       