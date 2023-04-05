#include <stdio.h>
int main()
{
    char *s;
    s = "gilbut";

    printf("%c\n", *s);
    printf("s의 시작주소 : %d\n", s);
    
    for(int i = 0; i < 6; i++){
        printf("%c, ", s[i]);
        printf("%c, ", *(s + i));
        printf("%s\n", s + i);
    }
    
    printf("%s\n", s);

    int x [3] = {100, 200, 300};
    printf("%d, ", x[0]);
    printf("%d, ", x[1]);
    printf("%d\n", x[2]);

    printf("%d", *(x));
    printf("%d", *(x+1));
    printf("%d", *(x+2));
    printf("%d", *(x+3));
    return 0;
}