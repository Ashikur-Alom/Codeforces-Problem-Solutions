#include <stdio.h>
#include <string.h>

int main() {
int n,x=0;
scanf("%d", &n);

for(int i=0; i<n; i++) {
    char ch[5];
    scanf("%s", ch);
    
    if(ch[1]=='+') x++;
    else x--;
}
    
printf("%d", x);    
    
    return 0;
}
