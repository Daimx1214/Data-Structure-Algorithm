//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    queue<char>q;   
//    vector<int>freq(26, 0);  // 26 char hota ha or sab k count staring ma 0
//
//    string ans ="aabcb";
//    int i = 0;	
//
//    while(i<ans.size()){
//        char ch = ans[i];  
//        freq[ch-'a']++;     //  jaisa chaa = b - a hoa to index b k 1 ha use ++ kr k next char pa point kro
//        q.push(ch);
//
//        while (!q.empty() && freq[q.front()-'a']>1){ // same char repeat untill count > 1
//            q.pop();
//        }
//		      
//        if(q.empty()){
//            cout<<"# ";
//        }
//		else{
//            cout<<q.front() << " ";
//        }
//        i++;
//    }
//    return 0;
//}


#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string firstNonRepeating(string &s) {
        
        queue<char> q;   
        vector<int> freq(26, 0);
        string ans = "";

        for(char ch : s){     
            freq[ch - 'a']++;   
            q.push(ch);         
            
            while(!q.empty() && freq[q.front() - 'a'] > 1){
                q.pop();
            }
            
            if(q.empty()){
                ans += '#';
            } else {
                ans += q.front();
            }
        }
        return ans;
    }
};
