#include <stdio.h>
#include <math.h>

int main()
{
    int a,b, c;
    double x1, x2;
    double diszkriminans;

    printf("Add meg az 'a' értékét: ");
    scanf("%d", &a);

    printf("Add meg az 'b' értékét: ");
    scanf("%d", &b);

    printf("Add meg az 'c' értékét: ");
    scanf("%d", &c);


    if(a == 0)
    {
        printf("Az 'a' értéke nem lehet 0!\n");
        return -1;
    }

    diszkriminans = pow(b, 2) - 4 * a * c;

    if(diszkriminans < 0)
    {
        printf("Nincs megoldása a valós számok halmazán!\n");
        return -2;
    }
    else if(diszkriminans > 0)
    {
        x1 = (-b + sqrt(diszkriminans)) / (2 * a);
        x2 = (-b - sqrt(diszkriminans)) / (2 * a);

        printf("x1: %.2f, x2: %.2f\n", x1, x2);
    }
    else{
        x1 = -b / (2 *a);
        printf("x: %.2f\n, x1");
    }


    return 0;


}

