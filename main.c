#include <stdio.h>
int lnr_res(int a[], int value, int idx, int n)
{
    int p = 0;
    if(idx >= n)
    {
        return 0;
    }
    else if (a[idx] == value)
    {
        p = idx + 1;
        return p;
    }
    else
    {
        return lnr_res(a, value, idx+1, n);
    }
    return p;
}
int main()
{
    int n, value, p, m = 0;
    printf("Enter the total elements in the array  ");
    scanf("%d", &n);
		int a[n];
    printf("Enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search  ");
    scanf("%d", &value);
    p =  lnr_res(a, value, 0, n);
    if (p != 0)
    {
        printf("Element found at pos %d ", p);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
