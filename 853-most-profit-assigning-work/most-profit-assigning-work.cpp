class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
     int maxProfit;
     int sumProfit = 0;

     for(int i=0;i<worker.size();i++)
     { maxProfit=0;
        for(int j=0;j<difficulty.size();j++)
        {
            if(difficulty[j]<=worker[i])
            {
                maxProfit = max(maxProfit,profit[j]);
            }
        }
        sumProfit += maxProfit;
     }
     return sumProfit;

    }
};