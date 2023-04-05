#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

class Solution{
  public:
    //Function to check whether the list is palindrome.
    struct Node* reverse(struct Node* curr){
        struct Node *prev,*nex;
        prev=NULL;
        nex=NULL;
        while(curr){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(!head || !head->next) return true;
        
        struct Node *slow,*fast;
        slow = head;
        fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        while(slow){
            if(slow->data!=head->data) return false;
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};