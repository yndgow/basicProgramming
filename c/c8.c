#include <stdio.h>
#include <string.h>

// typedef �����
// typedef struct ����ü_�����̸� ����ü_����;
// typedef�� struct ����ü_�����̸��� ����ü_�������� ġȯ�ؼ� �ҷ���
//��) 
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
    strcpy(s.name, "Ȳ����");
    s.grade = 4.3;
    s.birthday.year = 1990;
    s.birthday.month = 3;
    s.birthday.day = 29;

    printf("�й� : %d\n", s.number);
    printf("�̸� : %s\n", s.name);
    printf("���� : %f\n", s.grade);
    printf("������� : %d�� %d�� %d��\n", s.birthday.year, s.birthday.month, s.birthday.day);
    







    return 0;
}
