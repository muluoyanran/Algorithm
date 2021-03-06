﻿////«问题描述：
////设 n 是一个正整数。现在要求将 n 分解为若干个自然数的和，且使这些自然数的乘积最大。
////
////«编程任务：
////对于给定的正整数n，编程计算最优分解方案
////
//// p(n) 为 n 的最大分解积, 假设对应的最优分解是 n = sum(A), A = {a1, a2, a3, ...}, p(n) = multiply(A)
////
//// 命题1：对 a, b > 1, 有 a * b >= a + b
////     证明：不妨设 a <= b.
////           a * b = b(a - 1) + b >= a(a-1) + b
////           因为 a > 1, a是自然数，所以 a - 1 >= 1，所以a(a-1) + b >= a + b，命题1为真
////
////
//// 命题2（贪心选择性质）：如果p(n) 是最优解， n = sum(A), 则可以贪心选择为ai = 2 or 3.
////     证明：不妨假设ai = a + b. 由命题1得 p'(n) = mul(A-{ai}) * a * b >= mul(A-{ai}) * ai = p(n)
////           因为p(n)为最优，所以 p'(n) = p(n). 以此类推可递归得命题2正确。
////     另：由 f(x) = n^x 的微分性质得优先选择3.
////
//// 命题3（最优子结构性质）：p(n) 最优 <=> p(n-2) or p(n-3)最优
////     证明：假设存在更优解 p'(n-2) > p(n-2). 则 p'(n-2) * 2 > p(n) ，矛盾，舍去。同理可证p(n-3)得最优性。
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int bestDivide(int n)
//{
//	int mod = n % 3;
//	int n2;
//	int n3;
//
//	if (n == 1)
//		return 1;
//
//	if (mod == 0) { n2 = 1; n3 = n / 3; }
//	if (mod == 1) { n2 = 4; n3 = n / 3 - 1; }
//	if (mod == 2) { n2 = 2; n3 = n / 3; }
//
//	return n2 * pow(3,n3);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << bestDivide(n);
//	return 0;
//}
