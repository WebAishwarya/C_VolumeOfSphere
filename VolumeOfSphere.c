#include <stdio.h>

int main() 
{
    int radius = 7;
    float VolumeOfSphere;
    
    VolumeOfSphere = (4.0/3.0) * 3.14 * radius * radius * radius;
    
    printf("Value of radius is : %d\n\n", radius);
    printf("Volume of the sphere: %.3f\n", VolumeOfSphere);
    
    return 0;
}
