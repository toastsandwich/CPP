#include <iostream>
#include <cstdio>
using namespace std;

void problem(int asked1, int asked2){
    for (int i = asked1; i <= asked2; i++) {
       switch (i) {
       case 1:
       cout<<"one"<<endl;
       break;
       case 2:
       cout<<"two"<<endl;
       break;
       case 3:
       cout<<"three"<<endl;
       break;
       case 4:
       cout<<"four"<<endl;
       break;
       case 5:
       cout<<"five"<<endl;
       break;
       case 6:
       cout<<"six"<<endl;
       break;
       case 7:
       cout<<"seven"<<endl;
       break;
       case 8:
       cout<<"eight"<<endl;
       break;
       case 9:
       cout<<"nine"<<endl;
       break;
       default:
       if (i%2!=0) {
           cout<<"odd"<<endl;
       }
       else {
           cout<<"even"<<endl;
       }
       } 
    }
}
int main() {
    int asked1,asked2;
    cin>>asked1>>asked2;
    problem(asked1,asked2);
    return 0;
}
