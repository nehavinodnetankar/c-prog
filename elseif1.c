
#include <stdio.h>
int main() {
    int d;
    printf("Enter distance: ");
    scanf("%d", &d);

    if (d > 50)
        printf("Move Forward");
    else if (d > 20)
        printf("Slow Down");
    else
        printf("Stop Robot");

    return 0;
}


