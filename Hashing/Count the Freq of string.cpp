#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
	string n;
	cin>>n;
	
	unordered_map<char,int>freq;
	for(int i=0; i<n.length(); i++){
		freq[n[i]]++;
	}
	cout<<"Result: "<<endl;
	for(auto i: freq){
		cout<<i.first<<" -> "<<i.second<<endl;
	}	
}