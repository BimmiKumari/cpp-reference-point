class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
 ListNode* temp=head;
 for(int i=0;i<k;i++){
        if(temp==NULL)
        {
            return head;
        }
        temp=temp->next;
    }
       ListNode* cur=head;
       ListNode* next=NULL;
       ListNode* prev=NULL;
       int count=0;
       
       while(cur!=NULL&&count!=k)
       {
           next=cur->next;
           cur->next=prev;
           prev=cur;
           cur=next;
           count++;
       }
       
      if(next!=NULL){
     
        head->next=reverseKGroup(cur,k);
           
    }
   
       
       return prev;
        }
};
