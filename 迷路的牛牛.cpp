////��������:
////ÿ���������һ������������
////ÿ�����������ĵ�һ�а���һ������������ʾת����Ĵ���N(N <= 1000)��
////��������һ�а���һ������ΪN���ַ�������L��R��ɣ�L��ʾ����ת��R��ʾ����ת��
////������� :
////���ţţ�������ķ���N��ʾ����S��ʾ�ϣ�E��ʾ����W��ʾ����
//#include <iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	char turn;
//	int offset = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> turn;
//		if (turn == 'L')
//			--offset;
//		else
//			++offset;
//	}
//	offset %= 4;
//	if (offset < 0)
//		offset += 4;
//	switch (offset)
//	{
//	case 1:cout << 'E'; break;
//	case 2:cout << 'S'; break;
//	case 3:cout << 'W'; break;
//	default:cout << 'N';
//	}
//}