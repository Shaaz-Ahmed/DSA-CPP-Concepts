List* noLoop(List *head , int k) {

   // Write your code here.

   List* temp=head;

   while(temp!=NULL && k!=1){

      temp=temp->next;

      k--;

   }

   temp->next=NULL;

   temp=head;

   return temp;

}
