#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], result[size];
	int i;
    printf("Enter elements of the first array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    
    for ( i = 0; i < size; i++) {
        result[i] = array1[i] + array2[i];
    }

    printf("Resultant array after addition:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
