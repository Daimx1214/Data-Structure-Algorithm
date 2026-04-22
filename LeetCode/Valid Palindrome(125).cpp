#include<bits/stdc++.h>
using namespace std;

bool palendrome(string s){
	int start = 0;
	int end = s.size()-1;
	
    for(int i=0; i<s.size();i++){
        s[i]=tolower(s[i]);
    }
	while(end>start){
		if(!isalnum(s[start])){  // agar koi special char mila to move on kr jay next per
            start++;
            continue;
        }
        if(!isalnum(s[end])){  // agar koi special char mila to reverse aa jay next per
            end--;
            continue;
        }
        if(s[start]==s[end] ){
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
	cout<<palendrome("A man, a plan, a canal: Panama")<<endl;
	cout<<palendrome("race a car")<<endl;
	cout<<palendrome(" ");
}