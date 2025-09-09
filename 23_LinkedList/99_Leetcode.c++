
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

/*
160

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0, l2 = 0;
        ListNode* temp = headA;
        while(temp!=NULL) {
            temp = temp->next;
            l1++;
        }
        temp = headB;
        while(temp!=NULL) {
            temp = temp->next;
            l2++;
        }
         
        if(l1 > l2) {
            int diff = abs(l1 - l2); 
            for(int i = 1; i <= diff; i++) {
                headA = headA->next;
            }
        }
        else {
            if(l2 > l1) {
                int diff = abs(l1 - l2); 
                for(int i = 1; i <= diff; i++) {
                    headB = headB->next;
                }
            }
        }
        while(headA!=NULL && headB!=NULL) {
            if(headA == headB) return headA;
            if(headA->next == headB->next) {
                return headA->next;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};
*/

/*
160 cleaner version 



class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1 = 0, l2 = 0;
        ListNode* temp = headA;
        while(temp!=NULL) {
            temp = temp->next;
            l1++;
        }
        temp = headB;
        while(temp!=NULL) {
            temp = temp->next;
            l2++;
        }
         
        if(l1 > l2) {
            int diff = abs(l1 - l2); 
            for(int i = 1; i <= diff; i++) {
                headA = headA->next;
            }
            while(headA!=NULL && headB!=NULL) {
                if(headA == headB) return headA;
                if(headA->next == headB->next) {
                    return headA->next;
                }
                headA = headA->next;
                headB = headB->next;
            }
        }
        else {
                int diff = abs(l1 - l2); 
                for(int i = 1; i <= diff; i++) {
                    headB = headB->next;
                }
                while(headA!=NULL && headB!=NULL) {
                    if(headA == headB) return headA;
                    if(headA->next == headB->next) {
                        return headA->next;
                    }
                    headA = headA->next;
                    headB = headB->next;
                }
            }       
        return NULL;
    }
};
*/

/*
141

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        }   
        return false;
    }
};

*/