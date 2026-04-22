//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	vector<int>vec(3 , 0);
//		for(int i = 0; i < vec.size(); i++){
//		cout<<vec[i]<<" ";
//	}
//  return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	vector<int>vec = {1 ,2, 4,5 ,6, 7 };
//	
//	for(int i = 0; i < vec.size(); i++){
//		cout << "At index " << i << " value stored is " << vec[i] << endl;
//	}
//	return 0;
//}




//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	vector<int>vec = {1 ,2, 4,5 ,6, 7 };
//	
//	for(int i : vec){
//		cout<<vec[i];
//	}
//  return 0;
//}




//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	vector<int>vec = {1,2,4,5,6,7};
//
//    vec.push_back(3);
//    vec.push_back(9);
//    
//    cout<<"Pushback Element: "<<vec.back()<<endl;
//    
//    cout<<"Full Vector: ";
//    for(int i = 0; i < vec.size(); i++){
//        cout<<vec[i]<<" ";
//	}
//    return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main(){
//	vector<int>vec = {10,20,30,40,50};
//	
//    cout<<"Popback Element: "<<vec.back()<<endl;
//    vec.pop_back();
//      
//    cout<<"Full Vector: ";
//    for(int i = 0; i < vec.size(); i++){
//        cout<<vec[i]<<" ";
//	}
//    return 0;
//}




#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>vec = {10,20,30,40,50,60};
	
	cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;  // look notes end lines (Diff btw cap and size)
    
    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;
    cout<<vec.at(2)<<endl;
    
    return 0;
}
    

