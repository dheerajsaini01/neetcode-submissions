class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            int ans = target - nums[i];

            if(mpp.find(ans)!= mpp.end()){
                return {mpp[ans], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
