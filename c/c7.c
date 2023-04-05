// 라이브러리 가져오기
#include <stdio.h>
#include <string.h>
#include <math.h>
// 구조체 선언(정의)
struct point {
    int x;
    int y;
};

// 시작 실행점 main() 함수 만들기
int main(){
    // 구조체 변수 선언
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;
    // 구조체 멤버요소 값 입력
    printf("시작점의 좌표를 입력하세요(x y)");
    scanf("%d %d", &p1.x, &p1.y);

    printf("도착점의 좌표를 입력하세요(x y)");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt(xdiff * xdiff + ydiff * ydiff);

    printf("두 점 사이의 거리는 %f입니다.\n", dist);

    return 0;
}





// student 구조체 변수 값 출력