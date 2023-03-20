#include<bits/stdc++.h>
using namespace std;

int ladderLength(string beginWord, string endWord, vector<string> wordList) {
    unordered_set<string> s;
    queue<string> q;
    int ans = 0;
    q.push(beginWord);
    for(auto word : wordList) {
        s.insert(word);
    }
    
    while(!q.empty()) {
        int n = q.size();
        ans++;
        vector<string> tempWord;
        
        for(int i = 0; i < n; i++) {
            string f = q.front();
            if(f == endWord) {
                return ans;
            }
            
            for(int j = 0; j < f.size(); j++) {
                char ch = f[j];
                
                for(int k = 0; k < 26; k++) {
                    f[j] = char(97+k);
                    
                    if(s.find(f) != s.end()) {
                        tempWord.push_back(f);
                        s.erase(f);
                    }
                }
                
                f[j] = ch;
            }
            
            q.pop();
        }
        
        for(auto word : tempWord) {
            q.push(word);
        }
           
    }
    
    return 0;
}