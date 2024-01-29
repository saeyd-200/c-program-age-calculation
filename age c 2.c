#include<stdio.h>

int main()
{
int currentYear, birthYear, result;
printf("Enter Current Year: \n");
scanf("%d", &currentYear);
printf("Enter Birth Year: \n");
scanf("%d", &birthYear);
result = currentYear - birthYear;
printf("Your age is %d years", result);
return 0;
}






