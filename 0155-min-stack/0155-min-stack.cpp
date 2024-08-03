#include <stack>
#include <algorithm>
#include <limits.h>

class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> minStack;

public:
    MinStack() {
        // Initialize the stack and minStack as empty stacks
    }

    void push(int val) {
        stack.push(val);
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }

    void pop() {
        if (stack.top() == minStack.top()) {
            minStack.pop();
        }
        stack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return minStack.top();
    }
};
