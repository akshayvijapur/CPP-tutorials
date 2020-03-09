#include <iostream>

struct node
{
    int data;
    struct node *link;
};

void DeleteAtPosition(struct node **node, int pos);
void DeleteTheDataFromLikedList(struct node **node, int data);
void ReverseTheLinkedList(struct node **node);
int CountTheElementsInLinkedList(struct node *node);
void addTheElementAtThePositionInTheLinkedList(struct node **node, int pos, int data);
void AddToLinkedList(struct node **newnode, int data);
void ShowLinkedList(struct node *test);

void addTheElementAtThePositionInTheLinkedList(struct node **node, int pos, int data){
    struct node *tmp, *prev, *current, *next;

tmp = (struct node *) malloc(sizeof(struct node *));
tmp->data=data;
tmp->link=NULL;

current = *node;

for(int i = 0; i < pos -2; i++){    
    current = current->link;   
}
tmp->link=current->link;

current->link=tmp;

}

int CountTheElementsInLinkedList(struct node *node){
  int count =0;
    while(node != NULL){
        node = node->link;
        count= count+1;
    }
    return count;
}

void ReverseTheLinkedList(struct node **node){
    struct node *temp,*prev,*current,*next;
   current = (*node);
   prev = NULL;
   while(current !=NULL){     
      
       next =  current->link;
       current->link=prev; 
       prev= current; 
       current=next;
      
   }

   *node = prev;

}

void DeleteAtPosition(struct node **node, int pos){

    struct node * temp;
    temp = (*node);

    if (temp == NULL){
        return ;
    }

    for(int i = 0; i < pos-2;i++){
        temp=temp->link;
    }

    (temp)->link= (temp)->link->link;

}

void DeleteTheDataFromLikedList(struct node **node, int data){
    struct node *temp = (*node);
    struct node *prev = NULL;
    if(temp->data == data){        
        *(node) = temp->link;
        free(temp);
        return;
    }

   prev = temp;
    while(temp != NULL){
        if(temp->data == data){           
            prev->link=temp->link;
            temp->link =NULL;
            free(temp);         
            return;
        }
        prev = temp;
        temp=temp->link;
    }
}

void AddToLinkedList(struct node **newnode, int data)
{

    if (*newnode == NULL)
    {
        struct node *test = NULL;
        struct node *temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = data;
        temp->link = NULL;
        *newnode = temp;
    }
    else
    {   struct node *t;
        t = (*newnode);

        while(t->link != NULL){
            t = t -> link;
        }

        struct node *temp = (struct node *)malloc(sizeof(struct node *));
        temp->data = data;
        temp->link = NULL;
        t->link = temp;
    }
}

void ShowLinkedList(struct node *test)
{

    while (test->link != NULL)
    {
        std::cout << test->data << "\t";
        test = test->link;
    }
    std::cout << test->data << "\n";
}

void AddToFrontofLinkedList(struct node **node, int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node *));
    if (*node == NULL)
    {
        temp->data = data;
        temp->link - NULL;
        *node = temp;
    }
    else
    {
        temp->data = data;
        temp->link = *node;
        *node = temp;
    }
}


int main()
{

    struct node *test = NULL;

    AddToLinkedList(&test, 10);
    AddToLinkedList(&test, 20);
    ShowLinkedList(test);

    AddToFrontofLinkedList(&test, 30);
    ShowLinkedList(test);

    AddToLinkedList(&test, 40);
    ShowLinkedList(test);
    AddToLinkedList(&test, 50);
    ShowLinkedList(test);
    DeleteAtPosition(&test,3);
    ShowLinkedList(test);


   // DeleteTheDataFromLikedList(&test,40);
    ShowLinkedList(test);
    //DeleteTheDataFromLikedList(&test,30);
    ShowLinkedList(test);
    AddToLinkedList(&test, 80);
    AddToLinkedList(&test, 90);
    ShowLinkedList(test);
    ReverseTheLinkedList(&test);
    ShowLinkedList(test);

    std::cout<<CountTheElementsInLinkedList(test)<<"\n";

    addTheElementAtThePositionInTheLinkedList(&test,3,100);
    ShowLinkedList(test);
}
