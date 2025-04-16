 // C program to count minimum number of notes in an amount
 //  500,200,100,50,20,10,5,2 and 1 Rs. notes
 
#include <stdio.h>

int main()
{
    int amount;
    int note500, note100, note50, note20, note10, note5, note2, note1;

    printf("Enter amount: ");
    scanf("%d", &amount);


    if(amount >= 500)      // for 500
    {
        note500 = amount/500;
        amount -= note500 * 500;
        printf("500 = %d\n", note500);
    }
    if(amount >= 100)     // for 100
    {
        note100 = amount/100;
        amount -= note100 * 100;
        printf("100 = %d\n", note100);
    }
    if(amount >= 50)     // for 50
    {
        note50 = amount/50;
        amount -= note50 * 50;
        printf("50 = %d\n", note50);
    }
    if(amount >= 20)    // for 20
    {
        note20 = amount/20;
        amount -= note20 * 20;
        printf("20 = %d\n", note20);
    }
    if(amount >= 10)    // for 10
    {
        note10 = amount/10;
        amount -= note10 * 10;
        printf("10 = %d\n", note10);
    }
    if(amount >= 5)     // for 5
    {
        note5 = amount/5;
        amount -= note5 * 5;
        printf("5 = %d\n", note5);

    }
    if(amount >= 2)     // for 2
    {
        note2 = amount /2;
        amount -= note2 * 2;
        printf("2 = %d\n", note2);
    }
    if(amount >= 1)     // for 1
    {
        note1 = amount;
        printf("1 = %d\n", note1);
    }


    return 0;
}
