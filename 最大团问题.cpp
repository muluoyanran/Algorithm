//# include <iostream>
//# include <string>
//# include <queue>
//using namespace std;
//struct bbnode //����һ���Ӽ�����LChild����ǰ�Ĳ��������ӻ����Һ���
//{ //���Ӵ���Ҫ����㣬�Һ��Ӵ���Ҫ��parent�����׽ڵ�
//	bbnode* parent;
//	bool LChild;
//};
//struct CliqueNode //�������ȶ�������ΪCliqueNode
//{
//	int cn, un, level; //�ֱ��ǵ�ǰ�Ŷ���������󶥵��Ͻ磬�����ڵĲ��
//	bbnode* ptr; //��¼�õ����������ӻ����Һ��ӣ���ĸ��˭
//	bool operator<(const CliqueNode& a) const //<�����ؽ��������
//	{
//		if (a.un > un) return true;
//		if (a.un == un && a.cn > cn) return true;
//		else return false;
//	}
//};
//int G[101][101]; //����ͼ
//bool bestx[101]; //��¼����ŵ����
//void init(int n) //����
//{
//	int i, j;
//	memset(G, 1, sizeof(G));
//	memset(bestx, false, sizeof(bestx));
//	for (i = 1; i <= n; i++)
//		for (j = 1; j <= n; j++)
//			scanf("%d", &G[i][j]);
//}
//int work(int n)
//{
//	bbnode* E = new(bbnode); //����E�����¼�Ķ������
//	int i = 1, j, cn = 0, bestn = 0; //cn����ǰ�⣬bestn�������Ž�
//	bool OK; //�ڱ����ж��¼���ĵ��Ƿ����������
//	priority_queue<CliqueNode> Q; //�������ȶ���Q
//	E->LChild = false; //��ʼ��
//	E->parent = NULL;
//	while (i != n + 1)
//	{
//		OK = true;
//		bbnode* B = E; //�ѵ�ǰ������ݸ�B��BΪ�м����
//		for (j = i - 1; j > 0; B = B->parent, j--)
//			if (B->LChild && G[i][j] == 0) //����������ֹͣ
//			{
//				OK = false;
//				break;
//			}
//		if (OK) //��������
//		{
//			CliqueNode* C = new(CliqueNode); //����һ���ڵ�C
//			C->ptr = new(bbnode);
//			if (cn + 1 > bestn) bestn = cn + 1; //�����ǰ��+1�������Ž�
//			C->cn = cn + 1; //��������
//			C->level = i + 1;
//			C->ptr->LChild = true;
//			C->ptr->parent = E;
//			C->un = cn + 1 + n - i;
//			Q.push(*C); //������
//		}
//		if (cn + n - i >= bestn) //�������������ǻ��ǿ��������Ž�
//		{
//			CliqueNode* C = new(CliqueNode); //����һ���ڵ�C
//			C->ptr = new(bbnode);
//			C->cn = cn; //��������
//			C->level = i + 1;
//			C->ptr->LChild = false;
//			C->ptr->parent = E;
//			C->un = cn + n - i;
//			Q.push(*C); //������
//		}
//		CliqueNode N;
//		N = Q.top(); //ȡ�Ӷ�Ԫ�أ�����
//		Q.pop(); //ɾ���Ӷ�Ԫ��
//		E = N.ptr; //��¼��ǰ�ŵ���Ϣ
//		cn = N.cn; //��¼��ǰ�ŵĶ�����
//		i = N.level; //���ڵĲ��
//	}
//	for (j = n; j > 0; j--) //�������Ž�
//	{
//		bestx[j] = E->LChild;
//		E = E->parent;
//	}
//	return bestn;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		init(n);
//		int ans = work(n);
//		printf("%d\n", ans);
//		for (int i = n; i > 0; i--)
//			if (bestx[i] == true)
//				printf("%d ", i);
//		putchar(10);
//	}
//	return 0;
//}
///*
//5
//0 1 0 1 1
//1 0 1 0 1
//0 1 0 0 1
//1 0 0 0 1
//1 1 1 1 0
//*/