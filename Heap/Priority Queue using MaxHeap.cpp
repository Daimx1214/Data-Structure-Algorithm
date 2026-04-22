#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    
    pq.push(5);
    pq.push(23);
    pq.push(8);
    pq.push(15);
    pq.push(42);
    pq.push(7);
    pq.push(19);
    pq.push(30);
    pq.push(2);
    pq.push(11);
    pq.push(28);
    pq.push(14);
    pq.push(6);
    pq.push(35);
    pq.push(9);
    pq.push(17);
    pq.push(40);
    pq.push(3);
    pq.push(12);
    pq.push(26);
    pq.push(1);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}