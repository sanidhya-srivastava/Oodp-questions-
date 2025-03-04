#include<iostream>
using namespace std;
int n;
class menu
{
    private:
    int i,j,np;
    public:
    void insertion_sort(int arr[], int n)
    {
        np=n;
        int val, h;
        for (int i = 1; i < np; i++) {
            val = arr[i];
            h = i - 1;
            while (h >= 0 && arr[h] > val) {
                arr[h + 1] = arr[h];
                h--;
            }
            arr[h + 1] = val;
        }
    }
    void selection_sort(int a[], int n)
    {
        np=n;
        for(i=0;i<np-1;i++)
        {
            for(j=i+1;j<np;j++)
            {
                if(a[i]>a[j])
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
    }
    void bubble_sort(int a[], int n)
    {
        np=n;
         for(i=0;i<np-1;i++)
        {
            for(j=0;j<np-i-1;j++)
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
    void display(int a[], int n)
    {
        for(i=0;i<n;i++)
        {
            cout<<"element "<<i<<" is: "<<a[i]<<endl;
        }
    }

};
int main()
{
    menu ob;
    int ch;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    do
    {
        cout << "the menu is " << endl;
        cout << "1. accept elements in array"<< endl;
        cout << "2. Display elements of an array" << endl;
        cout << "3. Sort the array using insertion sort method" << endl;
        cout << "4. Sort the array using selection sort method" << endl;
        cout << "5. Sort the array using bubble sort method" << endl;
        cout << "6. exit " << endl;
        cout<<"your choice is: ";
        cin>>ch;
        switch (ch)
        {
            case 1: cout<<"enter elements to be added"<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<"enter element "<<i<<" : ";
                cin>>arr[i];
            }
            break;
            case 2: cout<<"the elements of array are"<<endl;
            ob.display(arr,n);
            break;
            case 3:cout<<"sorting array using insertion sort method" << endl;
            ob.insertion_sort(arr,n);
            break;
            case 4: cout<<"sorting array using selection sort method" << endl;
            ob.selection_sort(arr,n);
            break;
            case 5:cout<<"sorting array using bubble sort method" << endl;
            ob.bubble_sort(arr,n);
            break;
            case 6:cout<<"exiting " << endl;
            break;
            default:cout<<"invalid choice " << endl;
            break;
        }
    } while (ch!=6);
}