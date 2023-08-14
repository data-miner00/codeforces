struct ListNode {
    int val;
    ListNode* next;
public:
    ListNode(int x) {
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode* next) {
        val = x;
        next = next;
    }
};

/**
 *    Author            : Shaun Chong 
 *    Created           : August 13, 2023 12:54 PM
 *    Problem Name      : 21. Merge Two Sorted Lists
 *    Problem Url       : https://leetcode.com/problems/merge-two-sorted-lists/
 *    Submission Url    : https://leetcode.com/problems/merge-two-sorted-lists/submissions/1019872255/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 7 ms (69.67% faster)
 *    Solution Space    : 14.78 MB (56.07% faster)
**/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newNodes = nullptr;

        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        if (list1->val < list2->val) {
            newNodes = list1;
            newNodes->next = mergeTwoLists(list1->next, list2);
        } else {
            newNodes = list2;
            newNodes->next = mergeTwoLists(list1, list2->next);
        }

        return newNodes;
    }
};

class FailedAttempt {
public:
    ListNode* mergeTwoLists_attempt(ListNode* list1, ListNode* list2) {
        ListNode* newNodes = nullptr;
        ListNode* head = nullptr;

        if (list1 == NULL && list2 != NULL) {
            return list2;
        }
        else if (list2 == NULL) {
            return list1;
        }

        ListNode* list1ptr = list1;
        ListNode* list2ptr = list2;

        if (list1->val > list2->val) {
            newNodes = list1;
            head = list1;
            newNodes->next = list2;
            newNodes = newNodes->next;
        }
        else {
            newNodes = list2;
            head = list2;
            newNodes->next = list1;
            newNodes = newNodes->next;
        }


		list1ptr = list1->next;
		list2ptr = list2->next;

        while (list1ptr != NULL && list2ptr != NULL && (list1ptr->next != NULL || list2ptr->next != NULL)) {
            if (list1ptr->val > list2ptr->val) {
                ListNode smaller(list2ptr->val);
                ListNode larger(list1ptr->val, &smaller);
                newNodes->next = &larger;
            }
            else {
                ListNode smaller(list1ptr->val);
                ListNode larger(list2ptr->val, &smaller);
                newNodes->next = &larger;
            }
            
            list1ptr = list1ptr->next;
            list2ptr = list2ptr->next;
			newNodes = newNodes->next;
        }

        if (list1ptr == NULL && list2ptr != NULL) {
            newNodes->next = list2ptr;
        }
        else {
            newNodes->next = list1ptr;
        }

        return head;
    }
};
