class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> output;                


        for (int i = 0; i < nums.size(); i++)
        {

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                int current_sum = nums[left] + nums[right] + nums[i];
                if (current_sum == 0)
                {
                    output.push_back({nums[left],nums[right],nums[i]});
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;

                    left++;
                    right--;
                }

                else if (current_sum < 0)
                {
                    left++;
                }

                else
                {
                    right--;
                }
            }

        }
            sort(output.begin(),output.end());

            auto it = unique(output.begin(),output.end());
            output.erase(it,output.end());
            return output;
        
    }
};
