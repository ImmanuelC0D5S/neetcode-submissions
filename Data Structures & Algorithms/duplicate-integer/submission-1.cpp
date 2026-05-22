class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        int len = nums.size();
        for(int i = 0; i < len; i++)
        {
            for (int j = 0; j < i ; j++)
            {
                if(nums[i] == nums[j])
                {
                    return true;
                }
                else
                {
                    continue;
                }
            }
        }
        return false;

    }
};