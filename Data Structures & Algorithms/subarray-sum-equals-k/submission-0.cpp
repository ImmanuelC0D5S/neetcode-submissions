class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
     int n = nums.size();
     
     vector <int> prefix(n+1,0);

     if (nums.size() == 1)
     {
        if (nums[0] == k)
        {
            return 1;
        }
        else
        {
            return 0;
        }
     } 
     
     for (int i = 0 ; i < n ; i++)
     {
        prefix[i + 1] = prefix[i] + nums[i];
     }   

     for (int i = 0; i < prefix.size() ; i++ )
     {
        cout<<prefix[i] <<"\n";
     }

     int count = 0;

     for (int i = 0 ; i < prefix.size() ; i++)
     {
        for(int j = i + 1 ; j < prefix.size() ; j++)
        {
           if((prefix[j] - prefix[i]) == k ) 
           {
            count++;
           }
        }
     }

     return count;


    }
};