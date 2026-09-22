class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        set<int> s;
        int ele,count,len=0;

        for(auto it:nums){
            s.insert(it);
        }

        for(auto it:s){

            if(s.find(it-1) == s.end()){
                count = 1;
                ele = it;
                while(s.contains(ele+1)){
                    count++;
                    ele++;
                }
                len = max(count,len);
            }
        }

        return len;
        
    }
};
