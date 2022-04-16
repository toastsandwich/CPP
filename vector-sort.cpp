#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort_display(vector<int> &v,int size);

int main() {
    system("cls");
    vector<int> sorting_vector;
    int size,element;
    cin >> size;
    for (int i = 0 ; i < size ; i++){
        cin >> element;
        sorting_vector.push_back(element);
    }
    sort_display(sorting_vector,size);//function is called here
    return 0;
}
void sort_display(vector<int> &v,int size){
    sort(v.begin(),v.end());//sorting of array is done here syntax sort(v.begin(),v.end())
    //display of sorted vector
    int a = 0;
    while (a<size){
        cout<<v[a]<<" ";
        a++;
    }
}
