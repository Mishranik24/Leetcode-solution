class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans = 0;
        int n = nums.size();
        vector<int> leftMax(n);
        vector<int> rightMax(n);

        stack<int> st;

        for (int i = 0; i < n-1; i++) {

            while (!st.empty() && nums[i] > nums[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                st.push(i);  
                leftMax[i+1] = nums[i];
            } else {
                leftMax[i+1] = nums[st.top()];
            }                
            
        }
        while(!st.empty()){
            st.pop();
        }

        for (int i = n - 1; i > 0; i--) {

            while (!st.empty() && nums[i] > nums[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                st.push(i);   
                rightMax[i-1] = nums[i];
            } else {
                rightMax[i-1] = nums[st.top()];
            }              
            
        }

        for (int i = 1; i < n-1; i++) {
            long long sub = (leftMax[i] - nums[i]); 
            long long multi = sub * rightMax[i];
            ans = max(ans,multi);
        }

        return ans;
    }
};