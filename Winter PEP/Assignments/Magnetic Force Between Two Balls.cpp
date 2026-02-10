class Solution {
public:
    bool canPlace(vector<int>& position, int m, int dist) {
        int c = 1;                
        int last = position[0];

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last >= dist) {
                c++;
                last = position[i];
                if (c == m)
                    return true;
            }
        }
        return false;
    } 

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int l = 1;
        int h = position.back() - position.front();
        int r = 0;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (canPlace(position, m, mid)) {
                r = mid;
                l = mid + 1;    
            } else {
                h = mid - 1;   
            }
        }
        return r;
    }
};
