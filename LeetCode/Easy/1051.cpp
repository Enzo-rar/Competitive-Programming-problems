class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> aux;
        for (int i=0; i < heights.size(); i++)  
        aux.push_back(heights[i]); 
        int ans = 0;
        sort(aux.begin(),aux.end());
        for(int i = 0; i < aux.size(); i++){
            if(aux[i] != heights[i]) ans++;
        } 
        return ans;
    }
};