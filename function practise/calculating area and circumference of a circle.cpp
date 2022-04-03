#include <stdio.h>
#define PI 3.141592

double check(double length);
double calculate_area(double radius);
double calculate_circumference(double radius);
void show(void);
	
int main(void)
{
	show();
	return 0;
}
void show(void)
{
	double radius = check(radius);
	printf("The area is %lf\n", calculate_area(radius));
	printf("The circumference is %lf\n", calculate_circumference(radius));
}
double check(double length)
{
	do
	{
		printf("Enter the radius: ");
		scanf("%lf", &length);
	}while(length <= 0);
	return length;
}
double calculate_area(double radius)
{
	double area = PI * radius * radius;
	return area;
}
double calculate_circumference(double radius)
{
	double circumference = 2 * PI * radius;
	return circumference;
}

