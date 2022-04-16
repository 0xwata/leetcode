class Solution {
public:
    bool isValid(string s) {
        std::map<char, char> m;
        m.insert(std::make_pair('(', ')'));
        m.insert(std::make_pair('[', ']'));
        m.insert(std::make_pair('{', '}'));
        
        std::vector<char> stack;
        char stack_end = '\0';
        bool is_error = false;
        bool result = true;
        for ( char c : s){
            if(m.count(c) != 0){ // charが辞書のkeyに一致する
                stack.push_back(c); 
            } else { // charが辞書のkeyに一致しない(=> charが辞書のvalueに相当する)
                
                // stackが空の時
                if(stack.empty()) {
                    is_error = true; 
                    break;
                }
                
                stack_end = m[stack.back()]; 
                
                // スタックの末尾と対象のcharが一致しない時
                if(stack_end != c){
                    is_error = true; 
                    break;
                }
                stack.pop_back();
            }
        }
        
        if( !stack.empty() ) result = false;
        
        if(is_error)  result = false;
        
        return result;
    };
};
