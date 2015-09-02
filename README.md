# DS-smart-linklist
A sample implementation of linklist which will store length of list in 1st node. It will avoid scanning list just to know
length of list. Knowing length in advance will help in many DS problem. Using union will make sure that no additional memory
would be needed for length. 
Storing N nodes would require memory of N+1 nodes.

Node - 
strcut linklist{
  union data{
    int len;
    int data;
    }linkdata;
    struct linklist *next;
};
