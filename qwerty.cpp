
#include "qwe.h"
#include "qwert.ccp"


int main() 
{ 
int m, n; 
cin >> m; 
int k; 
int k1, k2, k3; 
string t; 
scanf_s("%d/%d/%d", &k1, &k2, &k3); 
k = k3 * 10000 + k2 * 100 + k3; 
cin >> t; 
node *p = new node(k, t); 
for (int i = 0; i < m - 1; i++) 
{ 
scanf_s("%d/%d/%d", &k1, &k2, &k3); 
k = k3 * 10000 + k2 * 100 + k3; 
cin >> t; 
add(p, k, t); 
} 
cin >> n; 
for (int i = 0; i < n; i++) 
{ 
scanf_s("%d/%d/%d", &k1, &k2, &k3); 
k = k3 * 10000 + k2 * 100 + k3; 
find(p, k); 

} 



return 0; 
}
