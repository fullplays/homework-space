#include<iostream>
using namespace std;

void transpose(int *m, int r, int c)
{
	for (int i = 0; i<c; i++)
	{
		for (int j = 0; j<r; j++)
		{
			cout << *(m + i + j*c) << " ";
		}
		cout << endl;
	}
}

int main()
{
	int row, col;
	int *mat = 0;
	cout << "����������������:" << endl;
	cin >> row >> col;
	cout << "���������Ԫ��" << endl;
	mat = new int[row*col];
	if (mat != 0)
	{
		for (int i = 0; i<row; i++)
		{
			
			for (int j = 0; j<col; j++)
			{
				cout <<"�������"<<i+1<<"�е�"<< j+1<< "��Ԫ��" << endl;
				cin >> *(mat + i*col + j);
			}
		}
		transpose(mat, row, col);
		system("pause");
		delete[] mat;
	}
	else
	{
		cout << "�������";
	};
	return 0;
}

