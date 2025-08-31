#include <stdio.h> 

int main () {
    
   int n;
   
   printf("Enter number of rows : ");
   
   scanf("%d",&n);
   
   int nst = 1;
   
   int nst1 = 1;
   
   int nst2 = (2*n)-1;
   
   int nsp = (2*n)-1;
   
   int nsp1 = 1;
   
   int nsp2 = 1;
   
   for(int i=1;i<=n;i++){
       
       for(int j=1;j<=n-i+1;j++) printf(" ");
       
       for(int k=1;k<=nst;k++) printf("*");
       
       nst+=2;
       
       printf("\n");
   }
       for(int i=1;i<=n;i++){
           
       for(int j=1;j<=i;j++) printf("*");
       
       for(int k=1;k<=nsp;k++) printf(" ");
       
       for(int j=1;j<=i;j++) printf("*");
       
       nsp-=2;
       
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
       
       
       
      
       