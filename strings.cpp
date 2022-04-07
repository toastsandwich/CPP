#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b,c;
    cin>>a>>b;
    int n = a.length();
    int m = b.length();
    c = a + b;

    cout<<n<<" "<<m<<endl;
    cout<<c<<endl;
    
    c[0]=a[0];
    a[0]=b[0];
    b[0]=c[0];
    cout<<a<<" "<<b;
    
    
    return 0;
}
