#include <stdio.h>
#include <string.h>

// typedef 예약어
// typedef struct 구조체_형식이름 구조체_별명;
// typedef는 struct 구조체_형식이름을 구조체_별명으로 치환해서 불러라
//예) 
//typedef struct tdate () date => struct tdate sdate; => date sdate;

typedef struct tdate{
    int year;
    int month;
    int day;
} date;

typedef struct{
    int number;
    char name[10];
    double grade;
    date birthday;
} student;

int main()
{
    student s;
    s.number = 1000;
    strcpy(s.name, "황진이");
    s.grade = 4.3;
    s.birthday.year = 1990;
    s.birthday.month = 3;
    s.birthday.day = 29;

    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %f\n", s.grade);
    printf("생년월일 : %d년 %d월 %d일\n", s.birthday.year, s.birthday.month, s.birthday.day);
    







    return 0;
}
