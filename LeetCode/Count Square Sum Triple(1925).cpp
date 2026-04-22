#include<bits/stdc++.h>
using namespace std;

int countTriples(int n){
        int count = 0;
        for(int i = 1; i< n; i++){
            for(int j = 1; j < n; j++){	
            int total = i*i + j*j;      // i = 3 , j = 4 = 25 in total
            int temp = sqrt(total);    // temp = sqrt(25) = 5;
               if(temp*temp == total && temp <= n){   // 25 == 25 && 5<=5;
               	count++;
			}
		}
	}
	return count;
}

int main(){
	cout<<countTriples(5);
}