

                             //  ya ghlat ha isa sahii kr

         
#include<bits/stdc++.h>
using namespace std;

int maxFreqSum(string s) {
    vector<int>freq(26,0);
	int vowel = 0, consonant = 0;
	for(char c : s){
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			vowel++;
		}
		else{
			consonant++;
		}
	}
	return max(vowel,consonant);
}

int main(){
	cout<<maxFreqSum("success")<<endl;
	cout<<maxFreqSum("aeiaei");
}



class Solution {
public:
    int maxFreqSum(string s) {
    vector<int>freq(26,0);
	int vowel = 0, consonant = 0;
	for(char c : s){
		if(!freq[c-'a']){ 
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
			vowel++;
		}
		else{
			consonant++;
		}
		freq[c-'a'] = 1;
	    }
    }
	return max(vowel,consonant);
    }
};