#include <iostream>
using namespace std;

int main()
{
  int a[3][3], b[3][3], result[3][3];
  int n = 3;
  int sum = 0;
  cout << "enter the first matrix: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
    }
  }
  cout << "enter the second matrix: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> b[i][j];
    }
  }
  cout << "first matrix: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  cout << "second matrix: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
  cout << "resultant matrix: " << endl;
  int p = 0, q = 0;
  for (p = 0; p < n; p++)
  {
    for (q = 0; q < n; q++)
    {
      sum = 0;
      for (int r = 0; r < n; r++)
      {
        sum += a[p][r] * b[r][q];
      }
      result[p][q] = sum;
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << result[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
