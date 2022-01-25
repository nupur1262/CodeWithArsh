https://practice.geeksforgeeks.org/problems/connect-nodes-at-same-level/1/



void connect(Node *root)
    {
        queue<Node*>q;
        q.push(root);
        if(!root)
            return;
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                Node*temp=q.front();
                q.pop();
                if(s==0)
                {
                    temp->nextRight=NULL;
                }
                else
                {
                    temp->nextRight=q.front();
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
       // Your Code Here
    }
