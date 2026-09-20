//"""Print the array in one line.
//Change the second element 20 to 200.
//Change the fifth element 50 to 500.
//Print the updated array in one line.
//Finally, print the second and fifth elements separately."""


  
  
  #include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20, 30, 40, 50};

    cout<<arr[0]<< " " << arr[1]<< " " <<arr[2]<< " " <<arr[3]<< " " <<arr[4];

    arr[1] = 200;
    arr[4] = 500;

    cout<<arr[0]<< " " << arr[1]<< " " <<arr[2]<< " " <<arr[3]<< " " <<arr[4];



}