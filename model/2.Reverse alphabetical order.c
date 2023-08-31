#inude <stdio.h>
#include <string.h>
#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50
void swapStrings(char str1[], char str2[]) {
    char temp[MAX_NAME_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
void bubbleSort(char arr[][MAX_NAME_LENGTH], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) < 0) {
                swapStrings(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    int numNames;
    int i;
    printf("Enter the number of names: ");
    scanf("%d", &numNames);
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    printf("Enter %d names:\n", numNames);
    for (i = 0; i < numNames; i++) {
        scanf("%s", names[i]);
    }
    bubbleSort(names, numNames);
    printf("\nNames in reverse alphabetical order:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}

