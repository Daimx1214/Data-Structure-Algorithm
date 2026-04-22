#include<iostream>
#include<vector>
using namespace std;

void unique(string s){
	vector<int>freq(26,0);	
	for(auto c:s){
		freq[c-'a']++;  // total freq count
	}
	
	for(int i=0; i<s.size(); i++){
		if(freq[s[i]-'a']==1){  // first char freq == 1
			cout<<i;
			return;
		}
	}
	cout<<-1;	
}

int main(){
	string s = "leetcode";
	unique(s);

}