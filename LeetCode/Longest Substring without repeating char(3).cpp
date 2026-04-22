#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
	
	int first = 0, second = 0, length = 0;
	vector<bool>count(256 ,0);
	
	while(s.size()>second){
		while(count[s[second]]){ // remove repeating values
			count[s[first]] = 0; // jasia repeating char mila first++ krta jao
			first++;
		}
		count[s[second]] = 1;  // new ana wala char ko 1 kra ga
		length = max(length , second-first+1); 
			second++;		
	}
	cout<<length;
}


int main(){
	lengthOfLongestSubstring("abcdecdeabcdf");
}