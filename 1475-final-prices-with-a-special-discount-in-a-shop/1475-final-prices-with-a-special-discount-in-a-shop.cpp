class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;int n=prices.size();
        for(int i=0;i<n;i++)
        {   int k=0;
            for(int j=i+1;j<n;j++){
            if(prices[i]>=prices[j]){
            v.push_back(prices[i]-prices[j]);k=1;break;
            }
            }
           if(k==0)
            v.push_back(prices[i]);
            
        }
        return v;
    }
};