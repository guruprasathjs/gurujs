#include<stdio.h>
#include<conio.h>
void main()
{
 int a=0,b=1,i,c,n;
 printf("enter the limit");
 scanf("%d",&n);
 printf("the fibonnaci series is \n%d\t",b);
 for(i=0;i<n;i++)
 {
     c=a+b;
     a=b;
     b=c;
      printf("%d\t",c);
 }
}
