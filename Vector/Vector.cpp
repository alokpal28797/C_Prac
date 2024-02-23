#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <cstring> // for strcpy
#include <string>
using namespace std;

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
void printVector2(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
}

void leftRight(int arr[], int size)
{
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void leftRightMax(int arr[], int size)
{

    // for (int i = 0; i < size; i++)
    // {
    //     int temp = 0;
    //     if (arr[i + 1] > arr[i])
    //     {
    //         temp = arr[i];
    //         arr[i] = arr[i + 1];
    //         arr[i + 1] = temp;
    //     }
    // }
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}

// Leet code

// using 2 pointer theorm;
void sortColors(vector<int> nums)
{
    int left = 0;
    int right = nums.size() - 1;

    for (int i = 0; i <= right;)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[left]);
            left++;
            i++;
        }
        else if (nums[i] == 2)
        {
            swap(nums[i], nums[right]);
            right--;
        }
        else
        {
            i++; // Move to the next element
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

void sortColorsCounting(vector<int> nums)
{
    int red = 0;
    int blue = 0;
    int white = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            red++;
        }
        if (nums[i] == 1)
        {
            blue++;
        }
        if (nums[i] == 2)
        {
            white++;
        }
    }

    cout << red << " " << endl;
    cout << blue << " ";
    cout << white << " " << endl;
    fill(nums.begin(), nums.end(), 0);

    // Push back the counted elements in the same order
    for (int i = 0; i < red; i++)
    {
        nums[i] = 0;
    }
    for (int i = 0; i < blue; i++)
    {
        nums[i + red] = 1;
    }
    for (int i = 0; i < white; i++)
    {
        nums[i + red + blue] = 2;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

void rotateArray(vector<int> nums, int k)
{

    int left = 0;
    int right = nums.size() - 1;
    int arr[2] = {nums[right], nums[right - 1]};

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        nums[i] = nums[i - k];
    }
    nums[0] = arr[1];
    nums[1] = arr[0];
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

void rotateArrayModulus(vector<int> nums, int k)
{
    int n = nums.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int newIndex = (i + k) % n;
        ans[newIndex] = nums[i];
    }
    nums = ans;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

void missingNumber(vector<int> nums)
{
    int n = nums.size();
    int numsSum = 0;
    for (int i = 0; i < n; i++)
    {
        numsSum = numsSum + nums[i];
    }
    cout << nums[n - 1] << " ";
    int sum = ((n) * (n + 1)) / 2;
    int ans = sum - numsSum;
    cout << ans << " ";
    cout << numsSum << " ";
}

void rearrangeArray(vector<int> nums)
{

    int n = nums.size();
    vector<int> ans(n, 0);
    int j = 0;
    int k = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
        {
            ans[k] = nums[i];
            k = k + 2;
        }
        else
        {
            cout << nums[i] << " ";
            ans[j] = nums[i];
            j = j + 2;
        }
    }
    cout << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

void rowWithMaxOnes(vector<vector<int>> &nums)
{
    int n = nums.size();
    int ans = INT_MIN;
    int row = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < nums[i].size(); j++)
        {
            if (nums[i][j] == 1)
            {
                count++;
            }
        }
        if (count > ans)
        {
            ans = count;
            row = i;
        }
    }
    cout << row << " ";
}

void rotateArray(vector<vector<int>> &nums)
{
    int first = 0;
    int last = nums.size() - 1;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i; j < nums[i].size(); j++)
        {
            // cout << nums[i][j] << " ";
            swap(nums[i][j], nums[j][i]);
        }
    }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums[i].size(); j++)
    //     {
    //         // cout << nums[i][j] << " ";
    //         swap(nums[i][last], nums[i][first]);
    //     }
    // }
    for (int i = 0; i < nums.size(); i++)
    {
        reverse(nums[i].begin(), nums[i].end());
    }

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
}

