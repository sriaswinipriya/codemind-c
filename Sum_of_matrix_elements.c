#include<stdio.h>
int main()
{
    int a,b,i,j,arr[50][50],s=0;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
}