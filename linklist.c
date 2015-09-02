#include<linklist.h>


linklist* create_node(int data)
{
  linklist* newnode = NULL;
  newnode = (linklist *) malloc(sizeof(linklist));
  if(newnode)
  {
    newnode->linkdata.data = data;
  }
  return newnode;
}

linklist* create_head()
{
  linklist* newnode = NULL;
  newnode = (linklist *) malloc(sizeof(linklist));
  if(newnode)
  {
    newnode->linkdata.len = 0;
  }
  return newnode;
}
  

add_node(linklist **head, int data)
{
  if(*head == NULL)
  {
    *head = create_head();
  }
  if(*head)
  {
    linklist *temp = *head;
    while(temp->next)
    {
      temp = temp->next;
    }
    temp->next = create_node(data);
    ++((*head)->linkdata.len);
   }
    
  return 0;
}

int insert_node(linklist **head, int data, int pos)
{
  if(*head == NULL)
  {
    printf("not possible to insert \n");
  }
  else
  {
    linklist* temp = *head;
    --pos;
    while(pos && temp->next)
    {
      --pos;
      temp = temp->next;
    }
    if(!pos && temp->next)
    {
      linklist* newnode = create_node(data);
      newnode->next = temp->next;
      temp->next = newnode;
      ++((*head)->linkdata.len);
      
    }
    if(!pos && !temp->next)
    {
      temp->next = create_node(data);
      
      ++((*head)->linkdata.len);
    }
    if(pos)
      printf("not a valid position \n");
  }      
}
void display_list(linklist *head)
{
  linklist *temp = head->next;
  while(temp)
  {
    printf("%d\n", temp->linkdata.data);
    temp =temp->next;
  }
}
  
int getlen_list(linklist *head)
{
  return head->linkdata.len;
}

int nthfromlast(linklist *head, int n)
{
  linklist *temp = head;
  int pos = head->linkdata.len - n + 1;
  while(pos && temp->next)
  {
    temp = temp->next;
    --pos;
  }
  if(!pos)
    return temp->linkdata.data;
  else
    return 0;
}
  


