#include<iostream>
#include<string.h>
#include<fstream>
#include"student.h"
#include"Courses.h"
using namespace std;
int p = 0;
class entry: public student,public Courses{
public:
    
    entry(string s_1,string s_2,string s_3,float f_3,int f_4,int x,int y,string s,string t[p]{
        cout<<endl;
        cout<<"////////////////////////////////ENTRY FORM//////////////////////////////";
        cout<<endl;
        cout<<"enter name : ";
        cin>>s1;
        cout<<endl;
        cout<<"enter college : ";
        cin>>s_2;
        cout<<endl;
        cout<<"enter country : ";
        cin>>s_3;
        cout<<endl;
        cout<<"enter gpa(overall) : ";
        cin>>f_3;
        cout<<endl;
        cout<<"enter matriculation number : ";
        cin>>f_4;
        cout<<endl;
       cout<<"///////////////////////////////////////////////////////////////////////";
        student(s_1,s_2,s_3,f_3,f_4);
        ofstream student_file(s1.c_str());

        student_file<<s_1<<endl<<s_2<<s_3<<endl<<f_3<<endl<<f_4<<endl;
        cout<<"//////////////////////////////COURSE ENTRY/////////////////////////////";
        cout<<" Enter year : ";
        cin>>x;
        cout<<endl;
        cout<<"Enter Number of courses : ";
        cin>>y;
        cout<<endl;
        cout<<"Enter the semester spring/fall : ";
        cin>>s;
        cout<<"Enter the courses : "<<endl;
        for(p;p<y;y++)
        {
            cin>>t[p]
            cout<<endl;
        }
        cout<<endl;
        ofstream student_record(string(f_4).c_str());
        p = 0;
        



        }

};
