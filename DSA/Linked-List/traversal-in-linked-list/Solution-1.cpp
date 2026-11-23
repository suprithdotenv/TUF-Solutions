#include<iostream>
#include<vector>


using namespace std;

class Node
{
    public:
    int data;
    Node *next;


    Node(int value)
    {
        data = value;
        next = NULL;
    }
};



Node* createLinkedList(int arr[],int size)
{
    Node* head = NULL;
    Node *tail = NULL;


    for(int i=0;i<size;i++)
        {
            Node *temp = new Node(arr[i]);

            if(head ==NULL)
            {
                head = tail = temp;
            }

            else{
                tail -> next = temp;
                tail = temp;
            }
        }


    return head;
}




class Solution
{
public:
    vector<int> LLTraversal(ListNode* head)
    {
        vector<int> ans;
        ListNode* temp  = head;
    
    
        while(temp!=NULL)
            {
                ans.push_back(temp->data);
                temp = temp->next;
      
            }
    
        return ans;
    }

};


