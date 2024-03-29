#include <iostream> //����������� ���������� �����-������
using namespace std; //������������ ���� std

//1. �������� �������, ������������ ������� �������������� ��������� ������������� �� ������� (return)
template <typename T> //����� ������� � �������� ���������� � ��� �������� ����� ������ � �������� ������� ����
double sred_ar(T arr[], int size)
//������� ������� �������� ��������������� ��������� ������� � ������������ ����� ������ ������ �� ���������� (�������)
{
	double sum = 0; //��������� ���������� ����� ��������� �������
	for (int i = 0; i < size; i++) //���� ������� ����� ��������� �������
	{
		sum += arr[i]; //����������� � ���������� ����� �������� �������� �������
	}
	return sum / size;
	/*������� ���������� ������� �������������� ��������� ������� (�� ����� �������� �� ������ �������
	(���������� ���������)*/
}

/*2. �������� �������, ������������ ���������� �������������, ������������� � ������� ��������� ������������� ��
������� (print)*/
template <typename T> //����� ������� � �������� ���������� � ��� �������� ����� ������ � �������� ������� ����
void num_sign(T arr[], int size)
/*������� ����������� ���������� �������������, ������� � ������������� ��������� ������� � ������������ �����
������ ������ �� ���������� (�������)*/
{
	int plus = 0, zero = 0, minus = 0; //��������� ���������� ���������� �������������, ������� � ������������� ��������� �������
	for (int i = 0; i < size; i++) //���� ����������� ��������������, �������� ��� �������������� �������� �������
	{
		if (arr[i] > 0) //���� ������� ������� �������������
		{
			plus++; //���������� ���������� ������������� ��������� ������� �� 1
		}
		else if (arr[i] == 0) //���� ������� ������� �������
		{
			zero++; //���������� ���������� ������� ��������� ������� �� 1
		}
		else //���� ������� ������� �������������
		{
			minus++; //���������� ���������� ������������� ��������� ������� �� 1
		}
	}
	cout << "���������� ������������� ��������� ������� = " << plus << ", ������� = " << zero << ", � ������������� = " << minus;
	//����� ���������� �������������, ������� � ������������� ��������� �������
}

//3. �������� �������, ������������ ������� � �������� (�������� � �����) ��������� ������������� �� ������� (print)
template <typename T> //����� ������� � �������� ���������� � ��� �������� ����� ������ � �������� ������� ����
void min_max(T arr[], int size)
//������� ����������� �������� � ��������� ��������� ������� � ������������ ����� ������ ������ �� ���������� (�������)
{
	int min = arr[0], max = arr[0], ind_min = 0, ind_max = 0;
	/*��������� ���������� �������� � ��������� ��������� ������� (� ���������� �� �������� ������� �������� �������
	��� ��������� ����� ��� ����������� ���������*/
	for (int i = 0; i < size; i++) //���� ������ �������� � ��������� ��������� �������
	{
		if (arr[i] < min) //���� ������� ������� ������ ��������� ��������
		{
			min = arr[i]; //���������� �������� ������ �������� (�������� �������)
			ind_min = i; //�������� ������� �������� �������
		}
		else if (arr[i] > max) //���� ������� ������� ������ ��������� ���������
		{
			max = arr[i]; //���������� ��������� ������ �������� (�������� �������)
			ind_max = i; //�������� ������� ��������� �������
		}
	}
	cout << "\n�������� ��������� ������� = " << max << " (����� " << ind_max + 1 << "), � ������� = " << min << " (����� " << ind_min + 1 << ")";
	//����� �������� ��������� � �������� ��������� ������� � �� ������� (������ + 1)
}

//4. �������� �������, ������������ ���������� ������� ����� � ������������ �� ������� (return)
template <typename T> //����� ������� � �������� ���������� � ��� �������� ����� ������ � �������� ������� ����
int plain_kol(T arr[], int size)
//������� ������� ���������� ������� ����� � ������� � ������������ ����� ������ ������ �� ���������� (�������)
{
	bool plainity; //��������� ���������� ����� (��)�������� �����
	int k = 0; //��������� ���������� ���������� ������� ��������� � �������
	for (int i = 0; i < size; i++) //���� ������ � ���������� �������
	{
		if (arr[i] > 1) //���� ����� ����� ���� �������, ��������� ����������� ��������
		{
			plainity = true; //���������� �������, ��� ����� �������� �������
			for (int j = 2; j < arr[i]; j++) //���� ������ ������ ��������� �����, ������ 1 � ���� ������
			{
				if (arr[i] % j == 0) //���� � ����� ���� ��������, ������ 1 � ���� ������
				{
					plainity = false; //�������� ����� ���������� �������� �������
					break; //����� �� �����
				}
			}
			if (plainity) //���� ����� �������� �������
			{
				k++; //��������� ���������� ������� ��������� ������� �� 1
			}
		}
	}
	return k; //������� ���������� ���������� ������� ��������� �������
}

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

