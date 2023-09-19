#include<stdio.h>
#include<conio.h>

int main () {
	int radius;
	printf("enter radius");
	scanf("%d",& radius);
	float area=(3.14*radius*radius);
	printf("the %f for %d",area,radius);
	return 0;
}
