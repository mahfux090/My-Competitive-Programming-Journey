#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int roll;
    string a;

    Student(int roll,string a){
        this->roll=roll;
        this->a=a;
    }
    
};
int main()
{
    Student* Rakib=new Student(26,"A+");
    Student* Sakib=new Student(55,"B");
    Sakib=Rakib;
    cout<<Sakib->roll<<" "<<Sakib->a;
    
    return 0;
}