/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr)
        return head;
        ListNode* temp1=head;
        int a=0;
        while(temp1!=nullptr)
        {
            a++;
            temp1=temp1->next;
        }
        int k=a-n;
        if(a==n)
        {
            return head->next;
        }
        ListNode*temp2=head;
        while(k>1)
        {
            temp2=temp2->next;
            k--;
        }
        temp2->next=temp2->next->next;
        return head;
        
    }
};