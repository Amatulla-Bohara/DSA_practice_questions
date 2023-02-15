class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0;
        int m=num.size()-1;

        while(m>=0){
            int sum = num[m] + (k%10) + carry;
            num[m--] = sum%10;
            k=k/10;
            carry = sum/10;
        }
        while(k>0){
            int sum = k%10 + carry;
            num.insert(num.begin(), sum%10);
            carry = sum/10;
            k=k/10;
        }
        if(carry>0){
            num.insert(num.begin(), carry);
        }
        return num;
    }
};
