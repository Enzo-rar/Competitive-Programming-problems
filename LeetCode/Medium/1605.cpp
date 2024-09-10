class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> ans;
        for(int i = 0; i < rowSum.size(); i++){
            vector<int> aux;
            for(int j = 0; j < colSum.size(); j++){
                if(rowSum[i] > colSum[j]){
                    aux.push_back(colSum[j]);
                    rowSum[i] -= colSum[j];
                    colSum[j] = 0;
                }
                else{
                    aux.push_back(rowSum[i]);
                    colSum[j] -= rowSum[i];
                    rowSum[i] = 0;
                }
            }
            ans.push_back(aux);
        }
        return ans;
    }
};