#include <iostream>
#include<vector>
using namespace std;

int main()
{
	int first[8] = {-15, -11, -4, -2, -1, 0, 3, 10 };
	vector<int> a(first, first + 8);
	vector<int> b;
	int i;
	for (i = 0; i < a.size(); i++)
	{
		if (a[i] >= 0)
		{
			break;
		}
	}
	int j = i - 1;
	for (int k = 0; k < a.size(); k++)
	{
		if (i<a.size() &&(j==-1 || abs(a[i]) <= abs(a[j])))
		{
			b.push_back(a[i]*a[i]);
			i = i + 1;
		}
		else
		{
			b.push_back(a[j] * a[j]);
			j = j - 1;
		}
		cout << b[k] << endl;
	}
	getchar();
	getchar();
}