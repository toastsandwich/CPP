#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void eraser(vector<int>&v);
int main() {
    vector<int> victor;
    int size,element,a=0;
    cin >> size;
    //getting the vector filled 
    while(a < size){
        cin >> element;
        victor.push_back(element);
        a++;
    }
    eraser(victor);
    return 0;
}
void eraser(vector<int>&v){
    int first_query,second_query1,second_query2,c,d,e,b=0;
    cin>>first_query>>second_query1>>second_query2;
    c = first_query-1;
    d = second_query1-1;
    e = second_query2-1;
    //solving first query
    v.erase(v.begin()+c);
    
    //solving second query
    //use v.size(since vector has variable size)
    v.erase(v.begin()+d,v.begin()+e);
    cout<<v.size()<<"\n";
    while(b<v.size()){
        cout<<v[b]<<" ";
        b++;
    }
}
