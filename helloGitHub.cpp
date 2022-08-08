#include <iostream>

using namespace std;

bool isPalindrome (int x)
{
    int num=0;
    int y=x;
    while (x!=0)
    {
        num=num*10;
        num=num+(x%10);
        x=x/10;
    }
    if(y==num)
    {
        return 1;
    }
    return 0;
}

int main()
{
    cout<<"Hello World"<<endl;

    int year;
    cout<<"Enter the year";
    cin>>year;

    if(isPalindrome(year))
    {
        cout<<"Yes, Palindrome";
    }
    else
    {
        cout<<"No, Palindrome";
    }

    return 0;
}
