#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 3; i++) {
        printf("Robot moving forward: Step %d\n", i);
    }

    printf("Robot stopped\n");

    return 0;
}