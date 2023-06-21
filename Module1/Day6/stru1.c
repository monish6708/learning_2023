#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};
typedef struct Box  Box;
float calculateVolume(  Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

float calculateSurfaceArea(  Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr;

    
    myBox.length = 4.5;
    myBox.width = 3.2;
    myBox.height = 2.1;

   
    boxPtr = &myBox;

  
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume of the box: %.2f\n", volume);
    printf("Surface area of the box: %.2f\n", surfaceArea);

    return 0;
}