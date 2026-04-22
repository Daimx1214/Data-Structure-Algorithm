#include<bits/stdc++.h>
using namespace std;

void smallWindow(string str){
	vector<int>count(256,0);
	
	int diff = 0; // total unique char in str
	for(auto c : str){
		if(count[c]==0){ // kya ye character pehli baar mila hai
			diff++;
		}
		count[c]++; // next char pa move kr
	}
	
	vector<int>freq(256,0); // hamrai jo current window ha us ma char k count dekha ga 
	int val=0, first=0, ans=str.length();
	
	for(int second=0; second<str.length(); second++){
		freq[str[second]]++; // right sa add hoga
		if(freq[str[second]]==1){  // agar char first time aiya ha to val++
			val++;
		}
		
		while(val==diff){  // val is window k distinct + diff is string k distinct
			ans = min(ans, second-first+1);  // phali sa choti window ha to update kr
			freq[str[first]]--; // jab equal hoga ab window left sa -- krta ja 
			
			if(freq[str[first]]==0){ // jab left -- krta hoa koi diff wala nikl jay to window aga barhao
				val--;
			}
			first++;
		}
	}
	cout<< ans;
}

int main(){
	smallWindow("AABBBCBBAC");
}


