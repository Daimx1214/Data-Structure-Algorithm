#include<iostream>
using namespace std;

int reverse(int x){
    int temp = 0;
    int rev = 1;
    if(x<0){
    	if(x==INT_MIN){
            return 0; 
        }
    	rev = -1;
    	x = -x;
	}
	
    while(x!=0){
    	if(temp>INT_MAX/10){
                return 0;
        }
       int val = x%10;
		temp = temp * 10 + val; // 0+3, 30+2, 320+1
       	x = x/10; 
	}
    return rev * temp;
}

int main(){
	cout<<reverse(123)<<endl;
	cout<<reverse(-123)<<endl;
	cout<<reverse(120);
}