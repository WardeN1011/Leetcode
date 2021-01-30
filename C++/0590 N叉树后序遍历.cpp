//递归

class Solution {
public:
    vector<int> res;
    vector<int> postorder(Node* root) {
        if(!root)   return res;
        for(auto i : root -> children){
            postorder(i);
        }
        res.emplace_back(root -> val);
        return res;
    }
};
