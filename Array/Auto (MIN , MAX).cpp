//Exercise 1: Auto Keyword
//Write a program that uses auto to declare variables of different types and prints their values.
//#include<iostream>
//using namespace std;
//
//int main(){
//	auto Id = "0x179zg3ou12";
//	auto name = "Ali";
//	auto age = 20;
//	auto grade = 'A';
//	auto Gp = 3.80;
//	
//	cout<<"ID: "<<Id<<endl;
//	cout<<"Name: "<<name<<endl;
//	cout<<"Age: "<<age<<endl;
//	cout<<"Grade: "<<grade<<endl;
//	cout<<"GP: "<<Gp<<endl;
//	
//}

//Exercise 2: INT_MAX and INT_MIN
//Write a program that:
//Prints the maximum and minimum integer values
//Calculates and prints what happens when you add 1 to INT_MAX
//Calculates and prints what happens when you subtract 1 from INT_MIN
//#include<iostream>
//#include <climits>
//using namespace std;
//
//int main(){
//	cout<<"Before: "<<endl;
//	cout<<"Maximum Value: "<<INT_MAX<<endl;
//	cout<<"Minimum Value: "<<INT_MIN<<endl;
//	cout<<"After: "<<endl;
//	cout<<"Maximum Value: "<<INT_MAX + 1<<endl;
//	cout<<"Minimum Value: "<<INT_MIN - 1<<endl;
//	return 0;
//}

//Exercise 3: Data Type Sizes
//Write a program that prints the size (in bytes) of: int, long, long long, float, double, char.
//#include<iostream>
//using namespace std;
//
//int main(){
//	int a;
//	long b;
//	long long c;
//	float d;
//	double e;
//	char f;
//	
//	cout<<"int: "<<sizeof(a)<<endl<<"long: "<<sizeof(b)<<endl<<"long long: "<<sizeof(c)<<endl<<"float: "<<sizeof(d)<<endl<<"double: "<<sizeof(e)<<endl<<"char: "<<sizeof(f)<<endl;
//}


//Exercise 4: Exact Output Format
//Write a program that takes two integers and prints them in this exact format: Result: X, Y (no extra spaces).
//Input: 5 10
//Output: Result: 5, 10
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a,b;
//    cout<<"Enter value of a: ";
//    cin>>a;
//    cout<<"Enter value of b: ";
//    cin>>b;
//    cout<<"RESULT: "<<a<<", "<<b;
//}


//Exercise 5: Bitwise Operators
//Given two integers, print:
//Their AND (&)
//Their OR (|)
//Their XOR (^)
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int a,b;
//    cout<<"Enter value of a: ";
//    cin>>a;
//    cout<<"Enter value of b: ";
//    cin>>b;
//    
//    cout<<"AND: "<<(a&b)<<endl;
//    cout<<"OR: "<<(a|b)<<endl;
//    cout<<"XOR: "<<(a^b)<<endl;
//}

//Exercise 6: Ternary Operator
//Write a program that takes an integer and uses the ternary operator to print "Even" or "Odd".
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int x;
//    cout<<"Enter value of x: ";
//    cin>>x; 
//    string y = (x%2 == 0) ? "Even":"ODD";
//    cout<<y;
//}

//Exercise 7: Range-Based For Loop
//Given a string, use a range-based for loop to:
//Count the number of vowels (a, e, i, o, u)
//Print each character on a new line
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	string name;
//	cout<<"Enter name: ";
//	cin>>name;
//	int count = 0;
//	for(char i : name){
//		cout<<i<<endl;
//		
//		if(i =='a' || i=='e' || i == 'i' || i == 'o' || i == 'u' || i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U'){
//			count++;
//		}
//	}
//	cout<<"Total: "<<count<<endl;
//}




//Exercise 8: Break Statement
//Write a program that loops from 1 to 100 but breaks when it finds the first number divisible by both 7 and 13.
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"Enter the value of n: ";
//	cin>>n;
//	for(int i = 1; i <= n; i++){
//		if(i % 7 == 0 && i % 13 == 0){
//			break;
//		cout<<"Answer: "<<i<<endl;
//		}
//	}
//	return 0;
//}


//Exercise 9: Vector Operations
//Create a vector of integers, add 5 elements to it, and then:
//Print all elements
//Print the size
//Remove the last element
//Print elements again

//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//   vector<int>vec;
//   vec.push_back(1);
//   vec.push_back(2);
//   vec.push_back(3);
//   vec.push_back(4);
//   vec.push_back(5);
//   cout<<"Value: ";
//   for(int i : vec){
//        cout<<i<<" ";
//   }
//   cout<<endl;
//   cout<<"Size: "<<vec.size()<<endl;
//   vec.pop_back();
//   cout<<"After Last pop: ";
//   for(int i : vec){
//       cout<<vec[i]<<" ";
//   }
//
//}

//Exercise 10: String Manipulation
//Write a program that takes a string and:
//Reverses it using a loop
//Counts the length without using .length()

#include<bits/stdc++.h>
using namespace std;

int main(){
	string name;
	cout<<"Enter the name: ";
	cin>> name;
	int count = 0;
	cout<<"Reverse: ";
	for(int i = name.size()-1; i >= 0; i--){
		cout<<name[i];
		count++;
	}
	cout<<endl;
	cout<<"Total length: "<<count<<endl;
}



//Exercise 11: Pass by Value vs Reference
//Create two functions:
//incrementByValue(int x) - increments x
//incrementByReference(int &x) - increments x
//Call both with the same variable and observe the difference.
//#include <bits/stdc++.h>
//using namespace std;
//
//void incrementByValue(int x){
//    x++;
//}
//void incrementByReference(int &x){
//    x++;
//}
//int main(){
//    int x = 5;
//    incrementByValue(x);
//    cout<<x<<endl;
//    incrementByReference(x);
//    cout<<x<<endl;
//    
//}






