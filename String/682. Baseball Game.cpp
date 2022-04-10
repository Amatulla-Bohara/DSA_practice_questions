class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        vector<int> scores;
        int size=0;
       
        for(auto i:ops){
            if(i=="+"){
                scores.push_back(scores[size-1]+scores[size-2]);
                size++;
             }
            
            else if(i=="D"){
                scores.push_back(2*scores[size-1]);
                size++;
            }
            
            else if(i=="C"){
                size--;
                scores.pop_back();
            }
            
            else{
                 size++;
                scores.push_back(stoi(i));
             }
         }
        int sum=0;
            for(int i=0; i<size;i++){
                sum =sum + scores[i];
            }
        return sum;
    }
};



/*
Example 1:

Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
Example 2:

Input: ops = ["5","-2","4","C","D","9","+","+"]
Output: 27
Explanation:
"5" - Add 5 to the record, record is now [5].
"-2" - Add -2 to the record, record is now [5, -2].
"4" - Add 4 to the record, record is now [5, -2, 4].
"C" - Invalidate and remove the previous score, record is now [5, -2].
"D" - Add 2 * -2 = -4 to the record, record is now [5, -2, -4].
"9" - Add 9 to the record, record is now [5, -2, -4, 9].
"+" - Add -4 + 9 = 5 to the record, record is now [5, -2, -4, 9, 5].
"+" - Add 9 + 5 = 14 to the record, record is now [5, -2, -4, 9, 5, 14].
The total sum is 5 + -2 + -4 + 9 + 5 + 14 = 27.
Example 3:

Input: ops = ["1"]
Output: 1
*/
