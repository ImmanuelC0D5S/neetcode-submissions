class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
       vector<int> output; 
       for (int i = 0 ; i < prices.size() ; i++)
       {
        for(int j = i + 1 ; j < prices.size()  ; j++)
        {
            int buy = prices[i];
            int sell = prices[j];

            if ( sell > buy)
            {
                int profit = sell - buy;
                output.push_back(profit);
            }

            else
            {
                continue;
            }

        }

       }   

       if (output.empty())
       {
        return 0;
       }
       int max_val = * max_element(output.begin(),output.end());
       return max_val;
    }
};
