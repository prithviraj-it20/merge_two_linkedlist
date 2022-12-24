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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        typedef struct ListNode node;
        node* s=NULL;
        node* l=NULL;
        if(a==NULL) return b;
        if(b==NULL) return a;
        if(a->val < b->val){
            l=s=a;
            a=a->next;
        }
        else{
            l=s=b;
            b=b->next;
        }
        while(a!=NULL && b!=NULL){
            if(a->val < b->val){
                l->next=a;
                l=a;
                a=a->next;
            }
            else{
                l->next=b;
                l=b;
                b=b->next;
            }
        }
        if(a==NULL){
            l->next=b;
        }
        if(b==NULL){
            l->next=a;
        }
        return s;
    }
};
