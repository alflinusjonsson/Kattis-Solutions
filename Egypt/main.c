#include <stdio.h>

#define true 1

int main() {

    while(true) {
        int a = 0, b = 0, c = 0;

        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);

        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if(a>b){
            int temp = a;
            a=b;
            b=temp;
        }
        if(b>c){
            int temp = b;
                b=c;
                c=temp;
        }

        if(c*c==a*a+b*b){
            printf("right\n");
        }
        else
            printf("wrong\n");
    }
    return 0;
}
