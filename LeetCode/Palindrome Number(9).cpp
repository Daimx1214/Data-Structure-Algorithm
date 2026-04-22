#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
	if(x<0){
		return false;
	}
	string s = to_string(x); // int ko string ma convert kr
		int start = 0;
		int end = s.size()-1;
		while(end>start){
		if(s[start]==s[end]){
	        start++;
		    end--;
    	}
		else{
			return false;
		}
	}
	return true;
}


int main(){
	cout<<isPalindrome(1211);
}