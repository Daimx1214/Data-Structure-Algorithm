#include <bits/stdc++.h>
using namespace std;

int numberOfSubstrings(string s){
	int n = s.size();
	int first=0, ans=0;
	vector<int>count(3,0); // count for a,b,c
	
	for(int second=0; second<n; second++){
		count[s[second]-'a']++; // current char add kar do
		
		while(count[0]>0 && count[1]>0 && count[2]>0){ // jab window me sab 3 characters ho a,b,c
			ans = ans + n-second; // left se start hone wali sab substrings valid
			count[s[first]-'a']--; // left shift karo
			first++;
		}
	}
    return ans;
}

int main() {
    string s = "abcabc";
    cout<<numberOfSubstrings(s)<<endl; 
    return 0;
}