// KeyPAi or two sum
void keyPair(vector<int> nums)
{
    int a = 0;
    int b = 0;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = 0; j < nums.size(); j++)
    //     {

    //         if (nums[i] + nums[j] == 16 && nums[i] != nums[j])
    //         {
    //             a = nums[i];
    //             b = nums[j];
    //             break;
    //         }
    //     }
    // }

    // Gives TLE
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         if (nums[i] + nums[j] == 16)
    //         {
    //             a = nums[i];
    //             b = nums[j];
    //         }
    //     }
    // }

    // When the array is sorted
    int l = 0;
    int h = nums.size() - 1;
    int target = 16;
    sort(nums.begin(), nums.end());

    while (l < h)
    {
        if (nums[l] + nums[h] == target)
        {
            a = nums[l];
            b = nums[h];
            break;
        }
        else if (nums[l] + nums[h] > target)
        {
            h--;
        }
        else
        {
            l++;
        }
    }

    cout << a << " " << b << endl;
    // When the array is sorted
    // int l = 0;
    // int h = nums.size() - 1;
    // int target = 16;
    // sort(nums.begin(), nums.end());

    // while (l < h) {
    //     if (nums[l] + nums[h] == target) {
    //         a = nums[l];
    //         b = nums[h];
    //         break;  // Found a pair, exit the loop
    //     } else if (nums[l] + nums[h] > target) {
    //         h--;
    //     } else {
    //         l++;
    //     }
    // }

    // if (a + b == target) {
    //     cout << "Pair found: " << a << " " << b << endl;
    // } else {
    //     cout << "No pair found." << endl;
    // }
}

void pivotIndex(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        int leftSum = 0;
        int rightSum = 0;
        for (int j = 0; j < i; j++)
        {
            leftSum += nums[j];
        }
        for (int k = i + 1; k < nums.size(); k++)
        {
            rightSum += nums[k];
        }
        if (leftSum == rightSum)
        {
            cout << i << endl;
        }
    }
}

void removeSameStr(string n)
{
    char strArray[n.size()+ 1];

    strcpy(strArray, n.c_str());

    vector<char> charVector;

    for (int i = 0; i < n.size(); i++)
    {
        bool found = true;
        for (int j = i + 1; j < n.size(); j++)
        {
            if (strArray[i] == strArray[j])
            {
                found = false;
                break;
            }
           
        }
        if (found == true){
            charVector.push_back(strArray[i]);
        }
    }

    for (int i = 0; i < charVector.size(); i++)
    {
        cout << charVector[i] << " ";
    }
    cout << charVector.size() << " ";
}
int main()
{

    // vector<int> v;
    // // push
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // v.pop_back();
    // v.pop_back();
    // vector<int> v(3, -1);

    // v.push_back(4);
    // printVector(v);

    // int arr[7] = {-4, 5, -10, -7, 22, 3, 0};

    // int size = 7;

    // printVector2(v);
    // leftRight(arr, size);

    vector<int> vec = {1, 0, 2, 2, 1, 0, 1, 0};
    // sortColors(vec);
    // sortColorsCounting(vec);

    vector<int> vec1 = {10, 20, 30, 40, 50, 60, 70, 80};
    int k = 2;
    // rotateArray(vec1, k);
    // rotateArrayModulus(vec1, k);

    vector<int> vec2 = {3, 1, -2, -5, 2, -4};
    // missingNumber(vec2);
    // rearrangeArray(vec2);

    vector<vector<int>> mat = {
        {0, 0, 1, 1, 1},
        {0, 0, 0, 0, 1},
        {0, 1, 1, 1, 1}};
    // rowWithMaxOnes(mat);

    vector<vector<int>> mat2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    // rotateArray(mat2);

    // vector<int> mat3 = {1, 4, 45, 6, 10, 8};
    // vector<int> mat3 = {1, 4, 6,8, 10, 45,};
    // keyPair(mat3);

    vector<int> numsOr = {1, 7, 3, 6, 5, 6};
    // pivotIndex(numsOr);

    //  string to array
    string str = "hello world";

    char charArray[str.size() + 1]; // +1 for null terminator

    // Copy the string into the char array
    strcpy(charArray, str.c_str());

    for (int i = 0; i < str.size() + 1; i++)
    {
        // cout << charArray[i] << " ";
    }

    string strA = "abcbadbaaacccdddbbb";
    removeSameStr(strA);

    return 0;
}