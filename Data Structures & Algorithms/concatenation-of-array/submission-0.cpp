class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
       vector<int> copy;

       for (int i : nums)
       {
        copy.push_back(i);
       }   

        for(int i : copy)
        {
        nums.push_back(i);
        }
       
       return nums;
    }
};