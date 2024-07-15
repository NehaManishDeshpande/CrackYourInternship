class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while(i < n)
        {
            int cidx = arr[i];
            if(arr[cidx] == arr[i])
            {
                return arr[i];
            }
            else
            {
                swap(arr[cidx], arr[i]);
            }
        }

        return 100;
    }
};