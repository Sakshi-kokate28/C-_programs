#include<iostream>
using namespace std;

int main()
{
    int arr[] = {11,21,51,101,121};
    int number;

    cout<<arr[0]<< " " <<arr[1]<< " " <<arr[2]<<  " " <<arr[3]<< " "<<arr[4]<<endl;


    cout<<"Enter a number\n";
    cin >> number;

    arr[1] = number;

    cout<<arr[0]<< " " <<arr[1]<< " " <<arr[2]<<  " " <<arr[3]<< " "<<arr[4]<<endl;

    cout<<"Third elements of =" << arr[2];

    return 0;






}