#include <stdio.h>

int main() {
    int i;

    printf("Cac so nguyen co 2 chu so va la boi cua 7:\n");
//cách 1
    //for (i = 14; i <= 98; i += 7) {
    //    printf("%d ", i);
    //}
// cách 2
    for (i = 10; i < 100; i++)
    {
        if (i % 7 == 0)
            printf("\n%d",i);
    }
    return 0;
}
