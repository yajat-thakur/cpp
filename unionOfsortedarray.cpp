class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;  
        
        for(int x : nums1) {
            s.insert(x);
        }
       
        for(int x : nums2) {
            s.insert(x);
        }
        vector<int> result(s.begin(), s.end());
        return result;
    }
};
