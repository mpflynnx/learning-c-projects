#include <stdio.h>

double ballHeight(double height, double seconds)
{
    double newHeight;
    double gravity =  9.8;
    newHeight = height - (0.5 * gravity * (seconds * seconds));
    return newHeight;
}

int main(void)
{
    printf("Enter the height of the tower in meters: ");
    double height;
    scanf_s("%lf", &height);
    int seconds = 0;
    double newHeight = height;

    do
    {
        printf("At %d seconds, the ball is at height : %lf meters\n", seconds, newHeight);
        seconds++;
        newHeight = (ballHeight(height, seconds));
    } while (newHeight > 0);
    printf("At %d seconds, the ball is on the ground.\n", seconds);

	return 0;
}
