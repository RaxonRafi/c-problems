#include<stdio.h>

int main()
{
    int num, rem, dec=0,base=1;
    printf("Enter a Binary Number: ");
    scanf("%d",&num);
    while(num>0)
    {
        rem = num%10;
        dec = dec + rem*base;
        num = num/10;
        base = base*2;
    }
    printf("Decimal Number = %d",dec);
}
