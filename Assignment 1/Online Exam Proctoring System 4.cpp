#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class ExamSystem{
private:
	queue<string>farward;
	vector<string>suspected;
public:
	
void Entery(string name){
	farward.push(name);
	cout<<"Enter Student: "<<name<<endl;
}
    
void verify(){
	if(farward.empty()){
		cout<<"Empty: "<<endl;
		return;
	}
	cout<<"Verified: "<<farward.front()<<endl;
	farward.pop();
}

void Suspect(string name){
	suspected.push_back(name);
	cout<<"Suspected: "<<name<<endl;
}

void showSuspected(){
        for(string s : suspected)
            cout<<"Suspected till: "<<s<<endl;
    }
};
int main() {
    ExamSystem exam;

    exam.Entery("Ali");
    exam.Entery("Ahmed");
    exam.Entery("Sara");
    exam.verify();   
    exam.Suspect("Ahmed");
    exam.verify();   
    exam.verify();  
    exam.showSuspected();

}
