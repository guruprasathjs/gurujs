#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,j,s,g,p,k;
printf("enter the first hr and min values");
scanf("%d\t%d",&a,&b);
printf("enter the second hr and min values");
scanf("%d\t%d",&c,&d);
j=((a*60)+b);
s=((c*60)+d);
g=j-s;
p=(g/60);
k=(g%60);
printf("\ntotal hr and min values %d\t%d",p,k);
}
