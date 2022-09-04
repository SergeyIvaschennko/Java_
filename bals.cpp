#include <iostream>
#include <string>
using namespace std;
int check(string a, int n) {
  int result = 0;
  bool flag = false;
  for (int i = 0; i < n && !flag; i++) {
    if (a[i] - 48 == i+1) {
      flag = true;
      result = 1;
    }
  }
  return result;
}
int permute(string a, int l, int r, int len, int &answer)
{
	if (l == r) { 
    int y = check(a, len);
    if (y == 1) {
      ++answer;
    }  
    cout << a << endl;
  }  
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(a[l], a[i]);
			permute(a, l + 1, r, len, answer);
      //рекурсия
			swap(a[l], a[i]);
		}
	}
  return answer;
}

int main()
{
  int n, fct;
  fct = 1;
  string s;
  string str = "";
  cin >> n;
  int answer = 0;
  for (int i = 1; i < n+1; i++) {
    s = to_string(i);
    str += s;
    fct *= i;
  } 
  cout << permute(str, 0, n-1, n, answer) << endl;
	return 0;
}