#include <stdio.h>


struct Point {
    int u;
    int v;
};


void swapPoints(struct Point *p1, struct Point *p2) {
    int temp;

    
    temp = p1->u;
    p1->u = p2->u;
    p2->u = temp;

    
    temp = p1->v;
    p1->v = p2->v;
    p2->v = temp;
}

int main() {
    struct Point point1 = {2, 3};
    struct Point point2 = {4, 5};

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.u, point1.v);
    printf("Point 2: (%d, %d)\n", point2.u, point2.v);

    
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.u, point1.v);
    printf("Point 2: (%d, %d)\n", point2.u, point2.v);

    return 0;
}
