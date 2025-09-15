#include <stdio.h>
/*
// 1 Step at a time and you can move Down or Right 

// cr--> current row, cc--> current column, er--> ending row, ec--> ending column 

int maze(int cr, int cc, int er, int ec){
    int Rightways = 0;
    int Downways = 0;

    if(cr==er && cc==ec) return 1;

    if(cr==er)    // only right ways calls
        Rightways += maze(cr, cc+1, er, ec);

    if(cc==ec)    // only down ways call
        Downways += maze(cr+1, ec, cc, er);

    if(cr<er && cc<ec){
       Rightways += maze(cr, cc+1, er, ec);
       Downways += maze(cr+1, cc, er, ec);
}

int TotalWays = Rightways + Downways;

return TotalWays;
    
}

int main () {

    int n,m;
    printf("Enter Number of Rows of the Maze : ");
    scanf("%d",&n);
    printf("Enter Number of Columns of the Maze : ");
    scanf("%d",&m);

    int No_Of_Ways = maze(1,1,n,m);

    printf("\nThe Number Of Ways Are : %d\n",No_Of_Ways);


    return 0;
}

*/

// SECOND METHOD (Using Two Variables)

int maze(int n, int m){
    int Rightways = 0;
    int Downways = 0;

 if(n==1 && m==1) return 1;

 if(n==1)          // cannot go down 
    Rightways += maze(n, m-1);

if (m==1)          // cannot go right
    Downways += maze(n-1, m);

if(n>1 && m>1) {
    Rightways += maze(n, m-1);
    Downways += maze(n-1, m);
}

int TotalWays = Rightways + Downways;

return TotalWays;

}

int main () {

    int n,m;
    printf("Enter Number Of Rows Of The Maze : ");
    scanf("%d",&n);
    printf("Enter Number Of Column Of The Maze : ");
    scanf("%d",&m);

    int Number_Of_Ways = maze(n,m);

    printf("\nThe Number Of Ways are : %d\n",Number_Of_Ways);

    return 0;
}



