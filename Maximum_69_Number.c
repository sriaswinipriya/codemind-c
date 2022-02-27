#include<stdio.h>
int main()
{
        int arr[10],n,temp[10],i=0,j,digits=0,r;
        scanf("%d",&n);
    while(n>0)
{
    r=n%10;
    n=n/10;
    arr[i++]=r;
	digits++;
}
i--;
for(j=0;i>=0;i--)
{
   temp[j++]=arr[i];
}

for(i=0;i<digits;i++){
if(temp[i]==6){
	temp[i]=9;break;
}
}
for(i=0;i<digits;i++){
	printf("%d",temp[i]);
}
return 0;
}