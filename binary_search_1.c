// Binary Search Algorithm
#include <stdio.h>

int main() {
    int unsorted[] = {1,3,5,2,4,8,7,6,9,10,11,13,12,15,14}; // unsorted array
    int sorted[]   = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; // sorted array

    int index = binarySearch(sorted, 5 , 0 , 14); // searching element, right index, and left index
    printf("index of 5: %d\n ", index);
    return 0;
} // end main

int binarySearch(int a[], int element, int left, int right) { //function prototype
    int mid = left + (right - 1) / 2; // find middle element

    if (left > right){
        return -1 ; 
    }
    if( a[mid] == element){
        return mid;
    } // end if
    else if (a[mid] > element){
        return binarySearch(a, element, left, mid - 1);
    } // end else if
    else{
        return binarySearch(a, element, mid + 1, right);
    } // end else 


} // end function binarySearch

