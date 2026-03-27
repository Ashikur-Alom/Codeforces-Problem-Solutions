#include <stdio.h>

int main() {
int n,count=0;
scanf("%d", &n);

while(n--) {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    if((a==0 && b==0) || (a==0 && c==0) || (b==0 && c==0)) continue;
    else count++;
}
    
printf("%d\n", count);    
    
    
    return 0;
}
