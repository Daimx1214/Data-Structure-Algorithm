#include <iostream>
#include <vector>
#include <algorithm>   // for Sort
using namespace std;

int main() {
	int maxCount = 0;
    int n , FreqElement = -1;
    cout << "Enter the value of n = ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
     
    sort(vec.begin(), vec.end()); // for sorting an array
    
    for(int i = 0; i< n; i++){
    int value = 0;
        for(int j = 0; j< n; j++){
     		if(vec[i]==vec[j]){
     			value++;
			}
		}
		if(value>maxCount){
			maxCount = value;
			FreqElement = vec[i];
			
		}
     	if(value>n/2){
     		cout << "Maximum Value = " << vec[i] << endl; // for max num or max num tab ho ga jab wo array ma
            return 0;    // half sa zaida time aiya ga  {1,2,3,1,2,3,1} no max due to  7 ma sa 4 times ana chaiya tha
		 }
	}
	cout<<"No more majority elements"<<endl; 
	cout<<"Most Frequent Element is = "<<FreqElement<<endl; // sab sa zida bar aiya ga {1,2,3,1,2,3,1} most freq = 1;
	return 0;      
}