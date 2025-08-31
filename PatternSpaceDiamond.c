#include <stdio.h> 

int main () {
    
   int n;
   
   printf("Enter number of rows : ");
   
   scanf("%d",&n);
   
   int nst = 2;
   
   int nsp1 = 1;
   
   int nsp2 = (2*n)-3;
   
   for(int i=1;i<=(2*n)+1;i++)
       printf("*");
       printf("\n");
   
   for(int i=1;i<=n;i++){
       
       for(int j=1;j<=n+1-i;j++) printf("*");
       
       for(int p=1;p<=nsp1;p++) printf(" ");
       
       for(int j=1;j<=n+1-i;j++) printf("*");
       
       nsp1+=2;
       
       printf("\n");
       
   }
   for(int i=1;i<=n;i++){
       
       if(i==n) continue;
       
       for(int j=1;j<=nst;j++) printf("*");
       
       for(int p=1;p<=nsp2;p++) printf(" ");
       
       for(int j=1;j<=nst;j++) printf("*");
       
       nst++;
       
       nsp2-=2;
       
       printf("\n");
       
   }
   
      for(int i=1;i<=(2*n)+1;i++) printf("*");
      
      
      return 0;
}
       
       
       
      
       