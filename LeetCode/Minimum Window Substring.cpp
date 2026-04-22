#include<bits/stdc++.h>
using namespace std;

string fung(string s, string t){
	int Idx=-1, left=0, right=0, count=0, minLen = INT_MAX;
	vector<int>freq(256,0);
	for(int i=0; i<t.size(); i++){
		freq[t[i]]++;
	}
	while(right<s.size()){
		if(freq[s[right]]>0){
			count++;
		}
		freq[s[right]]--;
		right++;
		
		while(count==t.size()){
			if(right-left < minLen){
				minLen = right-left;
				Idx = left;
			}
			
			freq[s[left]]++;
			if(freq[s[left]]>0){
				count--;
			}
			left++;
		}
	}
    return Idx == -1 ? "" : s.substr(Idx, minLen);
}
int main(){
	string s = "SADFGHGFDS";
	string t = "FGH";
	
	cout<<fung(s,t);
	
}