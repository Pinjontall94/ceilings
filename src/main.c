#include <stdio.h>
#include <convert.h>

int main(void) 
{
    int water_freezing_point = convert_celsius_to_fahrenheit(0);
    printf("water's freezing point (F): %d", water_freezing_point);
    return 0;
}
