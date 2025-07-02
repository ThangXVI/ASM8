#include <stdio.h>

int main() {
    int a, b, r;
    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);
    if(a < 0) a = -a;
    if(b < 0) b = -b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    printf("Uoc chung lon nhat la: %d", a);
}

