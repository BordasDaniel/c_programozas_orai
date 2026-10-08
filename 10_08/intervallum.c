#include <stdio.h>


int main()
{
    int alsohatar = 2020;
    int felsohatar = 2030;
    int i = 0;
    int szokoevekSzama = 0;

    i = alsohatar;

    while (i <= felsohatar)
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
        {
            szokoevekSzama++;
        }
        i++; 
    }
            
    printf("A szökőévek száma: %d\n", szokoevekSzama);      

    // Ugyanez for ciklussal
    szokoevekSzama = 0;
    for (i = alsohatar; i <= felsohatar; i++)
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
            {
                szokoevekSzama++;
            }
    }
    printf("A szökőévek száma: %d\n", szokoevekSzama);

    // do while ciklussal
    szokoevekSzama = 0;
    i = alsohatar;
    do
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
        {
            szokoevekSzama++;
        }
        i++;
    } while (i <= felsohatar);
    printf("A szökőévek száma: %d\n", szokoevekSzama);

    return 0;
}