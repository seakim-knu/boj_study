/*
boj_1158.cpp
boj 1158 요세푸스문제
Created by Seah Kim on 2023/08/09.
*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n, k;
    int i, j;
    
    cin >> n >> k;

    queue<int> Q1;

    for(i=1; i<=n; ++i){
        Q1.push(i);
    }

    cout << "<";
    for(i=0; i<n-1; i++){
        for(j=0; j<k-1; j++){
            Q1.push(Q1.front());
            Q1.pop();
        }
        cout<<Q1.front()<<", ";
        Q1.pop();
    }
    cout<< Q1.front();
    cout << ">";

    return 0;
}