/*C program to input and print text 
using Dynamic Memory Allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char *text;
    
    printf("Enter limit of the text: ");
    scanf("%d",&n);
    
    //allocate memory dynamically
    text=(char*)malloc(n*sizeof(char));
    
    printf("Enter text: ");
    scanf(" "); //clear input buffer
    gets(text);
    
    printf("Inputted text is: %s\n",text);
    
    // Free Memory
    free(text);
    
    return 0;
}

