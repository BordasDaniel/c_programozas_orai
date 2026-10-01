#include <stdio.h>
#include <math.h>




int main()
{
    int a, b, c;


    printf("Add meg az elso oldalt: ");
    scanf("%d", &a);
    
    printf("Add meg a masodik oldalt: ");
    scanf("%d", &b);
    
    printf("Add meg a harmadik oldalt: ");
    scanf("%d", &c);


    printf("a: %d, b: %d, c:%d\n", a, b, c);

    if((a + b > c) && (a + c > b) && (b + c > a)){
        printf("A megadott 3 oldal lehetnek egy haromszog oldala\n");
    }
    else
    {
        printf("Nem szerkesztheto!\n");
    }

    return 0;
}