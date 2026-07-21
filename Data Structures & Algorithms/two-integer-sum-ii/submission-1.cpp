class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        unordered_map <int,int> mp;
        vector<int> result;

       for(int i=0 ; i<numbers.size() ; i++)
       {
        int need = target - numbers[i];

        if (mp.find(need) != mp.end())
        {
            return {mp[need]+1,i+1};
        }

        else
        {
            mp[numbers[i]] += i;
        }
       }
    }
};
