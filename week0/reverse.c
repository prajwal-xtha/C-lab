#include<stdio.h>

int main() {
    int num, digit, rev = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    while (num >0)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10; 
    }
    printf("%d is reversed !",rev);
}