//���������� ��� �������� ���� int � double
//1. ������� �������������� �������� ������������� ������� (return)
double SredAr(int arr[], int size) //������� ������� �������� ��������������� ������������� ������� ����� �����
//������� ������� �������� ��������������� ��������� ������� � ������������ ����� ������ ������ �� ���������� (�������)
{
	double sum = 0; //��������� ���������� ����� ��������� �������
	for (int i = 0; i < size; i++) //���� ������� ����� ��������� �������
	{
		sum += arr[i]; //����������� � ���������� ����� �������� �������� �������
	}
	return sum / size;
	/*������� ���������� ������� �������������� ��������� ������� (�� ����� �������� �� ������ �������
	(���������� ���������)*/
}
double SredAr(double arr[], int size)//������� ������� �������� ��������������� ������������� ������� ����������� �����
//������� ������� �������� ��������������� ��������� ������� � ������������ ����� ������ ������ �� ���������� (�������)
{
	double sum = 0; //��������� ���������� ����� ��������� �������
	for (int i = 0; i < size; i++) //���� ������� ����� ��������� �������
	{
		sum += arr[i]; //����������� � ���������� ����� �������� �������� �������
	}
	return sum / size;
	/*������� ���������� ������� �������������� ��������� ������� (�� ����� �������� �� ������ �������
	(���������� ���������)*/
}

//2. ����� ������� � ���������� �������� (return)
int FirstLast(int arr[], int size) //������� ������� ����� ������� � ���������� ��������� ������� ����� �����
{
	int sum = 0; //��������� ���������� ����� ������� � ���������� ��������� ������� ����� �����
	for (int i = 0; i < size; i++) //���� �������� ��������� ������� ����� �����
	{
		if (i == 0 || i == size - 1) //������� ������� � ���������� ��������� ������� ����� �����
		{
			sum += arr[i]; //����������� ������� ��� ���������� ��������� ������� ����� ����� � �����
		}
	}
	return sum; //������� ���������� �������� ����� ������� � ���������� ��������� ������� ����� �����
}
double FirstLast(double arr[], int size)
//������� ������� ����� ������� � ���������� ��������� ������� ����������� �����
{
	double sum = 0; //��������� ���������� ����� ������� � ���������� ��������� ������� ����������� �����
	for (int i = 0; i < size; i++) //���� �������� ��������� ������� ����������� �����
	{
		if (i == 0 || i == size - 1) //������� ������� � ���������� ��������� ������� ����������� �����
		{
			sum += arr[i]; //����������� ������� ��� ���������� ��������� ������� ����������� ����� � �����
		}
	}
	return sum; //������� ���������� �������� ����� ������� � ���������� ��������� ������� ����������� �����
}

int main() //������� ������� ���������, �� ��������� �����
{
	setlocale(0, "ru"); //����������� ���� ���������
	const int size = 10; //��������� ��������� ������� �������
	int arr[size] = { 1,5,7,3,5,87,23,-4,63,0 }; //��������� �������
	srand(time(0));
	//�������, ��������� ������� ������ ��� ��� ��������� ��������� �������� ����� �������������� ������ �����
	cout << "������ ����� ����� arr:\n";
	for (int i = 0; i < size; i++) //���� ��������� ��������� �������� ��������� ������� � ��������� �� -10 �� 10
	{
		arr[i] = rand() % 21 - 10; //��������� �������� ������� � ��������� �� -10 �� 10
		cout << arr[i] << "\t"; //����� �������� ������� � ��������� �� -10 �� 10
	}
	double ARR[size] = { -2.4, 45.3, 12.8, -3.9, 21, 5,0,37.1, 54.3, -76.7 };
	//��������� � ������������� ������� ����������� �����
	cout << "\n������ ����������� ����� ARR:\n";
	for (int i = 0; i < size; i++) //���� ������ ��������� ������� ����������� �����
	{
		cout << ARR[i] << "\t";
	}
	cout << "\n������� �������������� ��������� ������� ARR = " << sred_ar(ARR, size) << "\n";
	//����� ������� ������� �������� ��������������� ��������� ������� ����������� ����� � ����� ����������

	cout << "(int) ";
	num_sign(arr, size);
	//����� ������� ����������� ���������� �������������, ������� � ������������� ��������� ������� ����� �����

	char mass[size] = { 'v','W','23','f','U','q','t',';','/',']' }; //��������� � ������������� ������� ��������
	cout << "\n(char)";
	min_max(mass, size); //����� ������� ����������� �������� � ��������� ��������� �������

	cout << "\n���������� ������� ����� � ������� arr = " << plain_kol(arr, size);
	//����� ������� ������� ���������� ������� ����� � ������� � ����� � ����������, �������� � �������� ����� �����
	
	cout << "\n---------------------------------------------------------------------";
	cout << "\n---------------------------------------------------------------------\n";

	cout << "\n������� �������������� ��������� ������� ����� ����� = " << SredAr(arr, size);
	//����� ������� ������� �������� ��������������� ��������� ������� ����� ����� � ����� ����������
	cout << "\n������� �������������� ��������� ������� ����������� ����� = " << SredAr(ARR, size);
	//����� ������� ������� �������� ��������������� ��������� ������� ����������� ����� � ����� ����������

	cout << "\n����� ������� � ���������� ��������� ������� ����� ����� = " << FirstLast(arr, size);
	//����� ������� ������� ����� ������� � ���������� ��������� ������� ����� ����� � ����� ���������� � ������
	cout << "\n����� ������� � ���������� ��������� ������� ����������� ����� = " << FirstLast(ARR, size);
	//����� ������� ������� ����� ������� � ���������� ��������� ������� ����������� ����� � ����� ���������� � ������
}