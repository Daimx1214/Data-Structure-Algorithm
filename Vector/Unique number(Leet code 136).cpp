#include<iostream>
#include<vector>
using namespace std;

int fun(vector<int>& vec) {       // & iss lia lagaiya q k ya function ki original ko b change kra (passed by reference)
    int result = 0;
    for(int num : vec){
    	result = result ^ num;
	}
	return result;
}

int main(){
	vector<int>vec = {1, 2, 3, 4, 2, 1}; // agar 2 unique number ho to dono ko bitwise kr k answer show kra ga 
	// jaisa in k ans 7 ha or ma vector ma 7 da do to answer 0 ho ga. Using binary form of bitwise 0+0=0 , 0+1=1
	cout<<"The Unique Number is = "<< ah(vec)<<endl;
	return 0;
}