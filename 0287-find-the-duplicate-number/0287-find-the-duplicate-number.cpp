class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int res = 0;
        for(int i = 0; i < n - 1; i++)
        {
                if(arr[i] == arr[i + 1])
                {
                    res = arr[i];
                    return res;
                }
        }
        return 0;
    }
};