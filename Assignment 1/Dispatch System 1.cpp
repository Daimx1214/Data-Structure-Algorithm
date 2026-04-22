#include<iostream>
#include<queue>
using namespace std;

class DispatchSystem{
private:
	queue<string>High;
	queue<string>Low;
public:
	void highPriority(string call){
		High.push(call);
	}
	void LowPriority(string call){
		Low.push(call);
	}
	
	void Dispatch(){
		if(!High.empty()){
			cout<<"High priority: "<<High.front()<<endl;
			High.pop();
		}
		else if(!Low.empty()){
			cout<<"Low priority: "<<Low.front()<<endl;
			Low.pop();
		}
		else{
			cout<<"All Done: ";
		}
	}
};

int main(){
    DispatchSystem dis;

    dis.highPriority("Noise complaint");
    dis.LowPriority("Lost phone");
    dis.highPriority("Heart attack");
    dis.LowPriority("Traffic issue");

    dis.Dispatch(); 
    dis.Dispatch(); 
    dis.Dispatch(); 
}
