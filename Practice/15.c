#include <stdio.h>
int main()
{
    int i, n, l = 1, m = 1, k;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d, ", l);
        k= l + m;
        l = m;
        m = k;
    }
    return 0;
}

