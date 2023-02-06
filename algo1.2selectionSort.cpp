#include <iostream>

using namespace std;
int a[100];
int n;
void input();
void SelectionSort();
void output();

int main()
{
    input();
    SelectionSort();
    output();
    return 0;
}

void input()
{
    cout<<"Enter number of input:"<<endl;
    cin>>n;
    cout<<"Enter number:"<<endl;
    for(int i = 1; i<= n; i++)
    {
        cin>>a[i];
    }
}
void SelectionSort()
{
    for(int i = 1; i<=n; i++)
    {
        int j = i;
        for(int k = i+1; k <= n; k++)
        {
            if(a[k]<a[j])
            {
                j=k;
            }
        }
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void output()
{
    cout<<"After sorting :"<<endl;
    SelectionSort();
    for(int i = 1; i<= n; i++)
    {
        cout<< a[i]<< " "<<endl;
    }
}
