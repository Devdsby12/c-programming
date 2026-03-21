#include <stdio.h> // tells to complier include this files 
int main(){ 
    printf("hello world !\n") ; //hello world
    int a = 55 ;
    int *point = &a ;  // pointer points to address of a
    printf("%d\n",a) ; //55
    printf("%p\n",point) ; //0xfffa6cde45
    printf("%d\n" ,*point); //55
    return 0 ; 
}
