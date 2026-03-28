#include <stdio.h>

int main() {
    int dev = 55;

    int *raj = &dev;   // ✔ pointer storing address of dev

    printf("%d\n", dev);     // value of dev
    printf("%p\n", raj);     // address of dev
    printf("%d\n", *raj);    // value at that address

    return 0;
}
