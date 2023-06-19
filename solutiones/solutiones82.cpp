class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bp=INT_MAX,mxp=0;
        for(int i=0;i<n;i++)
        {
            bp=min(bp,prices[i]);
            mxp=max(mxp,prices[i]-bp);
        }
        return mxp;

    }
};