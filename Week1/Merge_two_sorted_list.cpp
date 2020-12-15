ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * pre=new ListNode(-1);
        ListNode * newNodeList = pre;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val>=l2->val){
                newNodeList->next=l2;
                l2=l2->next;

            }else{
                newNodeList->next = l1;
                l1=l1->next;

            }

            newNodeList=newNodeList->next;
        }
        if(l1!=nullptr){
            newNodeList->next=l1;
        }else{
            newNodeList->next=l2;
        }

        return pre->next;
    }