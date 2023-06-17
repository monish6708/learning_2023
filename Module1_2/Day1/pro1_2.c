#include<stdio.h>

void big(int a , int b);
int main(){
    int a=8,b=9;
    big(a,b);
}
void big(int a, int b){
    a>b?printf("a is bigger"):printf("b is bigger");
}