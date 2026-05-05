#include<stdio.h>
int main(){
    int a;
    int b;
printf("Enter your number\n");
scanf("%d %d",&a, &b);
if (a>b){
    printf("a is greater than b\n");
    }
    else if (a==b){
    printf("a is equal to b\n");
    }
    else if (b>a){
    printf("b is greater than a\n");
    }
}