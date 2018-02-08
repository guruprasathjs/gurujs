#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i=0;
    printf("enter the a value: ");
    scanf("%d",&a);
    for(b=2;b<=a/2;++b)
     {
         if(a%b==0)
         {
             i=1;
             break;
         }
     }
         if(i==0)
         printf("%d it is a prime number",a);
          else 
          printf("%d it is a not a prime number",a);
    getch()
}
