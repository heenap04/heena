#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;scanf("%d",&n);

    int arr[n],arr2[n];
    for (i=0;i<n;i++) scanf("%d",&arr[i]);

    int x;scanf("%d",&x);

    while (x--)
    {
        int a;
        scanf("%d",&a);
        for (i=0;i<n;i++)
        {
            if (i-a<0) arr2[i]=arr[i]+arr[n-a+i];
            else arr2[i] = arr[i]+arr[i-a];
        }
        for (i=0;i<n;i++) arr[i]=arr2[i];
    }
    long long value = pow(10,9)+7,sum=0;
    for (i=0;i<n;i++) sum+=arr[i];

    sum %= value;

    printf("%lld\n",sum);

    return 0;
}