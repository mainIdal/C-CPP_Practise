#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N,c;
	int x=0,y=1,z=1;
	printf("Enter the number of terms you want to see: ");
	scanf("%d", &N);
	for(c = 0;c < N;c++)
	{
		printf("%d ", z);
		z = x + y;
		x = y;
		y = z;
	}
	
	system("PAUSE");
	return 0;
}
