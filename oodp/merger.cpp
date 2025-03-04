#include<iostream>
using namespace std;
class merger
{
    private:
    int m,n,o,i,j;
    public:
    void sort_ascending(int a[],int M)
    {
        m=M;
        for(i=0;i<m-1;i++)
        {
            for(j=0;j<m-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    void sort_descending(int b[], int N)
    {
        n=N;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(b[j]<b[j+1])
                {
                    int temp=b[j];
                    b[j]=b[j+1];
                    b[j+1]=temp;
                }
            }
        }
    }
    void merge(int a[],int b[],int c[],int M,int N)
    {
        m=M;n=N;
        for(i=0;i<m;i++)
        {
            c[i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            c[m+i]=b[i];
        }
    }
    void disp_arr(int a[],int m)
    {
        for(i=0;i<m;i++)
        {
            cout<<"element "<<i<<" is : "<<a[i]<<endl;
        }
    }
    void ent_val(int a[],int m)
    {
        for(i=0;i<m;i++)
        {
            cout<<"element "<<i<<" is : ";
            cin>>a[i];
        }
    }

};
int main()
{
    merger ob;
    int M,N,i;
    cout<<"enter size of array A : ";
    cin>>M;
    int A[M];
    ob.ent_val(A,M);
    cout<<"enter size of array B : ";
    cin>>N;
    int B[N];
    ob.ent_val(B,N);
    cout<<"array A in ascending order is:"<<endl;
    ob.sort_ascending(A,M);
    ob.disp_arr(A,M);
    cout<<"array B in descending order is:"<<endl;
    ob.sort_descending(B,N);
    ob.disp_arr(B,N);
    int O=M+N;
    int C[O];
    ob.merge(A,B,C,M,N);
    cout<<"array c merged and in ascending order is:"<<endl;
    ob.sort_ascending(C,O);
    ob.disp_arr(C,O);
    return 0;
}