#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t){

        if(s.size() != t.size()){
            return false;
         }
        vector<int>freq(26,0);    
        
        for(int second=0; second<s.size(); second++){
            freq[s[second]-'a']++; // freq = [a:3, n:1, g:1, r:1, m:1] sab k index pa ja use ++ krdia
        }
        for(int second=0; second<t.size(); second++){
            freq[t[second]-'a']--; // freq =[a:3-3=0, n:1-1=0, g:1-1=0, r:1-1=0, m:1-1=0] same-- krdia

            if(freq[t[second]-'a'] < 0){
                return false;
            }
        }
            return true;
    }
};

int main(){
	Solution sln;
	string s = "anagram";
    string t = "nagaram";

    if(sln.isAnagram(s, t)){
        cout<<s<<" and "<<t<<" are equal "<<endl;
    }
    else{
    	cout<<s<<" and "<<t<<" are not equal "<<endl;
	}
}