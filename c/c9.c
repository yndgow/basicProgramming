#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct{
    int x;
    int y;
} point;

typedef struct{
    point p1;
    point p2;
} rect;

int main()
{   
    rect r;
    
    printf("���� ����� ��ǥ�� �Է��ϼ��� (x y)");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("������ ��� ��ǥ�� �Է��ϼ��� (x y)");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    int w,h;
    int peri,area;
    
    w = r.p2.x - r.p1.x;
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;

    printf("���� : %d\n", area);
    printf("�ѷ� : %d\n", peri);




    return 0;
}