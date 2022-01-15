https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1/#



void linkdelete(struct Node  *head, int M, int N)
    {
        Node*temp=head;
        
        int i=1,j;
        while(temp)
        {
            if(i==M)
            {
                j=0;
                Node*t=temp;
                t=t->next;
                while(j<N&&t)
                {
                    j++;
                    t=t->next;
                }
                temp->next=t;
                temp=temp->next;
                i=1;
            }
            else
            {
                i++;
                temp=temp->next;
            }
        }
        //Add code here   
    }
