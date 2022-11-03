#include<stdio.h>
#include<string.h>
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
static const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday","Saturday"};
void weekdays()
{ 
enum week day; printf("\n");
for(day = Sunday; day <= Saturday ; day++) printf("Day %d of the week is %s\n",day,days[day]);
}

// Day 0 of the week is Sunday
// Day 1 of the week is Monday
// Day 2 of the week is Tuesday
// Day 3 of the week is Wednesday
// Day 4 of the week is Thursday
// Day 5 of the week is Friday
// Day 6 of the week is Saturday
