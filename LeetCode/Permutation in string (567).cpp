//#include<bits/stdc++.h>
//using namespace std;
//
//class Solution {
//public:
//    bool isFreqmatch(vector<int>&a, vector<int>&b){
//        for(int i=0; i<26; i++){
//            if(a[i]!=b[i]){  // yani string 1 and string 2 ki freq same ho tab true
//                return false;
//            }
//        }
//        return true;
//    }
//
//    bool checkInclusion(string s1, string s2){
//        int n1=s1.length();
//        int n2=s2.length();
//        
//        if(n1>n2){  // str1 hamsha chota hoga str2 sa
//            return false;
//        }
//        
//        vector<int>freq1(26,0);
//        vector<int>freq2(26,0);
//        for(auto c:s1){
//            freq1[c-'a']++; // char ko a ma sa -ve krta ja or idx number ata jay ga 
//        }
//
//        for(int i=0; i<=n2-n1; i++){  //let n2 = "eidba" n1 = "ab", now 0 idx pa 'ei' 1 idx pa 'id' .....
//            for(int j=i; j< i+n1; j++){
//                freq2[s2[j]-'a']++; 
//            }
//            
//            if(isFreqmatch(freq1, freq2)){
//                return true;
//            }
//        }
//        return false;
//    }
//};

#include<bits/stdc++.h>
using namespace std;

bool isSame(int freq1[] , int freq2[]){
	for(int i=0; i<26; i++){
        if(freq1[i]!=freq2[i]){ 
            return false;
            }
        }
        return true;
    }
    
    bool permutation(string s1 , string s2){
    	int freq[26] = {0};
    	for(int i=0; i<s1.length(); i++){
    		freq[s1[i]-'a']++;
		}
		int size = s1.length();
    	for(int i=0; i<=s2.length()-size; i++){
    	int winIdx = 0, idx = i;
    	
    	int freq2[26] = {0};
    	while(size>winIdx && s2.length()>idx){
    		freq2[s2[idx] - 'a']++;
    		winIdx++;
    		idx++;
		}
		if(isSame(freq , freq2)){
			return true;
		}
	}
	return false;
}

int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";

    if(permutation(s1,s2)){
        cout<<"True";
    } else {
        cout<<"False";
    }
}