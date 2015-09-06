#include<stdio.h>
#include<stdlib.h>

struct linklist
{
  union data
  {
    size_t len;
    int data;
  }linkdata;
  struct linklist *next;
};

typedef struct linklist linklist;
int add_node(linklist **head, int data);
int insert_node(linklist **head, int data, int pos);
void display_list(linklist *head);
int getlen_list(linklist *head);
int nthfromlast(linklist *head, int n);
