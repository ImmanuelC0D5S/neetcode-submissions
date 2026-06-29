class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
     int length = nums.size();
     
     unordered_map <int,int> count;
     
     for(int num : nums)
     {
        count[num]++;
     }
     
     vector <pair<int,int>> temp(count.begin(),count.end());

     for (int i=0 ; i < temp.size() ; i++)
     {
        for (int j=0 ; j < i ; j++)
        {
            if(temp[i].second > temp[j].second)
            {
                swap(temp[i],temp[j]);
            }
        }
     }
     vector <int> ans;
     while (k != 0)
     {

        ans.push_back(temp[k-1].first);
        k--;
     }

     return ans;

       
    }
};
 



