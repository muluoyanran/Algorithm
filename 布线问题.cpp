////����Ҫ��һ��Ԫ����װ��һ����·���ϣ�Ϊ����Ҫ���һ����·�岼�߷�����
////��Ԫ���������������߾��� conn ������
////Ԫ�� i ��Ԫ�� j ֮���������Ϊ conn(i, j)��
////�����Ԫ�� i ��װ����·����λ�� r ��������Ԫ�� j ��װ����·����λ�� s ����
////��Ԫ�� i ��Ԫ�� j ֮��ľ���Ϊ dist(r, s)��
////ȷ���������� n ��Ԫ���İ�װλ�ã���ȷ����һ�����߷�������˲��߷�����Ӧ�Ĳ��߳ɱ�Ϊ��
////sum(1<=i<j<=n) {conn(i,j) * dist(r,s)}
////�����һ���㷨�ҳ����� n ��Ԫ���Ĳ��߳ɱ���С�Ĳ��߷��� ��
////���һ���㷨�����ڸ����� n ��Ԫ����������Ѳ��߷�����ʹ���߷��ôﵽ��С��
//
//#include <iostream>
//using namespace std;
//
//int cost(int pos, int conn[][20], int PCB[]) 
//{
//	int curCost = 0, dist;
//	for (register int i = 0; i < pos; i++) {
//		for (register int j = i + 1; j <= pos; j++) {
//			dist = PCB[i] > PCB[j] ? PCB[i] - PCB[j] : PCB[j] - PCB[i];
//			curCost += dist * conn[i][j];
//		}
//	}
//	return curCost;
//}
//
//void dfs(int pos,int preCost,int *minCost, int PCB[], int n, int conn[][20], int finalPCB[])
//{
//	int curCost;
//	if (pos == n - 1)
//	{   // save and exit
//		curCost = cost(pos, conn, PCB);
//		if (curCost < *minCost)
//		{
//			*minCost = curCost;
//			for (int i = 0; i < n; ++i)
//				finalPCB[i] = PCB[i];
//		}
//		return;
//	}
//
//	for (int i = pos; i < n; ++i)
//	{
//		swap(PCB[pos], PCB[i]);
//		curCost = cost(pos, conn, PCB);
//		if (curCost < *minCost)
//			dfs(pos + 1, curCost, minCost, PCB, n, conn, finalPCB);
//		swap(PCB[pos], PCB[i]);
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int conn[20][20] = { 0 };
//	bool notused[20] = { true };
//	int PCB[20];
//	int finalPCB[20];
//	int minCost = 10000000;
//
//	// input and init
//	for (int i = 0; i <= n - 1; ++i)
//	{
//		for (int j = i + 1; j <= n - 1; ++j)
//		{
//			cin >> conn[i][j];
//			conn[j][i] = conn[i][j];
//		}
//		PCB[i] = i;
//		conn[i][i] = 0;
//	}
//
//	dfs(0, 0, &minCost, PCB, n, conn, finalPCB);
//	cout << minCost << endl;
//	cout << finalPCB[0] + 1;
//	for (int i = 1; i < n; ++i)
//		cout << ' ' << finalPCB[i] + 1;
//	cout << endl;
//	return 0;
//}
