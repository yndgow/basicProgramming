#include <stdio.h>
void main(){
    struct insa{
        char name[10];
        int age;
    } a[] = {"Kim", 28, "Lee", 38, "Park", 42, "Choi", 31};
    struct insa* p;
    p = a;
    p++;
    printf("%s\n", *(p+0)->name);
    printf("%d\n", p -> age);
}
