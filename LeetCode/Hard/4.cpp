class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() + nums2.size();
        int m = n / 2;
        int i1 = 0, i2 = 0;
        vector<int> aux;
        while(i1 + i2 <= m){
            if(i1 < nums1.size() && i2 < nums2.size()){
                if(nums1[i1] <= nums2[i2]){
                    aux.push_back(nums1[i1]);
                    i1++;
                }
                else {
                    
                    aux.push_back(nums2[i2]);
                    i2++;
                }
            }
            else if(i1 < nums1.size()){
                aux.push_back(nums1[i1]);i1++; 
            }
            else if(i2 < nums2.size())
            {    aux.push_back(nums2[i2]);i2++;
            }
        }
        
        double ans = aux[m];
        if(n % 2 == 0){
            ans += aux[m-1];
            ans /= 2;
        }
        return ans;
    }
};