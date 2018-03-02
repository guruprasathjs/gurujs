#include <stdio.h>
#include <conio.h>

int main(void) 
{
	int x,y;
	printf("values before swapping");
	scanf("%d%d",&x,&y);
	x=x^y;
	y=x^y;
	x=x^y;
	printf("values after swapping %d\n%d",x,y);
	
}
