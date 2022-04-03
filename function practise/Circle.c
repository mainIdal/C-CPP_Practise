#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
void printResults(double radius,double height);
double calculateVolume(double radius,double height);
double calculateBaseArea(double radius);
double calculateCircumference(double radius,double height);
double calculatePerimeter(double radius);

int main(void)
{
	double radius,height;
	printResults(radius,height);
	return 0;
}
void printResults(double radius,double height)
{	do{
	do{ printf("Enter the radius, and height: ");
		scanf("%lf %lf", &radius, &height);
	}while((radius < 0 || height < 0) && (radius != 0 && height != 0));
		if(radius != 0 && height != 0){
		printf("Cylinder has %.2lf volume, and %.2lf circumference\n",calculateVolume(radius,height),calculateCircumference(radius,height));
		printf("New Cylinder ***********\n"); }
	}while(radius != 0 && height != 0);
	printf("Goodbye!\n");
	system("PAUSE");
}
double calculateVolume(double radius,double height)
{
	double volume = calculateBaseArea(radius) * height;
	return volume;
}
double calculateBaseArea(double radius)
{
	double base_area = PI * radius * radius;
	return base_area;
}
double calculateCircumference(double radius,double height)
{
	double circumference = (calculateBaseArea(radius) * 2)+(calculatePerimeter(radius) * height);
	return circumference;
}
double calculatePerimeter(double radius)
{
	double perimeter = 2 * PI *radius;
	return perimeter;
}
