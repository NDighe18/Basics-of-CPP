// program to illustrate concept of switch
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int choice;
  while (choice != 4)
  {

    cout << "\n"
         << "Enter a choice number to perform any of the following :" << "\n";
    cout << "1. Print Fibonacci series" << "\n";
    cout << "2. Print Reverse of given input" << "\n";
    cout << "3. Check if given input is Palindrome" << "\n";
    cout << "4. EXIT N Say Jay shree ram " << "\n";
    cout << "\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
      int n, a = 0, b = 1, c = 0;
      cout << "Enter the number of terms to be printed:" << "\n";
      cin >> n;
      cout << "Fibonacci series is:";
      if (n == 1)
      {
        cout << a;
        break;
      }
      if (n == 2)
      {
        cout << a << "," << b;
        break;
      }
      if (n > 2)
      {
        cout << a << "," << b << ",";
        for (int i = 1; i <= n - 2; i++)
        {

          c = a + b;
          a = b;
          b = c;
          cout << c << ",";
        }
      }
      break;
    }

    case 2:
    {
      char input[50], temp;
      int len, left, right;
      cout << "Enter a string to print it's reverse:" << endl;
      cin >> input;

      len = strlen(input);

      left = 0, right = len - 1;

      for (int i = left; i < right; i++)
      {

        temp = input[i];
        input[i] = input[right]; // swapping charactrers to reverse the string
        input[right] = temp;
        right--;
      }

      cout << "The reversed string is: " << input;
      break;
    }

    case 3:
    {
      char str1[30];
      int length;
      int flag = 0;

      cout << "Enter a string to check if it is a Palindrome: ";
      cin >> str1;

      length = strlen(str1);
      for (int i = 0; i < length; i++)
      {
        if (str1[i] != str1[length - i - 1])
        {
          flag = 1;
          break;
        }
      }

      if (flag == 1)
      {
        cout << str1 << " is not a Palindrome" << endl;
      }
      else
      {
        cout << str1 << " is a Palindrome" << endl;
      }
      break;
    }
    case 4:
      cout << "------------EXIT from the Program !-------------";
    }
  }
  return 0;
}