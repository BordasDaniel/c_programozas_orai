#include <stdio.h>

typedef enum
{
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
} Week;

void Definer(int dayIndex)
{
    switch (dayIndex)
    {
        case MONDAY:
            printf("It is Monday.\n");
            break;
        case TUESDAY:
            printf("It is Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("It is Wednesday.\n");
            break;
        case THURSDAY:
            printf("It is Thursday.\n");
            break;
        case FRIDAY:
            printf("It is Friday.\n");
            break;
        case SATURDAY:
            printf("It is Saturday.\n");
            break;
        case SUNDAY:
            printf("It is Sunday.\n");
            break;
        default:
            printf("Invalid day index!\n");
            break;
    }
}

int main()
{
    int day;

    printf("Give me the index of the day (1-7): ");
    if (scanf("%d", &day) != 1)
    {
        printf("Invalid input!\n");
        return -1;
    }

    Definer(day - 1);

    return 0;

    
}