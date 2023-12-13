#include <stdio.h>

float calculateCubeVolume(float sideLength)
{
    return sideLength * sideLength * sideLength;
}

int main()
{
    float sideLength;

    printf("Enter the side length of the cube: ");
    scanf("%f", &sideLength);

    float cubeVolume = calculateCubeVolume(sideLength);

    printf("Volume of the cube: %.2f\n", cubeVolume);

    return 0;
}
