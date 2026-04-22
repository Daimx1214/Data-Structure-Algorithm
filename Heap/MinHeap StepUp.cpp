#include<iostream>
using namespace std;

class MinHeap{
private:
	int *arr;
	int size;
	int total_size;
public:
	
	MinHeap(int n){
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
		
		while(index>0&&arr[(index-1)/2]>arr[index]){ // (index-1)/2 formula to find parent > current arr[index]
			swap(arr[index],arr[(index-1)/2]); // (114,4) to (4,114)
			index = (index-1)/2; // value k sath idx bhi change hoga
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
		
		Heapify(0); // child node sa comparison if chota then replace	
	}
	
	void Heapify(int index){
		int smallest = index; // store index smallest btw idx left and right child
		int left  = 2*index+1;
		int right = 2*index+2;
		
		if(size>left && arr[left]<arr[smallest]){
			smallest = left;
		}
		if(size>right && arr[right]<arr[smallest]){
			smallest = right;
		}
		
		if(smallest!=index){
			swap(arr[index], arr[smallest]); // child sa swap wala kam small uper
			Heapify(smallest);
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
	MinHeap min(n);
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
                min.insert(value);
				break;
			}
			case 2:{
				min.Delete();
				break;
			}
			case 3:{
				min.print();
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