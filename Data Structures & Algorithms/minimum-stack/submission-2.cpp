
class MinStack {
    //design a class that supports these operations
    vector<int> min_tracker;
    vector<int> normal_stack;

public:
    
    MinStack() {

        
    }
    
    void push(int val) {
        normal_stack.push_back(val);
        if (!min_tracker.empty() && val > min_tracker.back()) {
            min_tracker.push_back(min_tracker.back());
        }
        else {
            min_tracker.push_back(val);
        }

        
    }
    
    void pop() {
        normal_stack.pop_back();
        min_tracker.pop_back();
        
    }
    
    int top() {
        return normal_stack.back();
        
    }
    
    int getMin() {
        return min_tracker.back();
        
    }
};

