#include<stdio.h>
#include<math.h>
int modulus(void)
{
int num1;
int num2;
int mod;
printf("enter num1:");
scanf("%d",&num1);
printf("enter num2:");
scanf("%d",&num2);
if(num2==1)
{
printf("the required modulus is 0");
}
else if(num2==0)
{
printf("error");
}
else if(num1==0)
{
printf("the required modulus is 0");
}
else
{
mod=num1-(num1/num2)*num2;
printf("the required modulus is %d",mod);
}
return 0;
}
