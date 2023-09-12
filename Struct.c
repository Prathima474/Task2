#include<stdio.h>
#include<string.h>
typedef struct student 
{
    int id;
    float marks;
    int rollno;
    int phno;
    int age;
    char name[12];
    char city[9];
    float per;
    char adress[20];
    int year;
   
}point;
void function1(point pt);
int main()
{
    point pt;
    pt.id=1234;
    pt.marks = 60;
    pt.rollno = 1234;
    pt.phno = 123456789;
    pt.age=23;
    pt.per=12.28;
    pt.year=2000;
    strcpy(pt.name,"prathima");
    strcpy(pt.city,"banglore");
    strcpy(pt.adress,"woc");
    function1(pt);
}
 void function1(point pt){
printf("%d %d %d %d %f %s %s %f %s %d",pt.rollno,pt.phno,pt.id,pt.age,pt.marks,pt.name,pt.city,pt.per,pt.adress,pt.year);
 }