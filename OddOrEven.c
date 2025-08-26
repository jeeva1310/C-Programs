#include<stdio.h>
void main(){
	int number1;
	printf("Enter a number: ");
	scanf("%d",&number1);
	if(number1%2==0){
	    printf("The given number is odd number");
	}else{
	    printf("The given number is even number");
	}
}