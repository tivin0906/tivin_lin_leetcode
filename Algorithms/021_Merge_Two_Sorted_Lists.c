/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) 
{
	if(l1 == NULL)
		return l2;
	if(l2 == NULL)
		return l1;
	
	struct ListNode *first, *ret;
	
	if( l1->val > l2->val )
	{   
	    first = l2;
	    l2 = l2->next;
	}
	else
	{
	    first = l1;
	    l1 = l1->next;
	}
	
	ret = first;
	
	while(l1 != NULL && l2 != NULL)
	{
		if(l1->val > l2->val)
		{
			ret->next = l2;
			l2 = l2->next;
		}
		else
		{
			ret->next = l1;
			l1 = l1->next; 
		}
		ret = ret->next;
	}
	
	ret->next = (l1 == NULL) ? l2 : l1 ;

	return first;
}