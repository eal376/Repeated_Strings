// Elizabeth Pineda , Xavier Damas, Elizabeth Lujan

#include <iostream>
#include <string>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
	long count = 0;
	long num_loops = (n / s.length());

	for (long i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
		{
			count++;
		}
	}

	count = count * num_loops;

	long extra = n % s.length();

	if (extra != 0)
	{
		for (long i = 0; i < extra; i++)
		{
			if (s[i] == 'a')
			{
				count++;
			}
		}
	}

	return count;


}

int main()
{
	string s;
	cout << "enter a string to check for 'a'" << endl; 
	cin >> s; 

	long n;

	cout << "enter n number of times to repeat" << endl; 
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	long result = repeatedString(s, n);

	cout << result << "\n";


	return 0;
}
