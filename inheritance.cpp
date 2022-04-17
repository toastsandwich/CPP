#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class triangle{
    public :
        void Triangle(){
            cout<<"I am a triangle"<<endl;
        }
        
};
class isosceles : public triangle{
    public :
        void Isosceles(){
             //super();
            cout<<"I am an isosceles triangle"<<endl;
            cout<<"In an isosceles triangle two sides are equal"<<endl;
        }
};

int main() {
    isosceles isc;
    isc.Isosceles();
    isc.Triangle();
    return 0;
}
