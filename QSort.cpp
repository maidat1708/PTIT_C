void QSort(int a[],int l ,int r)
{
    int i = l;
    int j = r;
    int p = a[(l+r)/2];
    while( i < j)
    {
        while(a[i] < p ) i++;
        while(a[j] > p) j--;
        if(i<=j)
        {
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
            i++;
            j--;
        }
    }
    if(i < r) QSort(a,i,r);
    if(j > l) QSort(a,l,j);
}
