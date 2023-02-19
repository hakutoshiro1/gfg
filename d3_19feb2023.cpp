#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector <int> v;
    void inorder(struct Node *p)
    {
        if(!p)return ;
        inorder(p->left);
        v.push_back(p->data);
        inorder(p->right);
        return ;
    }
    void inorder(struct Node *p,int &i)
    {
        if(!p)return ;
        inorder(p->left,i);
        // cout<<p->data<<" ooo "<<i<<" "<<v[i]<<endl;
        p->data=v[i];
        i++;
        // cout<<p->data<<" "<<i<<" "<<v[i]<<endl;
        inorder(p->right,i);
        return ;
    }
    struct Node *correctBST(struct Node *root) {
        inorder (root);
        sort(v.begin(),v.end());
        int i=0;
        inorder(root,i);
        return root;
    }
};