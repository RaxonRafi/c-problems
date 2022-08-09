#include<stdio.h>

int main()

{
    int num,a[10],i=0,j;

    printf("Enter a Decimal number: ");

    scanf("%d",&num);

  while(num)

  {
      int rem = num%2;

      num = num/2;

      a[i] = rem;

      i++;
  }

  for(j=i-1; j>=0;j--)

  {
      printf("%d",a[j]);
  }

}
