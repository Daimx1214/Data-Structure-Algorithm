#include <iostream>
#include <vector>
using namespace std;

int main() {
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
    
    for (int i = 0; i < n; i++) {
    	for (int j = i + 1; j < n; j++) {
    		if(vec[i] + vec[j] == target){
    			cout<<"Indexes: "<<i<<" and "<<j<<endl;
    			cout<<"Values: "<<vec[i]<<" and "<<vec[j];
			}
		}
	}
	return 0;
}
    		


