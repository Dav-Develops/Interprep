class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char ch: s){
            if(ch == '(' || ch == '{' || ch == '['){
            stk.push(ch); //stack has only the opening brackets, will be used to compare with closing brackets (ch).
            }
            else{
            //check if the stack is still empty, means first entry is closing bracket.
            if(stk.empty()){return false;}
            char top = stk.top();
            stk.pop();
                if(top == '(' && ch != ')' || top == '{' && ch != '}' || top == '[' && ch != ']'){
                    return false;
                    }

            }
        }
        return stk.empty();
        
    }
};
