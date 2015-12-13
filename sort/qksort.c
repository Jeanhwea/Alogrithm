void qksort(int *a, int left, int right)
{
    int i, j, t, p;
    if (left > right) return;
    p=a[right]; i=left; j=right;
    while(i<j) {
        for(;i<j;i++)
            if (a[i]>p) {
                a[j]=a[i];
                break;
            }
        for(;j>i;j--)
            if (a[j]<p) {
                a[i]=a[j];
                break;
            }
    }
    a[j]=p;
    qksort(a,left,j-1);
    qksort(a,j+1,right);
}
