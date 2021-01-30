/*给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。

有效字符串需满足：

左括号必须用相同类型的右括号闭合。
左括号必须以正确的顺序闭合。
*/

/*哈希表
时间复杂度：O(N)
空间复杂度：O(N)
*/

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        if(n % 2 == 1) {
        return false;
        }
    
    unordered_map <char,char> pairs{
        {')', '('},
        {']', '['},
        {'}', '{'}
        };
    stack <char> stk;
    for(char c : s) {
        if(pairs.count(c)) {
            if(stk.empty() || stk.top() != pairs[c]){
            return false;
            }
            stk.pop();
        }
        else{
            stk.push(c);
            }

        }
        return stk.empty();


    }
};
