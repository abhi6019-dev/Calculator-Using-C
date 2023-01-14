/*Importing Header File*/
#include <stdio.h>

/*Declaring Functions */
double sum(double a,double b);
double difference(double a,double b);
double multiply(double a,double b);
double divide(double a,double b);

/*Declaring Global Variables*/
char operation;
double num1;
double num2;
double answer;

/*Main Function*/
int main(){

	printf("Enter The First Number : ");
	scanf("%lf",&num1);
	
	printf("Enter The Second Number : ");
	scanf("%lf",&num2);

	printf("Enter The Operation Between Them : ");
	scanf("%s",&operation);

	switch(operation){
		case '+':
			answer = sum(num1,num2);
			printf("%lf\n",answer);
			break;
		case '-':
			answer = difference(num1,num2);
			printf("%lf\n",answer);
			break;
		case '*':
			answer = multiply(num1,num2);
			printf("%lf",answer);
			break;
		case '/':
			answer = divide(num1,num2);
			printf("%lf",answer);
			break;
	}

	return 0;
}

/*Functions*/
double sum(double a,double b){
	double result = a+b;
	return result;
}

double difference(double a,double b){
	double result = a-b;
	return result;
}

double multiply(double a,double b){
	double result = a*b;
	return result;
}

double divide(double a,double b){
	double result = a/b;
	return result;
}
