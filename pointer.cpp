#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,diff;
    cin>>a>>b;
    diff=a-b;
    cout<<a+b<<endl<<abs(diff)<<endl;
    return 0;
}

//this is in my opinion an alter solutions as pointers are not used here.
