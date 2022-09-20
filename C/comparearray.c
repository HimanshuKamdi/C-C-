#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array1[n], array2[n];
    int i, j;
    for(i=0; i<n; i++)
    {
        scanf("%d", &array1[i]);
    }
    for(i=0; i<n; i++)
    {
        scanf("%d", &array2[i]);
    }
    int flg=0;
    for(i = 0; i < n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(array1[i] == array2[j])
            {
                flg += 1;
                break;
            }
        }
    }
    if(flg == n)
    {
        printf("Array are same :");
    }
    else
    {
        printf("Array ae not same :");
    }
    return 0;
}