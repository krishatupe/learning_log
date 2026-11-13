#include <stdio.h>

int main() {
    const char *a[4] = {"", "apple", "banana", "mango"};
    int n;

    printf("Enter a number (1-3) :- ");

    if (scanf("%d", &n) == 1 && n >= 1 && n <= 3) {
        printf("%s\n", a[n]);
    }
    else {
        printf("enter a valid number freak!\n");
    }
    return 0;
}
