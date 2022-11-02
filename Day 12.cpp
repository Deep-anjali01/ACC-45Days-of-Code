

class Solution {
public:
    Node* copyRandomList(Node* head) 
    {
      if(not head) 
            return head;
        Node *temp = head, *ptr = head;
        while(ptr){
            temp = ptr->next;
            ptr->next = new Node(ptr->val);
            ptr->next->next = temp;
            ptr = temp;
        }

	ptr = head;
    while(ptr){
            ptr->next->random = (ptr->random)? ptr->random->next : nullptr;
            ptr = ptr->next->next;
        }
        Node *copyHead = head->next, *copyptr = head->next;
        while(head){
            head->next = head->next->next;
            copyptr->next = copyptr->next? copyptr->next->next : nullptr;
            head = head->next;
            copyptr = copyptr->next;
        }   
     return copyHead;   
    }
};