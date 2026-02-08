#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int lastTwo = num % 100;

    if (lastTwo % 4 == 0)
        printf("%d is divisible by 4", num);
    else
        printf("%d is not divisible by 4", num);

    return 0;
}
