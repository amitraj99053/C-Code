// reverse printing
#include <stdio.h>
int main(){
    int arr[8];

    for(int i=0; i<=4; i++){
        printf("\nEnter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=4; i>=0; i--){
        printf("%d",arr[i]);
    }
    
    return 0;
}