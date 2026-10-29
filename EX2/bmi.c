#include<stdio.h>
int main(void){

	float Weight,Height,BMI;

	printf("Enter the Weight (lb):");
	scanf("%f", &Weight);

	printf("Enter the Height (in):");
	scanf("%f", &Height);

	BMI=(Weight/(Height*Height)*703);

	printf("BMI: %.2f", BMI);

	if(BMI<18.5)
	{
		printf("Underweight");
	}
	else if(BMI>=18.5 && BMI<25)
	{
		printf("Normal weight");
	}
	else if(BMI>=25 && BMI<30)
	{
		printf("Overweight");
	}
	else 
	{
		printf("Obese");
	}
	return (0);
}
