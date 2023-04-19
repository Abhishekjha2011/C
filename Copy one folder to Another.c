#include<stdio.h>
#include<stdlib.h>
int main()
{
	char source[]="./Abhishek";
	char Destination[]="./Dest";
	char command[100];
	printf(command,"cp -r %s %s",source,Destination);
	
	system(command);
	printf("Directory Copied Successfully.\n");
	
	return 0;
	
	
}
