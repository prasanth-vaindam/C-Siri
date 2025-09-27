#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p = NULL; // NULL pointer
    // printf("%d", *p); // Dereferencing NULL pointer leads to undefined behavior (usually a crash)
    if (p == NULL) {
        printf("Pointer is NULL, cannot dereference.\n");
    } else {
        printf("Pointer is not NULL, value: %d\n", *p);
    }

    void *ptr = (int *)malloc(10 * sizeof(int)); // Allocating memory for 10 integers
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }
    free(ptr); // Freeing allocated memory
    if(ptr == NULL) {
        printf("Pointer is NULL after free.\n");
    } else {
        printf("Pointer is not NULL after free, value: %p\n", ptr);
    }
    return 0;
}