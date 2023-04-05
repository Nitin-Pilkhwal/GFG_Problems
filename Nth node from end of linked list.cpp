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


//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{       
        // Your code here
        struct Node* dummy=new Node(0);
        struct Node* slow,*fast;
        dummy->next=head;
        slow=fast=dummy;
        for(int i=1;i<=n;i++){
            if(!fast->next) return -1;
            fast=fast->next;
            
        }
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        return slow->next->data;
       
}