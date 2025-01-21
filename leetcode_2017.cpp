class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n= grid[0].size();
        vector<long long>suffixTop(n,0),suffixBottom(n,0);
        suffixTop[n-1]=grid[0][n-1];
        suffixBottom[n-1]=grid[1][n-1];

        for (int i=n-2;i>=0;i--){
            suffixTop[i]=grid[0][i]+suffixTop[i+1];
            suffixBottom[i]=grid[1][i]+suffixBottom[i+1];
        }
        long long result=LLONG_MAX;
        //if taken turn at a particular column.
        for (int c=0;c<n;c++){

            long long topRemaining = (c + 1 < n) ? suffixTop[c + 1] : 0; // Points left in the top row after column c
            long long bottomRemaining = (c > 0) ? suffixBottom[0] - suffixBottom[c] : 0; // Points left in the bottom row before column c

            long long maxscore=max(topRemaining,bottomRemaining);//second robot both rows me so max points lene wala path chunega.

            result=min(result,maxscore);//min bc first robot will choose the path that gives maximum points so second robot ko jo mila wo lena padegs i.e kam lena padega.
        }
        return result;
        
        
    }
};
