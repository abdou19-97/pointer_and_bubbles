//bubble.c
////famous bubble sort
////implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

////function prototypes
void printValues();
void sort();

void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
   
   
   printf("Before: \n");
   // printing out the array 
   // with swaping each number
   // to an ascending order
   printValues();
   // sorting the numbers in the array
   sort();
   printf("After: \n");
   //printing out the numbers in an increasing order
   printValues();
           
   return(0);
} // end main

//implementing swap function
void swap(int *i, int*j)
{  
   //creating a variable t
   int var;
   // assigning it to the pointer of i
   // which is the value in the address 
   // of the values[i]
   var = *i;
   // assigning the the pointer i
   // to the j
   *i = *j;
   // assigning the pointer j to 
   // the variable t
   *j = var;     
}

//implementing sort function
void sort(){
    
    // creating a int varaible for the loop
    int i,j;
    // first loop is for
    // the ascending order
    for(i=0; i<MAX; i++){
        //second loop is comparing the values
        for (j=0; j<MAX - 1; j++){

            //using if statment to compare
            //the element in the array
            if(values[j] > values[j+1])
               { 
		//swaping the address of the values
		swap( &values[j],  &values[j+1]);
		//printvalues
		printValues();
		} //end if
 
        }// end the second for
    }//end the first for	
}//end sort

//implement printvalues
void printValues(){
        
	int i;
	printf("[");
	for(i=0;i<MAX;i++){
		printf("%d ",values[i]);
	}
	printf("]\n");
}//end void
