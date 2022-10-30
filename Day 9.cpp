class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        vector<vector<int>> sol;

        for(int i=1;i<n;i++)

            if( A[i]- A[i-1] > 0)

                sol.push_back({i-1, i});

        return sol;

 
    }
};