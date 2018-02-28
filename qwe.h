#include <iostream> 
#include <string> 
using namespace std; 

struct node { 
int key; 
int height; 
string text; 
node* left; 
node* right; 

node(int k, string t) 
{ 
key = k; 
text = t; 
left = 0; 
right = 0; 
height = 1; 
} 

}; 


int height(node *p) 
{ 
if (p != NULL) 
return p->height; 
else 
return 0; 
} 


int balance(node *p) 
{ 
return (height(p->right) - height(p->left)); 
} 


void newheight(node *p) 
{ 
int hleft = height(p->left); 
int hright = height(p->right); 

if (hleft > hright) 
p->height = hleft + 1; 
else 
p->height = hright + 1; 

} 


node* rotleft(node *p) 
{ 
node *q = p->right; 
p->right = q->left; 
q->left = p; 
newheight(p); 
newheight(q); 
return q; 
} 


node* rotright(node *p) 
{ 
node *q = p->left; 
p->left = q->right; 
q->right = p; 
newheight(p); 
newheight(q); 
return q; 
} 


node* rebalance(node *p) 
{ 
newheight(p); 
if (balance(p) == 2) 
{ 
if (balance(p->right) < 0) 
p->right = rotright(p->right); 

return rotleft(p); 
} 


if (balance(p) == -2) 
{ 
if (balance(p->left) > 0) 
p->left = rotleft(p->left); 

return rotright(p); 
} 

return p; 

} 


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



