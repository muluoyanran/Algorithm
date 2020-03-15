//#include <iostream>
//#include <fstream>
//#include <algorithm>
//using namespace std;
//
///*
//���Ƚ��������ֹʱ��Ǽ�������
//p(i, d)��ʾ������1,2..i����ֹʱ��Ϊd����С��ʱ�ͷ�
//p(i, d) = min{ p(i-1, d)+wi,  p(i-1, min{d, di}-ti) }
//p(1, d) = 0  t1<=d
//p(1, d) = w1  t1>d
//*/
//const int INF = 100000;
//const int MAX = 50;
//int p[MAX][200];
//
//struct Task
//{
//	int t; //���������Ҫ��ʱ��
//	int d; //��ֹʱ��
//	int w; //��ʱ�ͷ�
//
//	bool operator < (const Task& ta) const
//	{
//		return d < ta.d;
//	}
//};
//
//Task task[MAX];
//
////
//int greedy(int n)
//{
//	sort(task, task + n);  //����ֹʱ������
//	int d = task[n - 1].d; //����ֹʱ��
//	int i, j;
//	//for(i=0; i<n; i++)
//		//for(j=0; j<=d; j++)
//			//p[i][j] = INF;
//
//	for (i = 0; i <= d; i++)
//		if (i > task[0].t)
//			p[0][i] = 0;
//		else
//			p[0][i] = task[0].w;
//
//	for (i = 1; i < n; i++)
//		for (j = 0; j <= d; j++)
//		{
//			p[i][j] = p[i - 1][j] + task[i].w;
//			int jj = task[i].d > j ? j : task[i].d;
//			if (jj >= task[i].t && p[i][j] > p[i - 1][jj - task[i].t])
//				p[i][j] = p[i - 1][jj - task[i].t];
//		}
//
//	return p[n - 1][d];
//}
//
//int main()
//{
//	cout << "������������";
//	int n;
//	cin >> n;
//	cout << "\n�������������Ҫ��ʱ�䣬��ֹʱ�䣬��ʱ�ͷ���\n";
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		cin >> task[i].t >> task[i].d >> task[i].w;
//	}
//
//	cout << "��С��ʱ�ͷ�Ϊ��" << greedy(n);
//	cout << endl;
//	return 0;
//}
