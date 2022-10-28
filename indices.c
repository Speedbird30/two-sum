/*
Name: Sumit Subhash Jadhav
U89612131.
This program calculate the indices of the two numbers in the array such that they add up to key.
*/
#include <stdio.h>
void find_indices(int a[], int n, int key, int * index1,int *index2)  //defining the function
{
    int *p,*q,i,i1,i2,x,y;
    for (p = a; p<a+n; p++)
    {
        for (q = p+1; q<a+n; q++)
        {
            if (key == (*p + *q))
            {
                x = *p;   //assigning pointers
                y = *q;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        i1=0;
        if (x==a[i])
        {
            i1=i;
            *index1=i1;
        }
    }
    for(i=0;i<n;i++)
    {
        i2=0;
        if (y==a[i])
        {
            i2=i;
            *index2=i2;
        }
    }

}
int main()   //main function
{
    int i,n,key,index1,index2;
    printf("Enter the length of the array: ");
    scanf("%d",&n);  //user inputs
    int a[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key value:");
    scanf("%d",&key);
    find_indices(a,n,key,&index1,&index2);
    printf("Output: ");
    printf("%d %d\n",index1,index2);
    return 0;
}
