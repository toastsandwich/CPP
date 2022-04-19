#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class rectangle{
    public:
        int width;
        int height;
        
        void display(){
            cout<<height<<" "<<width<<endl;
        }
        
        void display(int a, int b){
            cout<<a*b<<endl;
        }
};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    rectangle r1;
    cin>>r1.height;
    cin>>r1.width;
    r1.display();
    r1.display(r1.width,r1.height);
    return 0;
}
