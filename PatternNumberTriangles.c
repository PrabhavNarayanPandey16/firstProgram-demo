#include <stdio.h>

int main () {
/*
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for (int i=1; i<n; i++){
        for (int j=1; j<=i; j++)
        printf(" %d",j);
        printf("\n");
    }
        */

        // INVERTED NUMBER TRIANGLE 
/*
        int n;
        printf("Enter number of rows : ");
        scanf("%d",&n);
        for(int i=1; i<=n; i++){
            for (int j=1; j<=n+1-i; j++) 
            printf(" %d",j);
            printf("\n");

        }
            */

        // 1 STARTING TRIANGLE 

/*
        int n; 
        printf("Enter number of rows : ");
        scanf("%d",&n);
        for (int i=1; i<=n; i++){
            for (int j=1;j<=2*i-1; j++){
                if(j%2!=0)
            printf(" %d",j);
            }
            printf("\n");
        }

*/

  
    // MIXED NUMBER TRIANGLE 
/*
     int n;
     printf("Enter number of row : ");
     scanf("%d",&n);
     for( int i=1; i<=n; i++){
        int a =1;
        for (int j=1; j<=i; j++){
            if(i%2==0){
                int d = a + 64;
                char ch = (char)d;
                printf(" %c",ch);
            a++; 
         }

         else  printf(" %d",j);

        }

        printf("\n");

     }
*/

  // SEQUENCED TRIANGLE 
/*
   int n;
   printf("Enter number of rows : ");
   scanf("%d",&n);
   int a = 1;
   for (int i=1; i<=n; i++){
    for ( int j=1; j<=i; j++){
        printf(" %d",a);
        a++;

    }
    printf("\n");

   }
*/

 // ODD NUMBERED TRIANGLE 

 /*
  int n; 
  printf("Enter number of rows : ");
  scanf("%d",&n);
  int a = 1; 
  for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        if (a%2!=0){
            printf(" %d",a);
            a+=2;

        }
    }

    printf("\n");

}
*/

// 0 1 TRIANGLE 

int n;
 printf("Enter number of triangle : ");
 scanf("%d",&n);
 for (int i=1; i<=n; i++){
    for (int j=1; j<=i; j++){
        if((i+j)%2==0){
            printf(" 1");
        }

        else printf(" 0");
    }

    printf("\n");

 }



    return 0;
}
