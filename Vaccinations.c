// A certain center in the city of Dehradun would like to track day-wise vaccinations done for the
// age groups from 12 to 17 years. Write a C program using a switch case statement by accepting
// the day number & number of vaccinations on a certain day of the week (use any appropriate
// convention to indicate the day of the week). Later ask the user for the day number & print the total
// number of vaccinations on that day.

#include<stdio.h>
int main()
{
 int daynumber,choice,temp,mon,tue,wed,thurs,fri,sat,sun=0;
 printf("Enter the total no. of days on which vaccinations are done : ");
 scanf("%d",&daynumber);
 printf("\nAssume: 1-Monday 2-Tuesday 3-Wednesday 4-Thursday 5-Friday 6-Saturday 7-Sunday\n\n");
 for(int i=0; i<daynumber; i++)
 {
    printf("Enter your Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        mon=mon+temp;
        break;
        case 2:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        tue=tue+temp;
        break;
        case 3:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        wed=wed+temp;
        break;
        case 4:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        thurs=thurs+temp;
        break;
        case 5:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        fri=fri+temp;
        break;
        case 6:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        sat=sat+temp;
        break;
        case 7:
        printf("Number of Vaccinations: ");
        scanf("%d",&temp);
        sun=sun+temp;
        break;
        default: printf("Invalid Choice\n");
        break;
    }
 }
 printf("Enter the day Number for the total Number of Vaccinations: ");
 scanf("%d",&daynumber);
 switch(daynumber)
 {
    case 1:printf("Total Number of Vaccinations on Monday: %d",mon);
    break;
    case 2:printf("Total Number of Vaccinations on Tuesday: %d",tue);
    break;
    case 3:printf("Total Number of Vaccinations on Wednesday: %d",wed);
    break;
    case 4:printf("Total Number of Vaccinations on Thursaday: %d",thurs);
    break;
    case 5:printf("Total Number of Vaccinations on Friday: %d",fri);
    break;
    case 6:printf("Total Number of Vaccinations on Saturday: %d",sat);
    break;
    case 7:printf("Total Number of Vaccinations on Sunday: %d",sun);
    break;
    deafult:printf("Invalid Choice");
    break;
 }
    return 0;
}
