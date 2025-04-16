/* given an array of marks of students, if the mark of any studet
 is less then 35 print its roll no. (roll no refers to index of array) */

 #include <stdio.h>
 int main(){
    int marks[10];

    for(int i=0; i<=9; i++){
        printf("enter student marks: ");
        scanf("%d",&marks[i]);
    }
    
    for(int i=0; i<=9; i++){
        if(marks[i]<=35){
            printf("%d\n",i);
        }
    }
    return 0;
 }