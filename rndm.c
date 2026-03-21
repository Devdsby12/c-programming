#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);

    printf("Hello world!\n");

    int number = 99;
    int secondnumber = 95;
    printf("%d, %d\n", number, secondnumber);

    if (number != secondnumber) {
        printf("This is print\n");
    }

    if (5 == 5) {
        printf("Print second\n");
    }

    char string[50];
    printf("Enter your name: ");
    scanf("%s", string);  // fixed

    printf("You entered: %s\n", string);
    int dev = 99;
    int *boss = &dev ;
    printf("%d\n",dev) ;
    printf("%d",*boss) ;

    return 0;
}
