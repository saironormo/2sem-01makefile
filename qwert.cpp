#include "qwe.h"

void *find(node *p, int k) 
{ 


if (k <p->key) 
{ 
if (p->left == NULL) 
cout << ":c" << endl; 
else 
return find(p->left, k); 
} 

if (k > p->key) 
{ 
if (p->right == NULL) 
cout << ":c" << endl; 
else 
return find(p->right, k); 
} 

if (k == p->key) 
cout << p->text << endl; 



} 
