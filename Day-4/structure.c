#include <stdio.h>

struct Point
{
    float x;
    float y;
};

int main()
{
    struct Point point;
    point.x = 5.0;
    point.y = -1.9;

    printf("Point is x-axis %.1f and y-axis %.1f", point.x, point.y);
    return 0;
}