#include <stdio.h>

int main() {
    int a, b, x, y, r;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    int bcnn = (a * b) / x;
    if (bcnn < 0) bcnn = -bcnn;
    printf("Boi chung nho nhat la: %d", bcnn);
}

