#include<stdio.h>
int main()
{
	char message [100];
	printf("enter a message: ");
	fgets(message,sizeof(message),stdin);
	printf("the message is: %s",message);
	return 0;
}