#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("Tong cac chu so = %d", sum);
}

