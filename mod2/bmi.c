#include <stdio.h>
#include <math.h>



int main()
{
	// BMI = weight/height**2
	//1) captue user input: weight(kilos) and height(meters)
	//2) calculate BMI
	//3) display bmi
	//
	int userWeight= 0;
	int userHeight=0;
	int bmi = 0;
	printf("Enter weight in kg: \n");
	scanf("%d", &userWeight);

	printf("Enter height in Meters: \n");
	scanf("%d", &userHeight);
	bmi = userWeight / pow(userHeight, 2);

	printf("With %d kg and %d meters, your BMI is %d\n", userWeight, userHeight,bmi);

		
	printf("Done\n");
	return 0;

}
