#include <stdio.h>
#include <math.h>

#define MAX_VALUE 3

int vector[MAX_VALUE];
void getVector();
void printVector();
double getMagnitude(int[]);

int main(){
	getVector();
	printVector();
	printf("Magnitude: %.2f\n", getMagnitude(vector));
	return 0;
}

void getVector(){
	printf("Enter %d Values: ", MAX_VALUE);
	for(int i = 0; i < MAX_VALUE; i++){
		scanf("%d", &vector[i]);
	}
}

void printVector(){
	printf("Vector Values: <");
	for(int i = 0; i < MAX_VALUE; i++){
		printf(" %d ", vector[i]);
	}
	printf(">\n");
}

double getMagnitude(int vector[]){
	int total; 
	double magnitude;
	for(int i = 0; i < MAX_VALUE; i++ ){
		total += vector[i];
	}
	printf("Total: %d\n", total);
	magnitude = sqrt(total);
	return magnitude;
}
