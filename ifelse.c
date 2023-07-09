#include <stdio.h>
int main(){
	int q,w,e,r;
	printf("enter input q,w,e,r");
	scanf("%d%d%d%d",&q,&w,&e,&r);
	if(q>w && q>e && q>r)
	{
		printf("%d is largest q",q);
}
        if(w>q && w>e && w>r)
        {
		printf("%d is largest w",w);
	
}
        if(e>q && e>w && e>r)
        {
		printf("%d is largest e",e);
}
        if(r>q && r>w && r>e)
        {
		printf("%d is largers r",r);
}
}


