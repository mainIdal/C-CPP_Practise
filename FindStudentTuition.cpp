#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int student_number,place;
	float hours,tuition = 0;
	printf("Enter the student number: ");
	scanf("%d", &student_number);
	while(student_number >= 0)
	{
		lap:
		printf("Is the student with the number %d in the city or out of the city\n", student_number);
		printf("For in the city press 1 , for out of the city press 0: ");
		scanf("%d", &place);
		printf("Enter the hours of the taken lessons by the student with the number %d: ", student_number);
		scanf("%f", &hours);
		if(place == 1 && hours > 10)
		{
			tuition = 1000;
			printf("the student with the number %d need to pay %.2f$\n", student_number, tuition);
		}
		else if(place == 1 && hours > 0 && hours <= 10)
		{
			tuition = 80.0 * hours;
			printf("the student with the number %d need to pay %.2f$\n", student_number, tuition);
		}
		else if(place == 0 && hours > 10)
		{
			tuition = 1800;
			printf("the student with the number %d need to pay %.2f$\n", student_number, tuition);
		}
		else if(place == 0 && hours > 0 && hours <= 10)
		{
			tuition = 110.0 * hours;
			printf("the student with the number %d need to pay %.2f$\n", student_number, tuition);
		}
		else
		{
			printf("you entered a negative hour or a different value than 0 or 1! Please, correct it.\n");
			goto lap;
		}
		printf("Enter a negative student number to quit\n");
		printf("Enter the new student number: ");
		scanf("%d", &student_number);
	}
	
	system("pause");
	return 0;
}
