#include <iostream>
#include <vector>
//#include <algorithm>   // For Sort
using namespace std;

int main() {
	int pairSum = 0;
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int target;
    cout << "Enter the target = ";
    cin >> target;
    
//    sort(vec.begin(), vec.end()); 
    int i = 0 , j = n-1;
    while(i < j){
    pairSum = vec[i] + vec[j];
	
        if(pairSum<target){
    	    i++;
	    }
	    else if(pairSum>target){
		    j--;
	    }
	    else{	
	    	cout<<"Index are:"<<i<<" + "<<j<<endl; 
	        cout<<"Pair found: "<<vec[i]<<" + "<<vec[j]<<" = "<<target<<endl;
	        break; // agar break na hoi to infinite time loop chala gi
	    }
	}
	    cout<<"Target not found! ";
	return 0;
}
    