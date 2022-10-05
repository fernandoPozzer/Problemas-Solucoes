#include <cmath>
#include <iostream>
#include <map>
#include <list>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

void printMaxNum(const char *str,int size,int remove){
    list<pair<char,int>> nums;
    int lastAccepted=0,x;
    for(x=0;x<size;x++){
        char c = str[x];
        
        if(x-lastAccepted>remove){
            pair p = nums.front();
            cout << p.first;
            remove-= p.second - lastAccepted;
            lastAccepted = p.second+1;
            nums.pop_front();
        }
        if(remove<=0)break;
        while(!nums.empty() && nums.back().first<c){
            nums.pop_back();
        }
        nums.push_back({c,x});
    }
    while(!nums.empty() && remove>0 && size-lastAccepted>remove){
        pair p = nums.front();
        cout << p.first;
        remove-= p.second - lastAccepted;
        lastAccepted = p.second+1;
        nums.pop_front();
    }
    while(x<size){
        cout << str[x++];
    }
}


int main(){
    int n,d;
    while(true){
        cin >> n >> d;
        if(n==0 && d==0)break;
        string data;
        cin >> data;
        printMaxNum(data.c_str(),n,d);
        cout << endl;

    }
    return 0;
}