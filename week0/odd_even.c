#include<stdio.h>

int main() {
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("%d is even Number",a);
    }
    else {
        printf("%d is odd Number",a);
    }
    
}