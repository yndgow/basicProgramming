#include <stdio.h>
void print_star_rect(int line_size);
int main(void)
{
    // void : 입력할 필요없음 출력할 내용없음을 명시적으로 표현한것
    //          입력값의 경우 비워두면 void로 설정
    //          출력값(=결과값)의 경우에는 반드시 적어주셔야함
    //          void main(void) == void main
    // main() 함수의 결과값이 정수일경우 운영체제에 프로그램이 실행된 상태를 알려줌
    //      보통 0이면 프로그램코드가 잘 실행되어 잘 마무리되었다는 뜻
    //      특정 값을 반환 (예: -1이라면 실행이 문제가 있었다) 하는 경우 운영체제가 그 경우에 대한 에러처리로 대응한다.

    // 10개의 별(**********)을 찍어봅시다.
    // 이것을 10번 반복해줍시다.
    // 제일 간단한 경우

    /*
        위의 경우는 너무 관리하기가 어려우므로
        동일한 경우에는 반복문이 좋습니다.
        while : 횟수가 정해지지 않은 경우, 
        do ~ while : 무조건 1번 실행해보고 반복,
        for : 횟수가 정해진 while
    */ 

    print_star_rect(4);

    return 0;            
}


void print_star()
{
    for(int i = 0; i < 10; i++){
        printf("*");
    }

}

void print_star_rect(int line_size)
{
    for(int i = 0; i < line_size; i++){
        print_star();
        printf("\n");
    }
}
