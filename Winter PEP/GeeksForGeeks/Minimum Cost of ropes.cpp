class Solution {
public:
    int minCost(vector<int>& arr) {
        if(arr.size() <= 1) return 0;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        int res = 0;
        
        for(int i : arr) pq.push(i);
        
        while(pq.size() >= 2) {
            int a = pq.top();
            pq.pop();
            
            int b = pq.top();
            pq.pop();
           
            res += a + b;
            pq.push(a + b);
        }
        
        return res;
    }
};
