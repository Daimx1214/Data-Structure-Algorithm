#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        
        int first=0, ans=0, maxfreq=0;
        for(int second=0; second<s.length(); second++){
            freq[s[second]-'A']++;
            maxfreq = max(maxfreq , freq[s[second]-'A']);

            while(second-first+1 - maxfreq > k){
                freq[s[first]-'A']--;
                first++;
            }
            ans = max(ans , second-first+1);
        }
        return ans;
    }
};
int main() {
    Solution sln;
    string str = "AABABBA";
    int k = 1;

    cout << sln.characterReplacement(str, k);
    return 0;
}