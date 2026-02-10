class Solution {
  public:
    int minSwap(vector<int>& arr, int k) {
        int n = arr.size();
        int x = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= k)
                x++;
        }
        int z = 0;
        for (int i = 0; i < x; i++) {
            if (arr[i] > k)
                z++;
        }

        int r = z;
        for (int i = 0, j = x; j < n; i++, j++) {
            if (arr[i] > k)
                z--;
            if (arr[j] > k)
                z++;

            r = min(r, z);
        }

        return r;
    }
};
