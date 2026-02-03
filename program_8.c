#include <stdio.h>

int main() {
    int a[50], b[50], c[100];
    int n1, n2, i, j;

    printf("Enter number of elements of first array: ");
    scanf("%d", &n1);

    printf("Enter first array elements:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("Enter number of elements of second array: ");
    scanf("%d", &n2);

    printf("Enter second array elements:\n");
    for(j = 0; j < n2; j++) {
        scanf("%d", &b[j]);
        c[i] = b[j];
        i++;
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
