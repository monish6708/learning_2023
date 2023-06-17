#include<stdio.h>
void gre(int a, int b);


int main(){
    int a=4,b=5;
    gre(a, b);

}

void gre(int a, int b){
    if (a>b){
        printf("a is greater");

    }
    else{
        printf(" b is grater");
    }
}