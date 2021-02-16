#include<iostream>
#include<string.h>
#include<fstream>
#include"student.h"
#include"Courses.h"
using namespace std;
class Courses
{
private:
    int year;
    int ncourses;
    string semester;
    string course_name[];
public:
    /////////////////constructors///////////////////
    Courses();
    ~Courses();
    Courses(int x,int y,string s,string t[])
    {
        year = x;
        ncourses = y;
        semester = s;
        course_name = t[];
    }
    Courses(int x,int y,string s,string t)
    {
        year = 0;
        ncourses = 0;
        semester = NULL;
        course_name = NULL;
    }
    
    /////////////////setters////////////
    void syear(int nyear)
    {
        year = nyear;
    }
    void sncourses(int nncourses)
    {
        ncourses = nncourses;
    }
    void ssmester(string nsemester)
    {
        semester = nsemsester;
    }
    void scoursen(string ncname)
    {
        course_name = ncname;
    }
    /////////////getters//////////////
    string rs()
    {
        return semester;
    }
    string rcn()
    {
        return cn;
    }
    int ry()
    {
        return year;
    }
    int nc()
    {
        return ncourses;
    }

};


