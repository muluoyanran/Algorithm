////��������ĸ�� = { a,b,c }�ĳ˷������£�
////
////           a        b       c
////       |_____________________
////  a    |   b        b       a
////       |
////  b    |   c        b       a
////       |
////  c    |   a        c       c
////
////���˳˷�������һ������ó˷����ϵ��ַ������ʵ������ź�õ�һ�����ʽ�����磬�����ַ���x = bbbba������һ�����ű��ʽΪ
////
////(b(bb)(ba))�����˷����ñ��ʽ��ֵΪa�������һ����̬�滮�㷨������һ�����ڳ˷����ϵ��ַ���x = x1....xn�������ж����ֲ�ͬ��
////
////�����ŷ�ʽ��ʹ����x�����ļ����ű��ʽ��ֵΪa��
////
////�㷨��ƣ����ڸ������ַ���x = x1....xn�������ж����ֲ�ͬ�ļ����ŷ�ʽ��ʹ��x�����ļ����ű��ʽֵΪa��
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int map(int ch)
//{
//	switch (ch)
//	{
//	case 'a':return 0;
//	case 'b':return 1;
//	case 'c':return 2;
//	}
//}
//
//int main()
//{
//	int mul[3][3] = { {1,1,0},{2,1,0},{0,2,2} };
//	int str[255];
//	int ways[255][255][3];
//	int a = 0, b = 1, c = 2;
//	/*
//	 ways[i][j][a] = way of str[i:j] as 'a'.
//
//	 ways[i][j][a] = sum( ways[i][k][a] * ways[k+1][j][c]
//	                    + ways[i][k][b] * ways[k+1][j][c]
//	                    + ways[i][k][c] * ways[k+1][j][a] )
//	 
//   ways[i][j][b] = sum( ways[i][k][a] * ways[k+1][j][a]
//	                    + ways[i][k][a] * ways[k+1][j][b]
//	                    + ways[i][k][b] * ways[k+1][j][b] )
//
//	 ways[i][j][c] = sum( ways[i][k][b] * ways[k+1][j][a]
//	                    + ways[i][k][c] * ways[k+1][j][b]
//	                    + ways[i][k][c] * ways[k+1][j][c] )
//	*/
//
//	string input;
//	cin >> input;
//	int n = input.length();
//
//	for (int i = 1; i <= n; ++i)
//	{
//		str[i] = map(input[i-1]);
//		ways[i][i][a] = str[i] == a;
//		ways[i][i][b] = str[i] == b;
//		ways[i][i][c] = str[i] == c;
//	}
//
//	for (int step = 1; step <= n - 1; ++step)
//	{
//		for (int i = 1; i + step <= n; ++i)
//		{
//			int j = i + step;
//			int maxa = 0, maxb=0, maxc=0;
//			for (int k = i; k < j; ++k)
//			{
//			   /*ways[i][j][a] = sum( ways[i][k][a] * ways[k+1][j][c]
//									+ ways[i][k][b] * ways[k+1][j][c]
//									+ ways[i][k][c] * ways[k+1][j][a] )*/
//				int cura = ways[i][k][a] * ways[k + 1][j][c]
//					     + ways[i][k][b] * ways[k + 1][j][c]
//					     + ways[i][k][c] * ways[k + 1][j][a];
//
//			   /*ways[i][j][b] = sum(ways[i][k][a] * ways[k + 1][j][a]
//								   + ways[i][k][a] * ways[k + 1][j][b]
//			   					   + ways[i][k][b] * ways[k + 1][j][b] )*/
//				int curb = ways[i][k][a] * ways[k + 1][j][a]
//					     + ways[i][k][a] * ways[k + 1][j][b]
//					     + ways[i][k][b] * ways[k + 1][j][b];
//
//			   /*ways[i][j][c] = sum( ways[i][k][b] * ways[k+1][j][a]
//									+ ways[i][k][c] * ways[k+1][j][b]
//									+ ways[i][k][c] * ways[k+1][j][c] )*/
//				int curc = ways[i][k][b] * ways[k + 1][j][a]
//					     + ways[i][k][c] * ways[k + 1][j][b]
//					     + ways[i][k][c] * ways[k + 1][j][c];
//				maxa += cura;
//
//				maxb += curb;
//
//				maxc += curc;
//			}
//			ways[i][j][a] = maxa;
//			ways[i][j][b] = maxb;
//			ways[i][j][c] = maxc;
//		}
//	}
//
//	cout << ways[1][n][a] << endl;
//	return 0;
//}