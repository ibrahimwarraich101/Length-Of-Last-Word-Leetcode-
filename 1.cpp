#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int count = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == ' ' && count == 0)
                continue;
            else if (s[i] != ' ')
                count++;
            else
                break;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    string ch;
    cout << "Enter a sentence: ";
    getline(cin, ch);
    cout << endl;
    cout << "\nThe length of the last word is: " << sol.lengthOfLastWord(ch) << endl;

    cout << endl << endl;
    system("pause");
    return 0;
}
