#include <stdio.h>
int main()
{

    // 포인터 선언 및 포인터 값 대입 = 포인터 초기화
    // 포인터 주소를 가르키는 것
    // 변수안에 데이터가 일반적으로 취급 데이터가 아니고
    // 데이터가 저장되어있는 메모리의 번지
    // * 포인터 연산자 번지를 가르킨다
    // & 주소 연산자 데이터가 들어있는 메모리의 번지를 가르킨다.
    int a = 50;
    int *b = &a; 
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", b);
    printf("%d\n", *b);


    // 포인터 변수의 데이터를 변경하면 어떻게 되는가?
    a = 100; // a: 50 -> a: 100
    printf("%d\n", a);
    printf("%d\n", &a);
    printf("%d\n", b);
    printf("%d\n", *b);

    /* 
        1.포인터 변수는 주소를 가리키기 때문에 절대로 직접 주소를 입력하면 안된다.
        2.임의의 주소값을 가져와도 안된다. 0x0000000  ~  0x000ffff
    */
    *b = *b * 10;
    printf("%d\n", b);
    printf("%d\n", *b);
    printf("%d\n", &a);
    printf("%d\n", a);

  








    return 0;
}