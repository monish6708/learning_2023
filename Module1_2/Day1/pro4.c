#include<stdio.h>
    int main(){
    float op1,op2, cal;
    char oper;
    printf("enter the operand 1:");
    scanf("%f",&op1);
    printf(" enter the operator :");
    scanf("%s",&oper);
     printf("enter the operand 2:");
    scanf("%f",&op2);
    switch (oper) {
        case '+':
            cal = op1 + op2;
            printf("calculation is : %f\n", cal);
            break;
        case '-':
            cal = op1 - op2;
            printf("calculation is : %f\n", cal);
            break;
        case '*':
            cal = op1 * op2;
            printf("calculation is : %f\n", cal);
            break;
        case '/':
            if (op2 != 0) {
                cal = op1 / op2;
                printf("calculation: %f\n", cal);
            } else {
                printf("cannot  Division by zero\n");
            }
            break;
        default:
            printf(" Invalid operator\n");
            break;

       }
return(0);
}