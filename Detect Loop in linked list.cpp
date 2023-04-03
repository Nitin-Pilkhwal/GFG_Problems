#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;


struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL) return false;
        struct Node* slow,*fast;
        slow=head;
        fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            if(slow==fast) return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};