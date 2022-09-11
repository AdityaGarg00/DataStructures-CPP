#include <iostream>
#include<stdio.h>
using namespace std;

struct student{
    string name;
    string dept;
    int phy;
    int chem;
    int math;
    int oops;
    int dbms;
}s1,s2,s3;

void fill(struct student s, string Name, string Dept, int p, int c, int m, int o, int d)
{
    s.name = Name;
    s.dept = Dept;
    s.phy = p;
    s.chem = c;
    s.math = m;
    s.oops = o;
    s.dbms = d;
}

void show(struct student s)
{
    printf("\n %s \n %s \n %d \n %d \n %d \n %d \n %d",s.name, s.dept, s.phy, s.chem, s.math, s.oops, s.dbms);
}

int percentage(struct student s)
{
    return ((s.phy + s.chem + s.math + s.oops + s.dbms)*100)/150;
}

int main()
{
    fill(s1, "Riya", "CSAI", 29, 21, 20, 25, 30);
    show(s1);
    printf("\nPercentage : %d",percentage(s1));
    return 0;
}
