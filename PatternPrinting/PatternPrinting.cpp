#include<iostream>

using namespace std;

/*

*
* *
* * *
* * * *

*/
void TopRight(int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

      *
    * *
  * * *
* * * *

*/
void TopLeft(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << string((n-i) * 2, ' ');
		for (int j = 0; j < i; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

* * * *
  * * *
    * *
      *

*/
void BottomLeft(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << string((2*i)-2, ' ');
		for (int j = 0; j<=n-i; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

* * * *
* * *
* * 
*

*/
void BottomRight(int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - i; j > 0; --j)
		{
			cout << "* ";
		}
		cout << endl;
	}
}

/*

   *
  * *
 * * *
* * * *

*/
void Triangle(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << string((n - i), ' ');
		for (int j = 1; j <= i; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

* * * *
 * * *
  * *
   *

*/
void ReverseTriangle(int n)
{
	for (int i = n; i > 0; --i)
	{
		cout << string(n - i, ' ');
		for (int j = 1; j <= i; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

   *
  * *
 * * *
* * * *
 * * *
  * *
   *

*/
void Pyramid(int n)
{
	Triangle(n);
	for (int i = n - 1; i > 0; --i)
	{
		cout << string(n - i, ' ');
		for (int j = 1; j <= i; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

*
* *
* * *
* * * *
* * *
* *
*

*/
void HalfPyramid(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << "* ";
		cout << endl;
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = n - i; j > 0; --j)
			cout << "* ";
		cout << endl;
	}
}

/*

**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****

*/
void InverseDiamondPattern(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << string(n - i + 1, '*');
		cout << string(2 * i - 1, ' ');
		cout << string(n - i + 1, '*');
		cout << endl;
	}
	for (int i = 1; i < n; ++i)
	{
		cout << string(i + 1, '*');
		cout << string(2 * (n - i) - 1, ' ');
		cout << string(i + 1, '*');
		cout << endl;
	}
}

/*

1     4
2     3
3     2
4 3 2 1
3     2
2     3
1     4

*/
void HPattern(int n)
{
	int x1 = n;
	int x2 = 1;
	int space = n % 2 == 0 ? n + 1 : n;
	for (int i = 1; i < n; ++i)
	{
		cout << x2++;
		cout << string(space, ' ');
		cout << x1--;
		cout << endl;
	}
	for (int i = n; i > 0; --i)
		cout << i << " ";
	cout << endl;
	for (int i = 1; i < n; ++i)
	{
		cout << --x2;
		cout << string(space, ' ');
		cout << ++x1;
		cout << endl;
	}
}

/*

1
2 2
3 3 3
4 4 4 4

*/
void NumberPattern(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << i << " ";
		cout << endl;
	}
}

/*

1
2 3
4 5 6
7 8 9 10

*/
void NumberPatternWithoutReassigning(int n)
{
	int t = 1;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << t++ << " ";
		cout << endl;
	}
}

/*

1
1 2
1 2 3
1 2 3 4

*/
void NumberPattern2(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << j << " ";
		cout << endl;
	}
}

/*

1
1 2
1 2 3
1 2 3 4
1 2 3
1 2
1

*/
void NumberPattern2Extended(int n)
{
	NumberPattern2(n);
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j <= n - i; ++j)
			cout << j << " ";
		cout << endl;
	}
}

/*

A
B B
C C C
D D D D

*/
void CharacterPattern(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << static_cast<char>(65 + i - 1) << " ";
		cout << endl;
	}
}

/*

A
B C
D E F
G H I J

*/
void ContinuousCharacterPattern(int n)
{
	int t = 0;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
			cout << static_cast<char>(65 + (t++)) << " ";
		cout << endl;
	}
}

/*

   1
  212
 32123
4321234
 32123
  212
   1

 */
void NumberDiamond(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << string(n - i, ' ');
		int t = i; int k;
		for (int j = 0; j < 2*i-1; ++j)
		{
			if (t > 0)
			{
				k = t;
				cout << t--;
			}
			else
				cout << ++k;
		}
		cout << endl;
	}

	for (int i = 1; i < n; ++i)
	{
		cout << string(i, ' ');
		int t = n - i;
		int k;
		for (int j = 0; j < 2 * (n - i) - 1; ++j)
		{
			if (t > 0)
			{
				k = t;
				cout << t--;
			}
			else
				cout << ++k;
		}
		cout << endl;
	}
}

/*

3*3*3
2*2
1
1
2*2
3*3*3

*/
void HalfDiamondNumber(int n)
{
	int x = n / 2;
	bool dec = true;
	int m = n - 1;
	for (int i = 1; i <= n; ++i)
	{
		if (dec)
		{
			for (int j = m; j > 0; --j)
			{
				if (j % 2 != 0)
					cout << x;
				else
					cout << "*";
			}
			--x;
			m -= 2;
			if (x == 0)
			{
				dec = false;
				++x;
				m+=2;
			}
		}
		else
		{
			for (int j = 0; j < m; ++j)
			{
				if (j % 2 == 0)
					cout << x;
				else
					cout << "*";
			}
			++x;
			m += 2;
		}
		cout << endl;
	}
}

/*

   A1
  AB12
 ABC123
ABCD1234

*/
void AplhaNumPattern(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		cout << string(n - i, ' ');
		int x = 0;
		for (int j = 1; j <= i; ++j)
			cout << static_cast<char>(65 + (x++));
		x = 0;
		for (int j = 1; j <= i; ++j)
			cout << ++x;
		cout << endl;
	}
}

/*

	1
	3*2
	4*5*6
	10*9*8*7
	11*12*13*14*15

*/
void ZigzagNumPattern(int n)
{
	int x = 0;
	int t = 1;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
		{
			for (int j = 1; j <= 2*i-1; ++j)
			{
				if (j % 2 != 0)
					cout << ++x;
				else
					cout << "*";
			}
		}
		else
		{
			t = x + i;
			x = t;
			for (int j = 2*i-1; j > 0; --j)
			{
				if (j % 2 != 0)
					cout << t--;
				else
					cout << "*";
			}
		}
		cout << endl;
	}
}

/*

	*
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * *       * * *
* * *       * * *
* * *       * * *

*/
void HutStarPattern(int n)
{
	int t = 0;
	for (int i = 1; i <= n; ++i)
	{
		cout << string(2 * (n - i), ' ');
		for (int j = 1; j <= 2 * i - 1; ++j)
			cout << "* ";
		cout << endl;
		t = 2 * i - 1;
		t = 2 * t - 1;
	}
	for (int i = 1; i <= 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cout << "* ";
		cout << string(t - 11, ' ');
		for (int j = 0; j < 3; ++j)
			cout << "* ";
		cout << endl;
	}
}

/*

 ******
 *     *
 *     *
 *     *
 *     *
 *     *
 *     *
 *     *
 ******

*/
void DPattern(int n)
{
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1 || i == n)
			cout << string(6, '*');
		else
		{
			cout << "*";
			cout << string(5, ' ');
			cout << "*";
		}
		cout << endl;
	}
}

// Main Method
int main()
{
	DPattern(7);
	return 0;
}