#include <cs50.h>
#include <stdio.h>

int minutes;
int bottles;

int main(void)
{
    printf("Minutes:");
    minutes = get_int();
    bottles = minutes*12;
    printf("Bottles: %d %s", bottles , "\n");
}
    

