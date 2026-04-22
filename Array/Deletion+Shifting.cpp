#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5; 

    int index = 1; 
    int value = 7;

    for(int i = n-1; i > index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = value;

    for(int i = 0; i < n; i++) {
	cout << arr[i] << " ";
	}
    cout << endl;

    return 0;
}


//inr arr[5]= {12345}
//int n = 5;
//idz4 val 9
//n-1 index --
