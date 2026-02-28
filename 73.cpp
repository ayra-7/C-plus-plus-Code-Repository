//*****************2-D Array******************

//***********Row wise printing************ 
// #include<iostream>
// using namespace std;

// void printc(int a[][4],int row, int col)
// {
//     for(int j=0;j<col;j++)
//     for(int i=0;i<row;i++)
//     cout<<a[i][j]<<" ";
// }
// int main()
// {
//     int a[3][4]={1,2,3,4,5,6,7,8,9,12,11,12};
//     printc(a,3,4);// col-wise printing
    
    
//     return 0;
// }

//***********Row index with max sum , Sum of diagonal elements, Reverse rows**************
#include<iostream>
using namespace std;
void row_sum_max(int a[][3], int r, int c)
{
    int sum =INT16_MIN,index=-1;

    for(int i=0;i<r;i++)
    {
        int total=0;
        for(int j=0;j<c;j++)
        total+=a[i][j];

        if(total>sum)
        {
            sum=total;
            index=i;
        }
    }
    cout<<index<<" ";
} 

void sum_d(int a[][3],int r, int c)
{
    int sum=0,i,j;
    for(i=0;i<r;i++)            //    for(i=0;i<r;i++){ sum+=a[i][i]; }
    {
        for(j=i;j<=i;j++)
        {
            sum+=a[i][j];
        }
    }
    for(i=0;i<r;i++)                //  i=0,j=c-1
    {
        for(j=c-i-1;j>=c-i-1;j--)   // while(j>=0){ sum+=a[i][j]; i++,j--; }
        {
            sum+=a[i][j];
        }
    }
    cout<<sum<<endl;
}

void reverse_r(int a[][4],int r, int c)
{
    int i,j;                                    
    for(i=0;i<r;i++)                        // for(i=0;i<r;i++) 
    {                                       // { start=0, end=c-1;
        for(j=0;j<c/2;j++)                  // while(star<end)
        {                                   // { swap(a[i][start],a[i][end]);
            int temp=a[i][j];               //   start++, end--;
            a[i][j]=a[i][c-j-1];            // }}
            a[i][c-j-1]=temp;
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }


}
int main()
{
    int a[3][3]={6,2,3,7,11,9,5,10,13};
    int a1[3][4]={2,3,4,5,1,2,6,8,4,9,3,2};

    row_sum_max(a,3,3);
    sum_d(a,3,3);
    reverse_r(a1,3,4);
    
    return 0;
}

