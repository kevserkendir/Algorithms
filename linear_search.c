//Linear search of an array

#include <stdio.h>
#define SIZE 50

//function prototype
size_t linearSearch(const int arr[], int key, size_t size); 

int main(void){
    int a[SIZE];
    size_t x;
    int searchKey;
    size_t element;

    for (x=0 ; x<SIZE ; x++){
        a[x] = 2*x ;
    }

    puts("Enter integer search key: ");
    scanf("%d", &searchKey);

    //attemt to locate searchKey in array a 
    element = linearSearch(a, searchKey, SIZE);

    //display results
    if (element != -1){
        printf("Value in elemt %ld", element);
    }
    else {
        puts("Sorry! Could not find the value.");
    }
} //end main

size_t linearSearch(const int arr[], int key, size_t size){
    size_t n;
    for (n=0; n < size ; n++ ){
        if ( arr [n] == key ){
            return n;
        }
    }

    return -1; // key not found
} // end function linearSearch

    

