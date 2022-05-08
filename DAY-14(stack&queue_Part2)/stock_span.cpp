/* 
Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.

The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backward) for which the stock price was less than or equal to today's price.
*/

class StockSpanner {
public:
    stack<int> stk;
    vector<int> vec;
    int i=0;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        vec.push_back(price);
        int res;
        while(!stk.empty() && price>=vec[stk.top()]) stk.pop();
        
        res = stk.empty() ? (i+1) : (i-stk.top());
      
        stk.push(i++);
        return res;
    }
};
        
    
    
    
