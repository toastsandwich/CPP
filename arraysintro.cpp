#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num,i;
    cin>>num;
    int array[num];
    for(i=0;i<num;i++){
        cin>>array[i];
    }
    for(i=num-1;i>=0;i--){
        cout<<array[i]<<" ";
    }
    return 0;
    
}
