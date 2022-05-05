//bubble.cpp
////famous bubble sort
////implement the swap algorithm with pointers
#include <iostream>
#define MAX 9

////function prototypes
void printValues();
void sort();

void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
   //printf("Before: \n");
   std::cout<<"Before: \n";
   printValues();
   sort();
   //printf("After: \n");
   std::cout<<"After: \n";
   printValues();
           
   return(0);
} // end main

void swap(int *i, int*j)
{
   int t;
   t = *i;
   *i = *j;
   *j = t;     
}

void sort(){
    int i,j;
   
    for(i=0; i<9; i++){
        for (j=0; j<9; j++){
            if(values[j] > values[i])
               { 
	
		swap( &values[i],  &values[j]);

		printValues();
		}
 
        }
    }	
}

void printValues(){
	int i=0;
	//printf("[");
	std::cout<<"[";
	for(i=0;i<MAX;i++){
		//printf("%d ",values[i]);
		std::cout<<values[i]<<' ';
	}
	//printf("]\n");
	std::cout<<"]\n";

}
