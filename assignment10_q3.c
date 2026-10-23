#include<stdio.h>
void rearray(int a[], int l, int r)
{
int temp;
if (l>=r)
{
    return;
}
    temp = a[l];
    a[l] = a[r];
    a  [r] = temp;
    rearray(a, l+1, r-1);
}
int main()
{
    int a[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    rearray(a, 0, n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
