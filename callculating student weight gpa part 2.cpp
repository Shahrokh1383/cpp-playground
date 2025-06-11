//callculating student weight gpa part 2
#include <iostream>
using namespace std;
float findmax(float g[] , int n)
{
	float max = g[0];
	for (int i = 0; i < n; i++)
	{
		if (max < g[i])
		{
			max = g[i];
		}
	}
	return max;
}
float most_impatful_grade(float g[], int w[], int n)
{
	float mig = g[0] * w[0];
	for (int i = 0; i < n; i++)
	{
		if (g[i] * w[i] > mig)
		{
			mig = g[i] * w[i];
		}
	}
	return mig;
}
int main()
{
	float g[5];
	int w[5];
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "_enter the grade : ";
		cin >> g[i];
		cout << i + 1 << "_enter the units of the lesson : ";
		cin >> w[i];
	}

	//callculate the gpa
	float sum_g = 0, sum_w = 0;
	for (int i = 0; i < 5; i++)
	{
		sum_g += g[i] * w[i];
		sum_w += w[i];
	}

	float gpa = sum_g / sum_w;
	//finding the maximum grade
	float hihest_grade = findmax(g , 5);
	//finding the impactful grade
	float impactgrade = most_impatful_grade(g, w, 5);


	//the resutl
	cout << "GPA : " << gpa<<'\n';
	cout << "Maximum grade : " << hihest_grade<<'\n';
	cout << "Impactful grade : " << impactgrade;
	return 0;
}
