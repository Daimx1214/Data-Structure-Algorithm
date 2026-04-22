#include <iostream>
using namespace std;
int main() {

int n;
cout<<"Enter the number = ";
cin>>n;
for(int i = 0; i<n; i++){
    int x = 1;
    for(int j = 0; j<i+1; j++){
        cout<<x++;
        
    }
    cout<<endl;
}

    return 0;
}



#include <iostream>
using namespace std;
int main() {

int n;
cout<<"Enter the number = ";
cin>>n;
for(int i = 0; i<n; i++){
    int x = n;
    for(int j = 0; j<i+1; j++){
        cout<<x--;
        
    }
    cout<<endl;
}

    return 0;
}

