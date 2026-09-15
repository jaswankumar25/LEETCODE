/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head)
{
        int n=0;
        struct ListNode *temp=head;
        while(temp != NULL)
        {
        n++;
        temp = temp->next;
        }
        int *stack = malloc(n * sizeof(int));
        int top = -1;
        temp=head;
        while(temp!=NULL)
        {   
            stack[++top]=temp->val;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL)
        {
            if(temp->val!=stack[top])
            {
                free(stack);
                return false;
            }
            top--;
            temp=temp->next;
        }
        free(stack);
        return true;
        
    
}