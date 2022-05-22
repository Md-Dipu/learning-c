#include <stdio.h>

struct Date_t
{
    size_t day;
    size_t month;
    size_t year;
};

struct Date_t up_date(struct Date_t date)
{
    if (date.month != 12)
        date.month++;
    else
    {
        date.month = 1;
        date.year++;
    }
    return date;
}

size_t d_months(struct Date_t date)
{
    char month_bitstr31[] = "101010110101";

    if (month_bitstr31[date.month - 1] == '1')
        return 31;

    if (date.month == 2)
        return ((date.year % 400 == 0) || (date.year % 100 != 0 && date.year % 4 == 0)) ? 29 : 28;

    return 30;
}

size_t wd_counter(struct Date_t x, struct Date_t y)
{
    size_t counter = 0;

    if (x.month == y.month && x.year == y.year)
        return (y.day - x.day + 1);

    counter += (d_months(x) - x.day + 1) + y.day;
    x.day = 0;
    y.day = 0;
    x = up_date(x);

    while (!(x.month == y.month && x.year == y.year))
    {
        counter += d_months(x);
        x = up_date(x);
    }

    return counter;
}

int main()
{
    struct Date_t s_date, e_date;

    printf("Starting Date: ");
    scanf("%zu/%zu/%zu", &s_date.day, &s_date.month, &s_date.year);
    printf("Ending Date: ");
    scanf("%zu/%zu/%zu", &e_date, &e_date.month, &e_date.year);

    size_t w_days = wd_counter(s_date, e_date);
    printf("Working Days is %zu days", w_days);
    return 0;
}