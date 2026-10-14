#include <stdio.h>

int main() {
    int battery = 20;

    if (battery >= 75)
        printf("Battery High");
    else if (battery >= 40)
        printf("Battery Medium");
    else if (battery >= 15)
        printf("Charge the robot");
    else
        printf("Stop the robot");

    return 0;
}