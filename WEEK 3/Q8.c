#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
	while(t--){
	    int g;
	    scanf("%d",&g);
	    while(g--){
	        int i,n,q;
	        scanf("%d%d%d",&i,&n,&q);
	        if(i==q) printf("%d\n",n/2);
	        else printf("%d\n",(n-n/2));
	    }
	}
	return 0;
}