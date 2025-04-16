/* Enter arithmetic operator from user, 
   perform operation on two numbers according 
   to the operator using ternary operator. */
   
   #include <stdio.h>

int main() {
    int num1, num2, resu;
    char oper;

    printf("Enter operator (+, -, *, /,%): ");
    scanf(" %c", &oper);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    resu = (oper == '+') ? (num1 + num2) :
           (oper == '-') ? (num1 - num2) :
           (oper == '*') ? (num1 * num2) :
           (oper == '/' && num2 != 0) ? (num1 / num2) :
           (oper == '%' && num2 != 0) ? (num1 % num2) : 0;

    printf("Result = %d\n", resu);
    return 0;
}
