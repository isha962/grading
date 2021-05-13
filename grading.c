#include<stdio.h>
main()
{
	printf("enter your marks: ");
	int marks;
	scanf("%d",&marks);
	if(marks>85 && marks<100)
	{
		printf("Grade A");
	}
	else if(marks>70 && marks<84)
	{
		printf("GradeB");
	}
	else if(marks>55 && marks<69)
	{
		printf("Grade C");
	}
	else if(marks>40 &&marks<54)
	{
		printf("Grade D");
	}
	else if(marks<40)
	{
		printf("Grade F");
	}
}
