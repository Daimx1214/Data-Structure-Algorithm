//Aap ek Library Issue System bana rahe ho.
//Jis mein student ek ek karke books issue karta hai.
//Aapko vector use karte huay:

//Book add karni hain
//Book remove karni hain
//Sab issued books dikhani hain

#include<iostream>
#include<vector>
using namespace std;

	vector<string>vec;
	
	void addBook(){
		string n;
		cout<<"Enter the book name to Push: "<<endl;
		cin>>n;
		vec.push_back(n);
		cout << "Book Added Successfully "<<endl;
	}
	
	void removeBook(){
		string n;
		cout<<"Enter the book name to POP: "<<endl;
		cin>>n;
		
	    bool found = false;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == n) {
            vec.erase(vec.begin() + i);
            cout << "Book Removed Successfully\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book NOT Found\n";
    }
    }

	void Issue(){
		
		for( string i : vec){
			cout<<"Books Shown: "<< i <<endl;
		}
	}

int main(){
	
    int choice;
    while (true) {
        cout << "\n1. Add Book\n2. Remove Book\n3. Show Issued Books\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
            	addBook(); 
				break;
			}
            case 2: {
            	removeBook(); 
				break;
			}
            case 3:{
            	Issue();
				break;
			}
            case 4: {
            	return 0;
			}
            default:{
            	cout << "Invalid Choice!\n";
			} 
        }
    }
}


