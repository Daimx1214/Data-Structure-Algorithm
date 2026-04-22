#include <iostream>
#include <vector>
#include <algorithm>   // for Sort
using namespace std;

int main() {
    int freq = 0;
    int ans = 0;
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); // for sorting an array
    
    for(int i = 0; i<n;i++){
    	if(freq == 0){   //values same na ho tab
    		ans = vec[i];
    		freq = 1;  //freq reset to 1
		}
	    else if(ans==vec[i]){
		    freq++;   // jab value same ho gi
	    }
	    else{
		    freq--;   // jasia value koi alag ho gi
	    }
	}
	
	cout<<"Maximum value = "<<ans;
	return 0;
}
	
	
	
	
	
	