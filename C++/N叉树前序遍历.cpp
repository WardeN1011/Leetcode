//递归


class Solution {
public:
    vector<int> res;
    vector<int> preorder(Node* root) {
        if(!root)   return res;
        res.emplace_back(root -> val);
        for(auto i : root -> children){
            preorder(i);
        }
        
        return res;
    }
};
