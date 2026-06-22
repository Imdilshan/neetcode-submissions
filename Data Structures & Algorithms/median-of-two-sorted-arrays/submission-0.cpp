class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m = nums1.size(), n = nums2.size();
        int i = 0, j = 0;

        vector<int> ans;
        while(i < m && j < n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i < m){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j < n){
            ans.push_back(nums2[j]);
            j++;
        }

        int l = 0, r = ans.size() - 1;
        int mid = l + (r-l) / 2;
        double value = 0;
        if(ans.size() % 2 == 1){
            value = ans[mid];
        }
        else{
            int mid1 = mid + 1;
            value = (ans[mid] + ans[mid1]) / 2.0;
        }

        return value;
    }
};
