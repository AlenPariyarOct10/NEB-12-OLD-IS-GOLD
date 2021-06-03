// WAP to input length and breadth of a pond and find its area by using user defined function.

#include<stdio.h>

float areaOfPond(float l,float b);

int main()
{
	
	float inp1,inp2,area;
	
	printf(" Enter Length [Feet] : ");
	scanf("%f",&inp1);
	printf(" Enter Breadth [Feet] : ");
	scanf("%f",&inp2);
	
	area = areaOfPond(inp1,inp2);
	
	printf("Area of the given pond : %.4f square feet",area);

	
	
	
	return 0;
}


float areaOfPond(float l,float b){
	float output = l*b;
	return output;
}



