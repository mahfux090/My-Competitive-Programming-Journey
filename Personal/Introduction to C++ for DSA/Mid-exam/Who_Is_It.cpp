#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    int id;
    string name;
    char section ;
    int mark;

    Student(int i,string n,char s,int m)
    {
        id=i;
        name=n;
        section=s;
        mark=m;
    }
};
int main()
{
    int t;
    cin>>t;
    for (int i = 1; i <=t; i++)
    {
        int id_1;
    string name_1;
    char section_1;
    int mark_1;
    cin>>id_1>>name_1>>section_1>>mark_1;
    Student s_1(id_1,name_1,section_1,mark_1);

    int id_2;
    string  name_2;
    char section_2;
    int mark_2;
    cin>>id_2>>name_2>>section_2>>mark_2;
    Student s_2(id_2,name_2,section_2,mark_2);

    int id_3;
    string name_3;
    char section_3;
    int mark_3;
    cin>>id_3>>name_3>>section_3>>mark_3;
    Student s_3(id_3,name_3,section_3,mark_3);

    Student top=s_1;
    if (s_2.mark>top.mark || s_2.mark == top.mark && s_2.id < top.id)
    {
        top=s_2;
    }
    if (s_3.mark>top.mark || s_3.mark == top.mark && s_3.id < top.id )
    { 
        top=s_3;
    }
    cout<<top.id<<" "<<top.name<<" "<<top.section<<" "<<top.mark<<endl;
    }
    return 0;
}