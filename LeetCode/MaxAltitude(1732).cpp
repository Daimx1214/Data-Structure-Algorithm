#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> gain {-5,1,5,0,-7};
	int altitude = 0;
	int maxAlt = 0;
        for(int i = 0; i<gain.size(); i++){
        altitude = altitude + gain[i];
        maxAlt = max(maxAlt ,altitude);
        }
        cout<<"Maximum Altitude: "<<maxAlt<<endl;
    return 0;
}
