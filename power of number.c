#include<stdio.h>
#include<math.h>
void main()
{
int n,k,result;
printf("\nenter the number:");
scanf("%d",&n);
printf("\nenter the power value:");
scanf("%d",&k);
result=pow(n,k);
printf("the result is :%d",result);
return 0;
}
