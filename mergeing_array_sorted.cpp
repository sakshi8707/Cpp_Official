#include <bits/stdc++.h>
using namespace std;

void MergeArray(int a[], int b[], int arr[], int n1, int n2)
{
    sort(a,a+n1);
    sort(b,b+n2);
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] == b[j];
        k++;
        j++;
    }
}

int main()
{
    int n1;
    cin >> n1;
    int a[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    int n2;
    cin >> n2;
    int b[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    int arr[n1 + n2];
    MergeArray(a, b, arr, n1, n2);
    // merging tow arrays
    cout << "arrays are ->";
    for (int i = 0; i < n1 + n2; i++)
    {
        cout << " " << arr[i] << " ";
    }
    return 0;
}
// int main()
// {

//     return 0;
// }