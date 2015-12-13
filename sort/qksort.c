
void qksort(int *a, int left, int right)
{
    int i, j, pivot;
    if (left > right) return;
    pivot=a[right]; i=left; j=right;
    while(i<j) {
        for(;i<j;i++)
            if (a[i]>pivot) {
                a[j]=a[i];
                break;
            }
        for(;j>i;j--)
            if (a[j]<pivot) {
                a[i]=a[j];
                break;
            }
    }
    a[j]=pivot;
    qksort(a,left,j-1);
    qksort(a,j+1,right);
}
