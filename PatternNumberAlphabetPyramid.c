#include <stdio.h>

int main () {
 
    // NUMBER PYRAMID 

    /*
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){
            printf(" ");

        }

        for(int k=1; k<=2*i-1; k++) printf("%d",k);

        printf("\n");

    }

    */

    // ALPHABET TRIANGLE 

    /*
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int a = 1;
        for (int j=1; j<=n-i; j++)
            printf(" ");
        for (int k=1; k<=2*i-1; k++){
            int d = a + 64;
            char ch = (char)d;
            printf("%c",ch);
            a++;

        }
        printf("\n");

    }

    */

    // ANOTHER NUMBER PYRAMID 

    /*
          int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++){
         int a = i-1;
        for (int j=1; j<=n-i; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++) printf("%d",k);

        for (int p=1; p<=i-1; p++){
         printf("%d",a);
        a--;
        }

        printf("\n");

    }

*/

 // ANOTHER ALPHABET PYRAMID 

     int n;
    printf("Enter number of rows : ");
    scanf("%d",&n); 
    int nsp = n-1;
    for(int i=1; i<=n; i++){
        for (int q=1; q<=nsp; q++)
            printf(" ");
            nsp--;
        for (int j=1; j<=i; j++){;
            char ch = (char)(j+64);
            printf("%c",ch);
        }
        int a = i-1;
        for (int k=1; k<=i-1; k++){
            char ch =(char)(a+64);
            printf("%c",ch);
            a--;
        }
        printf("\n");

    }


    return 0;

}