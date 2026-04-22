#include<iostream>
using namespace std;

class MaxHeap{
private:
	int *arr;
	int size;
	int total_size;
public:
	
	MaxHeap(int n){
		arr = new int[n];
		size = 0;
		total_size = n;
	}
	
	void insert(int value){
		if(size==total_size){
			cout<<"Heap is full: ";
			return;
		}
		arr[size] = value; // arr[0]=1, 
		int index = size;  // index = 0; then index = 1;  0,1,2,3 are size equal to index
		size++;
		
		while(index>0&&arr[(index-1)/2]<arr[index]){ // (index-1)/2 formula to find parent < current arr[index]
			swap(arr[index],arr[(index-1)/2]); // (4,114) to (114,4)
			index = (index-1)/2; // valur k sath idx bhi change hoga
		}
		cout<<arr[index]<<" is inserted "<<endl;
	}
	
	void Delete(){
		if(size==0){
			cout<<"Heap is Empty: "<<endl;
			return;
		}
		cout<<arr[0]<<" is deleted "<<endl;
		arr[0]=arr[size-1];
		size--;
				
		Heapify(0); // child node sa comparison if bara then replace	
	}
	
	void Heapify(int index){
		int largest = index; // store index greater btw idx left and right child
		int left  = 2*index+1;
		int right = 2*index+2;
		
		if(size>left && arr[left]>arr[largest]){
			largest = left;
		}
		if(size>right && arr[right]>arr[largest]){
			largest = right;
		}
		
		if(largest!=index){
			swap(arr[index], arr[largest]);
			Heapify(largest);
		}
	}
	
	void print(){
		for(int i=0; i<size; i++){
			cout<<arr[i]<<" ";
		}
	}
};

int main(){
	int n;
	cout<<"Enter the size: ";
 	cin>>n;
	MaxHeap max(n);
	int choice;
	while(true){
		cout<<"\n";
		cout<<"1. Insert"<<endl;
		cout<<"2. Delete"<<endl;
		cout<<"3. Print"<<endl;
		cout<<"4. Exit"<<endl;
		
		cout<<"Enter the choice: "<<endl;
		cin>>choice;
		switch(choice){
			case 1:{
				int value;
                cout<<"Enter value to insert: ";
                cin>>value;
                max.insert(value);
				break;
			}
			case 2:{
				max.Delete();
				break;
			}
			case 3:{
				max.print();
				break;
			}
			case 4:{
				return 0;
			}
			default:{
				cout<<"Invalid choice"<<endl;
				break;
			}	
		}
	}
}
