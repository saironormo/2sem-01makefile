#include "qwe.h"


node* add(node *p, int k, string t) 
{ 
if (p == NULL) 
return new node(k, t); 

if (k < p->key) 
p->left = add(p->left, k, t); 
else 
p->right = add(p->right, k, t); 

return rebalance(p); 


} 
