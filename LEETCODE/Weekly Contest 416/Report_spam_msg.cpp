#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isMatched(string word , unordered_set<string>& bannedSet) {
        return bannedSet.find(word) != bannedSet.end();
    }

    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
       unordered_set<string> bannedSet(bannedWords.begin(), bannedWords.end());
      int matchedWords = 0;

      for (int i = 0; i < message.size(); i++) {
            string word = message[i];

            if (isMatched(word, bannedSet)) {
                matchedWords++;
            }
            if (matchedWords >= 2) {
                return true; 
            }
        }
        return false; 
    }
};



int main()
{

  return 0;
}