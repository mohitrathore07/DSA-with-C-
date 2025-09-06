
/*

leetcode 237

class Solution {
public:
    void deleteNode(ListNode* target) {
       target->val = target->next->val;
       target->next = target->next->next;
       return; 
    }
};

*/

/*

leetcode 876
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            temp = temp->next;
            len++; 
        }
        ListNode* mid = head;
        int mididx = len/2;
        for(int i = 1; i <= mididx; i++) {
            mid = mid->next; 
        }
        return mid;
    }
};
*/

/*
876 simplified
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode* slow = head;
      ListNode* fast = head;

      while(fast != NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
      }
      return slow;
    }
};
*/