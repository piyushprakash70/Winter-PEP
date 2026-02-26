class StockSpanner {
public:
    vector<int>stocks;
    StockSpanner() {
        
    }
    
    int next(int price) {
         int c=1;
         for(int i=stocks.size()-1;i>=0;i--)
         {
            if(stocks[i]>price) break;
            else c++;
         }
         stocks.push_back(price);
         return c;

        
    }
};
