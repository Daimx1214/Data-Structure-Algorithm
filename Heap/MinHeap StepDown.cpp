#include<iostream>
using namespace std;

void Heapify(int arr[], int index, int n){
	int smallest = index;
	int left  = 2*index+1;
	int right = 2*index+2;
	
	if(left<n&&arr[left]<arr[smallest]){
		smallest = left;
	}
	if(right<n&&arr[right]<arr[smallest]){
		smallest = right;
	}
	
	if(index!=smallest){
		swap(arr[smallest],arr[index]);
		Heapify(arr,smallest,n);
	}
}

void MinHeap(int arr[] , int n){
	for(int i=(n/2)-1; i>=0; i--){ 
	// (n/2)-1 formula to find k kahan sa check krna start krna node ko... if n=11 i=4
		Heapify(arr,i,n);
	}
}

void Delete(int arr[], int &n){
    if(n==0){
        cout<<"Heap is Empty"<<endl;
        return;
    }
    cout<<arr[0]<<" is deleted"<<endl;
    arr[0] = arr[n-1];
    n--;
    Heapify(arr,0,n);    // arr size , root index , current heap size
}

void print(int arr[] , int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int x;
	cout<<"Enter the size: ";
	cin>>x;
	int arr[x];
	int n=0;
    int choice;

    while(true){
    	cout<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Print"<<endl;
        cout<<"4. Exit"<<endl;

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:{
                int value;
                cout<<"Enter value: ";
                cin>>value;
                arr[n++] = value;
                MinHeap(arr, n);
                break;
            }

            case 2:{
                if(n==0){
                    cout<<"Heap empty "<<endl;
                } else {
                   Delete(arr,n);
                }
                break;
            }
            case 3:{
                print(arr,n);
                break;
            }
            case 4:{
                return 0; 
            }
            default:
                cout<<"Invalid choice ";
        }
    }}