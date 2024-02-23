#include <iostream>
using namespace std;

void invertedHollowPyramid(int args)
{

    int noOfRows = args;

    for (int i = noOfRows; i > 0; i--)
    {

        for (int j = 1; j < i + 1; j++)
        {
            // cout << "*";ā
            if (i == noOfRows)
            {
                cout << j << " ";
            }
            else if (j == 1)
            {
                cout << noOfRows + 1 - i << " ";
            }
            else if (j == i)
            {
                cout << "5 ";
            }

            else
            {
                cout << "  ";
            }
            // else if (i == 1 && j == 1 ){
            //       cout << " ";
            // }

            // else
            // {
            //     cout << j;
            // }
        }

        cout << endl;
    }
}

void palindromeEqiTraiangle(int args)
{
    int noOfRows = args;
    for (int i = 0; i < noOfRows; i++)
    {

        for (int j = 1; j < noOfRows - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k < i + 1 + 1; k++)
        {
            cout << k << " ";
        }
        for (int l = i; l > 0; l--)
        {
            cout << l << " ";
        }

        cout << endl;
    }
}

void solidHalfDiamond(int args)
{
    int noOfRows = args;

    for (int i = 0; i < noOfRows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 0; i < noOfRows - 1; i++)
    {

        for (int j = noOfRows - (i + 1); j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

bool targetArray(int b[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (b[i] == target)
        {
            return true;
        }
    }
    return false;
}

void countZerosOnes(int array[], int size)
{
    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }
    cout << "zeros: " << zeros << endl;
    cout << "ones: " << ones << endl;
}
int main()
{
    // invertedHollowPyramid(5);

    // palindromeEqiTraiangle(5);
    // solidHalfDiamond(5);

    // int b[5] = {1, 2, 3, 4, 5};
    // int target = 4;
    // int size = 5;
    // bool tar = targetArray(b , size , target);
    // if (tar == true) {
    //     cout << "target found" << endl;
    // }else{
    //     cout << "target not found"<< endl ;
    // }
    // cout << sizeof(arr) << endl;

    int arr[6]= {1,0,0,0,1,0};
    int size = 6;
    countZerosOnes(arr, size);

    return 0;
}