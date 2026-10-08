#include <stdio.h>


int main()
{
    int alsohatar = 0;
    int felsohatar = 0;
    int i = 0;
    int szokoevekSzama = 0;

    // bekeres a felhasználótól
    printf("Kérem adja meg az alsó határt: ");
    if (scanf("%d", &alsohatar) != 1)
    {
        printf("Hibás bemenet!\n");
        return 1;
    }
    
    printf("Kérem adja meg a felső határt: ");
    if (scanf("%d", &felsohatar) != 1)
    {
        printf("Hibás bemenet!\n");
        return 1;
    }

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