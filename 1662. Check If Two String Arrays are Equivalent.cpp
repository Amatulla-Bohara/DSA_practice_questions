class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string full1="";
        string full2="";
        
        for(int i=0; i<word1.size(); i++){
            full1 = full1.append(word1[i]);
        }
        for(int i=0; i<word2.size(); i++){
            full2 = full2.append(word2[i]);
        }
        return full1==full2;
    }
};

/*
Example 1:
Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.

Example 2:
Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false

Example 3:
Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
*/
