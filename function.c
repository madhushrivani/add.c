#include <stdio.h>
int sub(int a, int b);
void printstar(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%c",'*');
	}
}
int takenumber()
{
	int i;
	printf("enter a number");
	scanf("%d",&i);
	return i;
}
int main ()
{
	int a , b ,c;
	a = 9;
	b = 8;
	c = sub(a,b);
	//printstar(7);
	printf("the sub is %d\n",c);
	
	//c=takenumber();
	//printf("the number entered is %d\n",c);
	//return 0;
}
int sub(int a,int b)
{
	return a - b;
}
