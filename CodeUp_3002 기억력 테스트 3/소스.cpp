#include <iostream>
#include <vector>
#include <algorithm>
#define ULL unsigned long long
#define MAX 1000000
using namespace std;

ULL arr[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		ULL t;
		int left = 0, right = n, mid = n;
		cin >> t;
		while (left < right)
		{
			mid = (left + right) / 2;
			if (arr[mid] < t)
				left = mid + 1;
			else
				right = mid;
		}
		if (right >= 0 && arr[right] != t)
			cout << -1 << ' ';
		else
			cout << right + 1 << ' ';
	}

	return 0;
}