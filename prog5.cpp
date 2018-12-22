#include<iostream>
using namespace std;

int main()
{
    int width, height, totalLength;

    cout<<"Please press enter after entering the input. \n";
    cout<<"Enter the width of the rectangle in feet: \n";
    cin>>width;

    cout<<"Enter the height of the rectangle in feet : \n";
    cin>>height;

    totalLength=2*(height+width);
//the original formula
    cout<<" A "<<totalLength<<" feet fence is required if "<<width<<" is the width and \n"<<height<<" is the height of rectangle in feet." ;

    return 0;

}
