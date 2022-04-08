#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class student{
    public:
    int age;
    string first_name;
    string last_name;
    int grade;
};

int main() {
    string a,b;
    int c,d;
    
    cin>>c>>a>>b>>d;
    student student1;
    student1.age = c;
    student1.first_name = a;
    student1.last_name = b;
    student1.grade = d;
    
    cout<<student1.age<<endl<<student1.last_name<<", "<<student1.first_name<<endl<<student1.grade<<"\n"<<endl;
    cout<<student1.age<<","<<student1.first_name<<","<<student1.last_name<<","<<student1.grade<<endl;          
    return 0;
}
