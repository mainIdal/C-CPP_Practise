#include <stdio.h>

int input(int x,int y);
int pow(int num1,int num2);
void show();
int main(void)
{
	show();
	return 0;
}
int input(int x,int y)
{
	printf("Enter the x value: ");
	scanf("%d", &x);
	printf("Enter the y values: ");
	scanf("%d", &y);
	pow(x,y);
}
int pow(int num1,int num2)
{
	int c;
	int result=1;
	for(c=0;c<num2;c+=1)
	{
		result= result * num1;
	}
	return result;
}
void show()
{
	int x,y;
	printf("%d", input(x,y));
}
