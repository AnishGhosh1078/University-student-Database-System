#include<iostream>
#include<string.h>
using namespace std;
class student{
private:
string name;
string college;
string country;
float gpa;
int matrno;
public:
void sname(string s)
{
name = s;
}
string gname()
{
    return name;
}
///
void scollege(string s)
{
    college = s;
}
string gcollege()
{
    return college;
}
///
void sgpa(float g)
{
    gpa = g;
}
float ggpa()
{
    return gpa;
}
///
void scountry(string s )
{
    country = s;
}
string gcountry()
{
    return country;
}
////
void smatrno(int g)
{
    matrno = g;
}
int gmatrno()
{
    return matrno;
}
///
///////////////////////constructor for input/////////////////
student(string s_1,string s_2,string s_3,float f_3,int f_4)
{
    name    = s_1;
    college = s_2;
    country = s_3;
    gpa = f_3;
    matrno = f_4;
}
student(string s_1,string s_2,string s_3,float f_3,int f_4)
{
    name    = "incomplete";
    college = "incomplete";
    country = "incomplete";
    gpa = 0;
    matrno = 0 ;
}
student()
{
    
}


};