/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    { 
      
        
      ListNode*l3=NULL;     
      stack<int> stackL1 ;
        int x=0;
        
        int j=7;
      bool flag=true; 
      while( l1!=NULL && l2!=NULL) 
      {             
          
           
          
          int sum=(l1->val+l2->val)+x ;  
         
         cout<<x;
          if(sum <=9) 
          {
              stackL1.push(sum);   
              x=0;
              
          } 
          else 
          {
             
              stackL1.push(sum%10) ;
              x=1;
          }   
        
        
          l1=l1->next ; 
          l2=l2->next ; 
          if(l1==NULL && l2!=NULL)  
          {
              l1=new ListNode() ; 
          } 
          if(l2==NULL && l1!=NULL)
          
          {
              l2=new ListNode() ; 
          }
          
      }      
        if(x==1) 
        {
            stackL1.push(1);
        }
    
     
   
   
        
 
  
    while(!stackL1.empty() )
    {   
        
       ListNode*new_node=new ListNode() ; 
        int s=stackL1.top() ; 
        
        stackL1.pop() ;
        new_node->val=s;
        new_node->next=l3;
        
        l3=new_node;
        
    }  
    
        
  
     
    return l3;
    }
};