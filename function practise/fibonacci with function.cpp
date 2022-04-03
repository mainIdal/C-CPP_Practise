#include <stdio.h>

int idal(int);
int main(void)
{
	int N;
	printf("number of terms: ");
	scanf("%d",&N);
	printf("1\n");
	idal(N);
	
	return 0;
}
int idal(int N){
	int c,a=0,b=1;
	int counter = 0;
	for(counter=0;counter<N-1;counter++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d\n",c);
	}
}
