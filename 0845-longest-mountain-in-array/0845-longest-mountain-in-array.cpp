class Solution {
public:
    int longestMountain(vector<int>& arr) {
     int ans =0; 
     int i =1;
     int n = arr.size();
     while( i< arr.size()-1){
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
            int left =i;
            int right =i ;
            while(left>0 && arr[left-1] < arr[left])
            left--;
            while(right<n-1 && arr[right] > arr[right+1])
            right++;
            ans = max(ans, right-left+1);
            i=right;
        }
            else i++;
     }
     return ans;
    }
};