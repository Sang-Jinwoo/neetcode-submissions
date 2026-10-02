class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n<=1)
            return n;
        // sort(nums.begin(),nums.end());
        // int prev = nums[0];
        // int res=1;
        // int currRes=1;
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]==prev+1)
        //     {
        //         currRes++;
        //         res= max(res,currRes);
        //         prev = nums[i];
        //     }
        //     else if(nums[i]!=prev)
        //     {
        //         res= max(res,currRes);
        //         prev = nums[i];
        //         currRes=1;
        //     }
            
        // }
        // return res;
        unordered_set<int> st;
        for(auto i:nums)
        {
            st.insert(i);
        }
        int res=1;
        for(auto i:nums){
            if(st.find(i-1)==st.end()){
                int currRes=1;
                int x = i+1;
                while(st.find(x)!=st.end()){
                    currRes++;
                    x++;
                }
                res = max(res,currRes);
            }
        }
        return res;
    }
};
