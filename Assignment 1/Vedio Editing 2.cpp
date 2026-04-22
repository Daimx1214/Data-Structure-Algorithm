#include<bits/stdc++.h>
using namespace std;

class VedioEditor{
private:
	stack<string>undo;
	stack<string>redo;
public:
	void Undo(){
		if(undo.empty()){	
		    cout<<"Nothing found: "<<endl;
		return;
	}
	string operate = undo.top();
	undo.pop();
	redo.push(operate);
	cout<<"Undo: "<<operate<<endl;     
    }  
    
	void Redo(){
		if(redo.empty()){	
		    cout<<"Nothing found: "<<endl;
		return;
	}
	string operate = redo.top();
	redo.pop();
	undo.push(operate);
	cout<<"Redo: "<<operate<<endl;     
    }   
    
    void Display(string action){
    	undo.push(action);
    	while(!redo.empty()){
    		redo.pop();
		}
		cout<<"Display: "<<action<<endl;
	}
};

int main(){
    VedioEditor editor;

    editor.Display("Cut clip");
    editor.Display("Add filter");
    editor.Display("Add text");
    editor.Display("Trim video");
    editor.Display("Add music");
    editor.Display("Export frame");

    editor.Undo();
    editor.Undo();
    editor.Undo();
    editor.Redo();
    editor.Redo();

    return 0;
}
