#include <stdio.h>
#include <string.h>

int main() {
int n;
scanf("%d", &n);

while(n--) {
    char ch[1000];
    scanf("%s", ch);
    
    int len=strlen(ch);
    
    if(strlen(ch)<=10) {
        printf("%s\n", ch);
    }else {
        printf("%c", ch[0]);
        printf("%d", strlen(ch)-2);
        printf("%c\n", ch[len-1]);
    }
}
    
    
    
    return 0;
}
