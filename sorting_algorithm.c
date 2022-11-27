#include <stdio.h>
// Sorting an array's values into ascending order


void sort(char array[], int size){

// loop to control number of passes
   for(int i = 0; i < size - 1; i++){
      for(int j = 0; j < size - i - 1; j++){
         if(array[j] > array[j+1]){
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
         } //end if
      } // end inner for
   } // end outer for
} //end function sort

void printArray(char array[], int size){

   for(int i = 0; i < size; i++){
      printf("%c ", array[i]);
   } //end for
} // end function printArray

int main() { 
//   int array[] = {8,5,6,12,43,2,543};
   char array[] = {'K', 'V', 'R', 'S', 'N', 'E', 'T'};
   int size = sizeof(array)/sizeof(array[0]);

   sort(array, size);
   printArray(array, size);
 
   return 0; 
} //end main