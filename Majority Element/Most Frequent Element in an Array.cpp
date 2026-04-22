#include <iostream>
#include <vector>
#include <algorithm>   // for Sort
using namespace std;

int main() {
    int freq = 1;
    int maxFreq = 1;
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter the elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end()); // for sorting an array
    
    int ans = vec[0];
    for (int i = 1; i < n; i++) {
        if (vec[i] == vec[i-1]) {  //agar freq k value pichla value sa mila to ++
            freq++;	
        } else {
            freq = 1;   // nhi to jo next value ha us sa start kra as 1
        }

        if (freq > maxFreq) {    
            maxFreq = freq;    // maxFreq ma maximum freq store ho gi or batiya ga k kitni bar ha jaisa 3 ,4 ,5 etc
            ans = vec[i];      // ans ma wo value batiya ga k kon si value ha jo maximum ha
        }
    }

    cout << "Maximum Value = " << ans << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}
