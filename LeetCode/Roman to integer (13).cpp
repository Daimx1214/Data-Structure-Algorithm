#include<bits/stdc++.h>
using namespace std;

int value(char c){
	if(c == 'I'){
		return 1;
	}
	if(c =='V'){
		return 5;
	}
	if(c == 'X'){
		return 10;
	}
	if(c=='L'){
		return 50;
	}
	if(c=='C'){
		return 100;
	}
	if(c=='D'){
		return 500;
	}
	if(c=='M'){
		return 1000;
	}
	return 0;
}
int main(){
	string str;
	cin>>str;
	
	int count;
	for(int i = 0; i < str.size(); i++){
		int curr = value(str[i]);
		int next;
		if(i+1 < str.size()){
		    next = value(str[i+1]);
		}
		else{
			next = 0;
		} 
 
	if(curr<next){
		count = count - curr;
	}
	else{
		count += curr;
	}
}
	cout<< count;	
}
	
	
	
	