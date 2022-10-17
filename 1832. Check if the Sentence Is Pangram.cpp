class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(int i=0; i<26; i++){
            char ch = i + 'a';
            if(sentence.find(ch)==string::npos){
                return false;
            }
        }
        return true;
    }
};

/*
optimised opproach

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st (sentence.begin(), sentence.end());
            return st.size()==26;
        
    }
};
*/


/*
Testcase 

Example 1:
Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.

Example 2:
Input: sentence = "leetcode"
Output: false
*/
