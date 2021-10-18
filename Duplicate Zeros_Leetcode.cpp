class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int arr2[n];
        int i=0;
        int j=0;
        while(j<n){
            
            if(arr[i]==0){
                arr2[j]=0;
                if(j+1<n){
                    arr2[j+1]=0;
                }
                j=j+2;
            }
            else{
                arr2[j]=arr[i];
                j++;
            }
            i++;
        }
        for(int i=0; i<n; i++){
            arr[i]=arr2[i];
        }
    }
};






/* Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]


Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3] */
