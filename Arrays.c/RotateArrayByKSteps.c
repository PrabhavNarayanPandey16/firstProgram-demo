/*
#include<stdio.h>

void reverse (int arr[],int si,int ei) {
        int i = si;
        int j = ei;
        while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    return;
}

int main () {

    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 50;
    k = k % n;

    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);

    for(int i=0; i<=6; i++) printf("%d ",arr[i]);


    return 0;
}
*/


// 2ND METHOD 

#include <stdio.h>

// Function to reverse part of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Rotate array to the right by k positions
void rotateRight(int arr[], int size, int k) {
    k = k % size; // handle large k
    reverse(arr, 0, size - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, size - 1);
}

int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int size = 7, k = 50;

    rotateRight(arr, size, k);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

