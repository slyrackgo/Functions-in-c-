#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

///Bubble Sort.

/*void bubble_sort(int a[])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5 - i - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


int main()
{
    int myarray[5];
    int size;
    cout << "Enter 5 integers in any order: ";
    for(int i = 0; i < 5; i++)
    {
    cin >> myarray[i];
    }
    bubble_sort(myarray);
    for(int i = 0; i < 5; i++)
    {
    cout << myarray[i] << " " << endl;
    }
    return 0;
}
*/


/// Finding average.

/*double avg(double x, double y, double z);
int main()
{
    double a, b, c;
    while(true)
    {
        cout <<"Enter three integers in order to find it's average " << endl;
        cout <<"1#: ";
        cin >> a;
        cout << "2#: ";
        cin >> b;
        cout << "3#: ";
        cin >> c;

        cout << "The average of " << a << ", " << b << " and " << c << " is: " << avg(a, b, c) << endl;;
        if(a==0 && b==0 && c==0)
        {
            cout << "Good bye!";
            break;
        }
    }
}

double avg(double x, double y, double z)
{
    return (x + y + z)/3;
}
*/

///Finding factorial.

/*
int main()
{
    int n;
    int fctrl = 1.0;

        cout << "Enter the number to find it's factorial: " ;
        cin >> n;
        for(int i = 1; i <=n; i++)
        {
            fctrl = fctrl * i;
        }
        cout << "The factorial is " << fctrl << endl;
        return 0;
    }
*/

///Hanoi Tower.

void moveRings(int n, int src, int dest, int other);
void moveARing(int src, int dest);
int main(){
    int n;
    cout << "Enter the stack of rings: ";
    cin >> n;
    if(n>0){
    moveRings(n, 1, 3, 2);
    }
    return 0;
}
void moveRings(int n, int src, int dest, int other){
    if(n==1){
        moveARing(src, dest);
    }
    else{
        moveRings(n-1, src, other, dest);
        moveARing(src, dest);
        moveRings(n-1, other, dest, src);
    }
}
void moveARing(int src, int dest){
    cout << "Move from " << src << " to " << dest << endl;
}
