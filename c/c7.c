// ���̺귯�� ��������
#include <stdio.h>
#include <string.h>
#include <math.h>
// ����ü ����(����)
struct point {
    int x;
    int y;
};

// ���� ������ main() �Լ� �����
int main(){
    // ����ü ���� ����
    struct point p1, p2;
    int xdiff, ydiff;
    double dist;
    // ����ü ������ �� �Է�
    printf("�������� ��ǥ�� �Է��ϼ���(x y)");
    scanf("%d %d", &p1.x, &p1.y);

    printf("�������� ��ǥ�� �Է��ϼ���(x y)");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt(xdiff * xdiff + ydiff * ydiff);

    printf("�� �� ������ �Ÿ��� %f�Դϴ�.\n", dist);

    return 0;
}





// student ����ü ���� �� ���