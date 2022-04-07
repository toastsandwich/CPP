#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int max(int a, int b, int c, int d){
    int result = (a>b && a>c && a>d)?a:(b>c && b>d)?b:(c>d)?c:d;
    return result;    
    }


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    cout<<max(a,b,c,d);
    return 0;
}
