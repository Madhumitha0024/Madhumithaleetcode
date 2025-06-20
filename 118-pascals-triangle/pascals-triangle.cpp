class Solution {
public:
    vector<int> generateRow(int n){
        long long ans = 1;
        vector<int> res;
        res.push_back(1);
        for(int i = 1 ; i < n ; i++){
            ans = (ans * ( n - i) ) / i ;
            res.push_back(ans); 
        }
        return res;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans ;
        for(int i = 1 ; i <= numRows ; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};