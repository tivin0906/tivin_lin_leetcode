/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) 
{
    if(head == NULL)
        return head;
        
    struct ListNode *tmp, *first;
    
    first = head;
    tmp = head->next;
    
    while(head->next != NULL)
    {
        if(tmp->val == head->val)
        {
            head->next = tmp->next;
            
            if(tmp->next == NULL)
                break;
            else
                tmp = tmp->next;
        }
        else
            head = head->next;
    }
    return first;
}