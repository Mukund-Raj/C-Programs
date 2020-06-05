#include <string.h>
#include <iostream>
using namespace std;

#define d 10

void rabinKarp(char pattern[], char text[], int q)
{
	int count = 0;
	
	int m = strlen(pattern);
	int n = strlen(text);
	int i, j;
	int p = 0;
	int t = 0;
	int h = 1;

	cout<<"m "<<m<<endl;
	cout<<"n "<<n<<endl;
	
	
	for (i = 0; i < m - 1; i++)
		h = (h * d) % q;
	
	cout<<"h: "<<h<<endl;

	for (i = 0; i < m; i++)
	{
		p = (d * p + pattern[i]) % q;
		t = (d * t + text[i]) % q;
	}

	cout<<"p:  "<<p<<"  t: "<<t<<endl;
	
	
	for (i = 0; i <= n - m; i++)
	{
		if (p == t)
		{
			for (j = 0; j < m; j++)
			{
				if (text[i + j] != pattern[j])
					break;
			}

			if (j == m)
			{
				cout << "Pattern found at index " << i + 1 << endl;
				
			}
			else
			{
				cout<<"\n spurious hit at "<<i+1;
			}
		}

		if (i < n - m)
		{
			t = (d * (t - text[i] * h) + text[i + m]) % q;

			if (t < 0)
				t = (t + q);
		}
		cout<<"\nin loop value t is: "<<t<<endl;
	}
}

int main()
{
	char text[] = "2359023141526739921";
	char pattern[] = "31415";
	int q = 17;
	rabinKarp(pattern, text, q);
}
