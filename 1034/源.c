#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
//化最简
int do_1(long long* a,long long* b) {
	int m = abs(*a), n =abs( *b);
	if (m == 0)
		return 0;
	while (m>1&&n % m != 0)
	{
		int q = n % m;
		n = m;
		m = q;
	}
	*a /= m;
	*b /= m;
	return 0;
}
//输出
int do_2l(long long* m_b, int n) {
	if (n == 1)
	{
		printf("(");
	}
	if (m_b[0] != 0)
	{
		printf("%.0lld", m_b[0]);
		if (m_b[1] != 0)
			printf(" %.0lld/%.0lld", m_b[1], m_b[2]);
	}
	else
	{
		if (m_b[1] != 0)
			printf("%.0lld/%.0lld", m_b[1], m_b[2]);
		else printf("0");
	}
	if (n == 1)
	{
		printf(")");
	}
	return 0;
}
//标准化

int stdl(long long* m, long long* m_b)
{
	m_b[0] = m[0] / m[1];
	m_b[1] = m[0] % m[1];
	if (m_b[0] != 0)
		if (m_b[1] < 0)
			m_b[1] *= -1;
	m_b[2] = m[1];
	do_1(&m_b[1], &m_b[2]);
	return 0;
}
//输出2
int pril(long long* s, int* sign) {
	if (s[0] >= 0)
		sign[2] = 0;
	else {
		sign[2] = 1;
	}
	long long s_b[3];
	stdl(s, s_b);
	do_2l(s_b, sign[2]);
	printf("\n");
}
int main() {
	long long a[2], b[2];
	int sign[3];
	scanf("%lld/%lld %lld/%lld", &a[0], &a[1], &b[0], &b[1]);
	if ( a[1] < 0)
	{
		a[0] *= -1;
		a[1] *= -1;
	}
	if (b[1] < 0)
	{
		b[0] *= -1;
		b[1] *= -1;
	}
	if (a[0] >= 0)
		sign[0] = 0;
	else {
		sign[0] = 1;
	}
	if (b[0] >= 0)
		sign[1] = 0;
	else {
		sign[1] = 1;
	}
	long long m[2], n[2];
	memcpy(m, a, 2 * sizeof(long long));
	memcpy(n, b, 2 * sizeof(long long));
	long long m_b[3] = { 0 }, n_b[3] = { 0 };
	//化最简
	stdl(m, m_b);
	stdl(n, n_b);

	//加法
	do_2l(m_b, sign[0]);
	printf(" + ");
	do_2l(n_b, sign[1]);
	printf(" = ");
	long long sp[2];
	sp[0] = m[0] * n[1] + n[0] * m[1];
	sp[1] = n[1] * m[1];
	pril(sp, sign);
	//减法
	do_2l(m_b, sign[0]);
	printf(" - ");
	do_2l(n_b, sign[1]);
	printf(" = ");
	sp[0] = m[0] * n[1] - n[0] * m[1];
	sp[1] = n[1] * m[1];
	pril(sp, sign);
	//乘法
	do_2l(m_b, sign[0]);
	printf(" * ");
	do_2l(n_b, sign[1]);
	printf(" = ");
	
	sp[0] = m[0] * n[0];
	sp[1] = n[1] * m[1];
	pril(sp, sign);
	//除法
	do_2l(m_b, sign[0]);
	printf(" / ");
	do_2l(n_b, sign[1]);
	printf(" = ");
	if (n_b[0] == 0 && n_b[1] == 0) {
		printf("Inf");
	}
	else {
		
		sp[0] = m[0] * n[1];
		sp[1] = n[0] * m[1];
		if (sp[1]< 0)
		{
			sp[1] *= -1;
			sp[0] *= -1;
		}
		pril(sp, sign);
	}
}