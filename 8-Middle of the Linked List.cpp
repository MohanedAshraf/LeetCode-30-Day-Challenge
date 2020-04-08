/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
static int __=[](){std::ios::sync_with_stdio(false);return 1000;}();

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int c = 0;
        ListNode* mid = head;
        
        while(head != NULL){
            
            if(c%2 != 0)
            mid = mid->next;
            
            c++;
            head = head->next;
            
        }
        return mid;
    }
};