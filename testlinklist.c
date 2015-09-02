#include<linklist.h>

int main()
{
  linklist *list = NULL;
  add_node(&list, 23);
  add_node(&list, 24);
  add_node(&list, 25);
  add_node(&list, 26);
  insert_node(&list, 20, 2);
  insert_node(&list, 20, 0);
  insert_node(&list, 20, 5);
  insert_node(&list, 20, 3);
  display_list(list);
  printf("length of list is %d\n", getlen_list(list));
  printf("1st from last is %d\n", nthfromlast(list, 1));
  printf("2nd from last is %d\n", nthfromlast(list, 2));
  printf("3rd from last is %d\n", nthfromlast(list, 3));
  printf("4th from last is %d\n", nthfromlast(list, 4));
  printf("5th from last is %d\n", nthfromlast(list, 5));
  return 0;
}
