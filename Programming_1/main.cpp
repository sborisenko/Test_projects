#include <iostream>


using namespace std;


int main()
{
	int num_1, num_2, num_3;

	cout << "Enter 3 different numbers separated by a space: \n";

	cin >> num_1 >> num_2 >> num_3;

	int max, middle, min = 0;

	if ((num_1 > num_2) && (num_1 > num_3))
	{
		max = num_1;
		if (num_2 > num_3) 
		{
			middle = num_2;
			min = num_3;
		}
		else
		{
			middle = num_3;
			min = num_2;
		}
	}
	else if ((num_2 > num_1) && (num_2 > num_3))
	{
		max = num_2;
		if (num_1 > num_3)
		{
			middle = num_1;
			min = num_3;
		}
		else
		{
			middle = num_3;
			min = num_1;
		}
	}
	else 
	{
		max = num_3;
		if (num_1 > num_2)
		{
			middle = num_1;
			min = num_2;
		}
		else
		{
			middle = num_2;
			min = num_1;
		}
	}


	cout << min << " " << middle << " " << max << "\n";
	
	system("pause");

}

