#include <stdio.h>
int main()
{
int expense[7], i;
int choice;
int total = 0, max = 0, day = 0;
int entered = 0;
while(1)
{
printf("\n\n---- DAILY EXPENSE TRACKER ----");
printf("\n1. Enter Expenses");
printf("\n2. Total Expense");
printf("\n3. Average Expense");
printf("\n4. Highest Expense");
printf("\n5. Exit");
printf("\nEnter your choice: \n");
scanf("%d", &choice);
switch(choice)
{
case 1:
total = 0;
max = 0;
for(i = 0; i < 7; i++)
{
printf("Enter expense for day %d: ", i+1);
scanf("%d", &expense[i]);
total += expense[i];
if(expense[i] > max)
{
max = expense[i];
day = i + 1;
}
}
entered = 1;
printf("Expenses entered successfully!");
break;
case 2:
if(entered)
printf("Total Expense = %d", total);
else
printf("Please enter expenses first.");
break;
case 3:
if(entered)
printf("Average Expense = %.2f", total / 7.0);
else
printf("Please enter expenses first.");
break;
case 4:
if(entered)
printf("Highest Expense = %d on Day %d", max, day);
else
printf("Please enter expenses first.");
break;
case 5:
printf("Thank you! Exiting program.");
return 0;
default:
printf("Invalid choice. Try again.");
}
}
}
