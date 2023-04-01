#include<stdio.h>
struct rectangle
{
	float width[10];
	float height[10];
}rectangle;
int main()
{
	struct  rectangle;
	float area;
	printf("enter the width of the rectangle: ");
	scanf("%f",& rectangle.width);
	printf("enter the height of the rectangle: ");
	scanf("%f",& rectangle.height);
	area=(rectangle.width*rectangle.height);
	printf("enter the area of the rectangle: %.2f\n ",area);
	return 0;
}

