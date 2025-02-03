// basic array
#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    arr[1] = 100;
    arr[5] = 19;
    float array[6] = {1,2,3.5,33.66,5};
    char array1[4] = {'a','b','c','d'};

    // int data type
    printf("%d\n",arr[1]);
    printf("%d\n",arr[5]);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[7]);
    // float data type
    printf("%f\n",array[1]);
    printf("%f\n",array[2]);

    // char data type 
    printf("%c\n",array1[1]);
    printf("%c\n",array1[2]);







    return 0;
}