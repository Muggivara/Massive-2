

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");			
	//�������� ���������, ���������� ���� ������ � ������ ��������� ������� : ������� ���������� ��������������� ��� ��������, 
	//������� 0, ����� ��������������� ��� ��������, ������ 0, � ����� ��������������� ��� ��������, ������� 0.

	/*const int SIZE = 20;
	int ar1[SIZE];
	int ar2[SIZE];
	int j = 0;
	for (int i = 0;i < SIZE;i++)
	{
		ar1[i] = rand() % 40 - 20;
	}
	for (int i = 0;i < SIZE;i++)
	{
		if (ar1[i] > 0)
		{
			ar2[j] = ar1[i];
			j++;
		}
	}
	for (int i = 0;i < SIZE;i++)
	{
		if (ar1[i] == 0)
		{
			ar2[j] = ar1[i];
			j++;
		}
	}
	for (int i = 0;i < SIZE;i++)
	{
		if (ar1[i] < 0)
		{
			ar2[j] = ar1[i];
			j++;
		}
	}
	for (int i = 0;i < SIZE;i++)
	    cout << ar1[i]<<" ";
	cout << "\n";
	for (int i = 0;i < SIZE;i++)
		cout << ar2[i] << " ";*/


	//���� 2 ������� ����������� M � N ��������������.���������� ���������� � ������ ������ ����� �������� ������ ���� ��������, ��� ����������.

	/*srand(time(0));		
	const int A = 20,
		B = 10,
		C = A > B ? B : A;
	int k = 0;
	int ar1[A];
	int ar2[B];
	int ar3[C];
	for (int i = 0; i < A; i++)
	{
		ar1[i] = rand() % 15;
	}
	for (int i = 0; i < B; i++)
	{
		ar2[i] = rand() % 20;
	}
	for (int i = 0;i < A;i++)
	{
		for (int j = 0;j < B;j++) 
		{
			if (ar1[i] ==ar2[j])
			{
				bool new_element = true;
				for (int a = 0; a < k; a++)
				{
					if (ar1[i] == ar2[a])
						new_element = false;
				}
				if (new_element)
				{
					ar3[k] = ar1[i];
					k++;
				}
			}
		}
	}

	cout << "������ �:\n";
	for (int i = 0; i < A; i++)
		cout << ar1[i] << "\t";

	cout << "\n������ B:\n";
	for (int i = 0; i < B; i++)
		cout <<ar2[i] << "\t";

	cout << "\n������ C:\n";
	for (int i = 0; i < k; i++)
		cout << ar3[i] << "\t";*/










	//���� 2 ������� ����������� M � N ��������������.
	//���������� ���������� � ������ ������ �� �������� ������� �������, 
	//������� ��� �� ������ �������, ��� ����������.


	/*srand(time(0));
	const int A = 20,
		B = 10,
		C = A > B ? A : B;
	int k = 0;
	int ar1[A];
	int ar2[B];
	int ar3[C];
	for (int i = 0; i < A; i++)
	{
		ar1[i] = rand() % 20;
	}
	for (int i = 0; i < B; i++)
	{
		ar2[i] = rand() % 20;
	}
	for (int i = 0;i < A;i++)
	{
		bool new_element = true;
		for (int j = 0;j < B;j++)
		{
			if (ar1[i] == ar2[j])
				new_element = false;
		}
		for (int a = 0; a < k; a++)
		{
			if (ar1[i] == ar3[a])
				new_element = false;
		}
		if (new_element)
		{
			ar3[k] = ar1[i];
			k++;
		}
	}
		
	cout << "������ �:\n";
	for (int i = 0; i < A; i++)
		cout << ar1[i] << "\t";

	cout << "\n������ B:\n";
	for (int i = 0; i < B; i++)
		cout << ar2[i] << "\t";

	cout << "\n������ C:\n";
	for (int i = 0; i < k; i++)
		cout << ar3[i] << "\t";*/
	




	//����������� ��������� - �������.��������� ���������� 5 ��������� ��������������� ����� � ��������� �� 1 �� 42, �� �� ���������� �� �� �����.
	//������������ �������� �� ������� � ������ ����� - �� ���� 5 ����� � ����������.��������� ����� �� ����������.
	//��������, ���� ������������ ������ ��� ����� - ���� 100 ��������, ���� 4 - 500 ��������, ���� 5 � 2500 ��������.
	//� � �����, ������ ����������� ����, ��� ������������ ������� ��� 5 ����� ?



	/*int x;
	int y;
	int r;
	int f;
	int t;
	cin >> x >> y >> r >> f >> t;
	int w = 0;
	int prize = 0;
	const int SIZE = 5;
	int ar[SIZE];
	for (int i = 0;i < SIZE;i++)
	{
		ar[i] = rand() % 43;
	}
	for (int i = 0;i < SIZE;i++)
	{	
		if (x == ar[i] || y == ar[i] || r == ar[i] || f == ar[i] || t == ar[i])
		{
			w++;
		}
	}
	if (w == 1) 
	{
		cout << "One coincidence";
	}
	else if (w == 2) 
	{
		cout << "Two coincidence";
	}
	else if (w == 3) 
	{
		prize += 100;
		cout << "Three coincidence.You have won " << prize;
	}
	else if (w == 4) 
	{
		prize += 500;
		cout << "Four coincidence.You have won " << prize;
	}
	else if (w == 5)
	{
		prize += 2500;
		cout << "Five coincidence.You have won " << prize;
	}*/



//������� ������ �� 20 ��������� ����� � ��������� �� - 10 �� 20.
//���������� ������������ ���������� ������ ������ ������������� ���������, 
//�� ����������� �� ������, �� �������������� �������.
//������� ��������� ��������.

    const int A = 20;
    int mass[A];
    
    srand(time(0));
    
    for (int i = 0; i < A; i++)
    	mass[i] = rand() % 31 - 10;
    
    int max = 0,
    n = 0;
    
    for (int i = 0; i < A; i++)
    {
    	if (mass[i] > 0) n++;
    	else n = 0;
    	if (n > max) max = n;
    }
    int mass1[A],
    j = 0;
	for (int i = 0; i < A; i++)
	{
		if (mass[i] <= 0) j = 0;
    	else
    	{
			mass1[j] = mass[i];
    		j++;
    	}
    	if (j == max) break;
    }
    
    cout << "������ � ��������� �� -10 �� 20 :\n";
    for (int i = 0; i < A; i++)
		cout << mass[i] << "\t";
    
    cout << "\n\n������������ ���������� ������ ������ ������������� ���������: " << max << "\n\n";
    cout << "���� ��������:\n";
    for (int i = 0; i < max; i++)
    	cout << mass1[i] << "\t";
    cout << "\n\n";

	
	



























}
