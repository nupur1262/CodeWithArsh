https://practice.geeksforgeeks.org/problems/transform-to-sum-tree/1/#



int sum(Node*node)
    {
        if(!node)
            return 0;
        
        int l=0,r=0;
        
        if(node->left)
            l=sum(node->left);
        if(node->right)
            r=sum(node->right);
            
        int temp=node->data;
        node->data=l+r;
        return temp+node->data;
    }
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    void toSumTree(Node *node)
    {
        sum(node);
        // Your code here
    }
