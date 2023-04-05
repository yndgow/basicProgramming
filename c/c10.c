#include <stdio.h>
typedef struct
{
    char nae[12];
    int os, db, hab, hhab;
} jsu;

int main(){
    jsu st[3]= {{"데이터1", 95, 88},{"데이터2", 84, 91},{"데이터3", 86, 75}};
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
    jsu타입을 포인터로 접근해봅시다
    주소를 가르킬때는 포인터변수
    주소의 데이터내용물을 가르킬때는 *포인터변수
    배열의 시작주소 == 포인터변수 == (포인터변수 + 0)
    &배열[0] == 포인터변수 == (포인터변수 + 0) : 여기서 0는 다음 위치를 가르키는 상대순서
    &배열[0]의 내용물(데이터) == 배열[0] == *포인터변수 == *(포인터변수 +0)
    다음 배열 == 배열 [1]
    다음배열의 주소 == &배열[1] == (포인터변수 +1) : 여기서 1은 포인터주소의 상대위치가 1
    다음배열의 주소의 내용물 == 배열 [1] == *(포인터 변수 + 1)
    다음 다음 배열 == 배열[2] == 배열[배열의 크기-1]
    다음다음 배열의 주소 == &배열[2] == (포인터변수 + 2)
    여기서 2는 포인터주소의 다음다음
    다음다음 배열의 내용물 == 배열[2] == *(포인터변수 +2)
 */

// 포인터 변수는 pst가 배열의 시작주소를 가르킨다.
jsu* pst;
pst = &st[0]; // 주소연산자 & + 0 번째 인덱스 배열요소(=첫번째 배열요소) // 1-1 참조

/*  2가지 방법이 있습니다. 포인터를 이용한 첫번째 배열의 내용출력
    1. 포인터로 구조체의 멤버에 접근하는 방법 포인터 -> 구조체 멤버
    2. 일반 포인터의 내용물접근방법에 의해 내용에 접근하는 방법: *(포인터).구조체멤버
    2번째 방법부터 먼저해봅시다.
*/
// pst주소의 내용물(=jsu st[0]을 가르킴)
    // st[0]구조체의 nae멤버 내용물 출력


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


// 1번째 방법 구조체의 포인터멤버 연산자에 의한 방법
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
