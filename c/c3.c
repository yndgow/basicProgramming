#include <stdio.h>
int calc(int, char, int);
int dice(int, char, int);
int main(){

    int a, b;
    char c;

    int (*ibc) (int, char, int);
    ibc = calc;

    printf("수식을 입력하세요.\n");
    scanf("%d%c%d", &a,&c,&b);
    int result = ibc(a, c, b);
    printf("%d %c %d = %d",a, c, b, result);
    
    ibc = dice;
}

int dice(int a, char c, int b){
    int sum = a + b;
    return sum;
}




