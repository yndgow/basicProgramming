#include <stdio.h>
typedef struct
{
    char nae[12];
    int os, db, hab, hhab;
} jsu;

int main(){
    jsu st[3]= {{"������1", 95, 88},{"������2", 84, 91},{"������3", 86, 75}};
    // jsu* p;
    // p = &st[0];
    /*(p+1)->hab = (p+1)->os + (p+2)->db;
    (p+1)->hhab = (p+1)->hab + p->os + p->db;
    printf("%d", (p+1)->hab + (p+1)->hhab);*/

    for(int i=0; i<3; i++){
        printf("%d--\n", i);
        printf("st[%d].nae %s\n", i, st[i].nae);
        printf("st[%d].os %d\n", i, st[i].os);
        printf("st[%d].db %d\n", i, st[i].db);
        printf("st[%d].hab %d\n", i, st[i].hab);
        printf("st[%d].hhab %d\n", i, st[i].hhab);
    }
/* 
    jsuŸ���� �����ͷ� �����غ��ô�
    �ּҸ� ����ų���� �����ͺ���
    �ּ��� �����ͳ��빰�� ����ų���� *�����ͺ���
    �迭�� �����ּ� == �����ͺ��� == (�����ͺ��� + 0)
    &�迭[0] == �����ͺ��� == (�����ͺ��� + 0) : ���⼭ 0�� ���� ��ġ�� ����Ű�� ������
    &�迭[0]�� ���빰(������) == �迭[0] == *�����ͺ��� == *(�����ͺ��� +0)
    ���� �迭 == �迭 [1]
    �����迭�� �ּ� == &�迭[1] == (�����ͺ��� +1) : ���⼭ 1�� �������ּ��� �����ġ�� 1
    �����迭�� �ּ��� ���빰 == �迭 [1] == *(������ ���� + 1)
    ���� ���� �迭 == �迭[2] == �迭[�迭�� ũ��-1]
    �������� �迭�� �ּ� == &�迭[2] == (�����ͺ��� + 2)
    ���⼭ 2�� �������ּ��� ��������
    �������� �迭�� ���빰 == �迭[2] == *(�����ͺ��� +2)
 */

// ������ ������ pst�� �迭�� �����ּҸ� ����Ų��.
jsu* pst;
pst = &st[0]; // �ּҿ����� & + 0 ��° �ε��� �迭���(=ù��° �迭���) // 1-1 ����

/*  2���� ����� �ֽ��ϴ�. �����͸� �̿��� ù��° �迭�� �������
    1. �����ͷ� ����ü�� ����� �����ϴ� ��� ������ -> ����ü ���
    2. �Ϲ� �������� ���빰���ٹ���� ���� ���뿡 �����ϴ� ���: *(������).����ü���
    2��° ������� �����غ��ô�.
*/
// pst�ּ��� ���빰(=jsu st[0]�� ����Ŵ)
    // st[0]����ü�� nae��� ���빰 ���


    printf("*(st+0).nae = %s\n", (*(pst+0)).nae); 
    printf("*(st+0).os = %d\n", (*pst).os); 
    printf("*(st+0).db = %d\n", (*pst).db); 
    printf("*(st+0).hab = %d\n", (*pst).hab); 
    printf("*(st+0).hhab = %d\n", (*pst).hhab); 

    printf("---for start---\n");
    for(int i = 0; i < 3; i++){
        printf("*(st+%d).nae = %s\n", i, (*(pst+i)).nae);
        printf("*(st+%d).os = %d\n", i, (*(pst+i)).os);
        printf("*(st+%d).db = %d\n", i, (*(pst+i)).db);
        printf("*(st+%d).hab = %d\n", i, (*(pst+i)).hab);
        printf("*(st+%d).habb = %d\n", i, (*(pst+i)).hhab);
        
    };
    printf("---for end---\n");


// 1��° ��� ����ü�� �����͸�� �����ڿ� ���� ���
    printf("---for start---\n");

    for(int i = 0; i < 3; i++){
        printf("(pst+%d)->nae = %s\n", i, (pst+i)->nae);
        printf("(pst+%d)->os = %d\n", i, (pst+i)->os);
        printf("(pst+%d)->db = %d\n", i, (pst+i)->db);
        printf("(pst+%d)->hab = %d\n", i, (pst+i)->hab);
        printf("(pst+%d)->hhab = %d\n", i, (pst+i)->hhab);
    };
    printf("---for end---\n");
}
