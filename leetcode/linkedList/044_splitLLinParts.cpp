class solution {
public : 
    vector<ListNode*> split( ListNode * head, int k){
        vector<ListNode*> ans;
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        temp = head;
        if(cnt < k){

            while(temp){
                ListNode * curr = temp;
                ListNode * nextNode = temp->next;
                curr->next = NULL;
                ans.push_back(curr);
                temp = nextNode;
            }
            int diff = k - cnt;
            while(diff){
                ans.push_back(NULL);
                diff--;
            }

            return ans;
        }

        int parts = cnt/k;
        int extra = cnt%k;
        temp = head;
        for(int i=1; i<=k; i++){
            if(temp == NULL){
    ans.push_back(NULL);
    continue;
}
            ListNode * partHead = temp;
            ans.push_back(partHead);
          int currentHead = parts; 
            if(extra){
                extra--;
                currentHead++;
            }

            for(int j = 1; j<currentHead ; j++){
                temp = temp->next;
            }
            ListNode * nextNode = temp->next;
            temp->next = NULL;
            temp = nextNode;
        }

        return ans;
    }

};