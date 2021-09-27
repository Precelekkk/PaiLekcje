#include <iostream>
#include<vector>
using namespace std;

int n;
void printElems(vector < int > list) {
    int i;
    for (i = 0; i < n; i++)
        cout << list[i] << "  ";

}
void bubbleSort(vector < int > & a) {
    int i, j, k, swap;
    int len = a.size();
    for (int i = len; i > 0; i--) {
        for (j = 0, k = 1; k < i; j++, k++) {
            if (a[j] > a[k]) {
                swap = a[j];
                a[j] = a[k];
                a[k] = swap;
            }
        }
        cout << " podaj liczby" << n - i + 1 << " are  : ";
        printElems(a);

    }
}

int main() {
    int i, num;

    vector < int > v;
  
    cout << " Podaj swoje liczby : ";
    cin >> n;
    cout << "\n\n";

    for (i = 0; i < n; i++) {
        cout << "Enter number" << i + 1 << " :  ";
        cin >> num;
        v.push_back(num);

    }

    cout << " elementy listy : ";
    printElems(v);
    bubbleSort(v);

    cout << "\n\n elementy przed otworzeniem listy  : ";
    printElems(v);
    cout << "\n\n\n";
    return 0;
}