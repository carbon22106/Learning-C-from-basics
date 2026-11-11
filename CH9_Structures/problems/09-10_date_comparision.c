// Write a structure capable of storing date. Write a function to compare those dates.
// Solve problem 9 for time using typedef  keyword.

#include<stdio.h>

typedef struct longDate
{
    int date, month, year;
} Date;

int compare_date(Date a, Date b)
{
    if (a.year > b.year || (a.month > b.month && a.year == b.year) || (a.date > b.date && a.month == b.month && a.year == b.year)) return 1;
    if (a.date == b.date && a.month == b.month && a.year == b.year) return 0;
    return -1;
}

void printDate(Date a)
{
    printf("%d/%d/%d\n", a.date, a.month, a.year);
}

int main()
{
    Date a = {11, 12, 2026}, b = {11, 12, 2026};
    
    printDate(a); printDate(b);

    if (compare_date(a, b) == 1) printf("A is greater than B");
    else if (!compare_date(a, b)) printf("A and B are equal");
    else printf("B is greater than A");
    return 0;
}