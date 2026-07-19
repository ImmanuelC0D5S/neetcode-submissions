class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.empty()) return 0;
        int count = 0;
        vector<int> seq;
        sort(nums.begin(),nums.end());
        for (int i=0 ; i < nums.size() - 1 ; i++)
        {
            if (nums[i] == nums[i+1])
            {
                continue;
            }
            else if (nums[i]+1 == nums[i+1])
            {
                count++;
            }
            else
            {
                seq.push_back(count);
                count = 0;
            }
        }    

        seq.push_back(count);

        auto max_it = max_element(seq.begin(),seq.end());
        int ans = *max_it + 1;
        return ans;
    }
};
