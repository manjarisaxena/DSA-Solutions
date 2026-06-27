class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>ans;
        for(int i =0;i<n;i++)
        {
            int need=target-nums[i];
           if(ans.count(need)==1){
            return{i,ans[need]};
           }
           ans[nums[i]] = i;
        }
         return {};
    }
};