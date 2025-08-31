#include<stdio.h>
int main () { 
   int n;

   printf("Enter number of rows : ");

   scanf("%d",&n);

   int nst = 1;

   int nsp1 = n;

   int nsp2 = n;

   int Ml = (n/2) + 1;

   for(int i=1;i<=1;i++){

       printf("*");

       printf("\n");
   }
   for(int i=1;i<=n;i++){

       if(i<=Ml){
           nst+=2;
           nsp1--;
       }

       else {
           nst-=2;
           nsp1++;
       }  

       for(int j=1;j<=nsp1;j++) printf("  "); 

       for(int k=1;k<=nst;k++) printf(" *");  

       printf("\n");   
   } 

   for(int i=1;i<=n;i++){ 

       if(i>3) break;  

       for(int j=1;j<=nsp2;j++) printf("  ");

       for(int k=1;k<=(2*i)-1;k++) printf(" *");

       nsp2--;

       printf("\n"); 

   }
   
    return 0;    
}