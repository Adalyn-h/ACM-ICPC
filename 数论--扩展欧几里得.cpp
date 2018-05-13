数论--扩展欧几里德：
存在一对整数(x,y)使得 xa + yb = gcd(a,b).


1.最小公约数
推导：

xa + yb = c;
a - b = kc;（k为整数）
a%(a-b)==0, b%(a-b)==0.

递归代码实现：

int gcd(int a,int b)
{
     return a%b==0 ? b: gcd(b,a%b);
}

2.最小公倍数
推导：

xa yb c d
d = k - c;（k为整数）
k = lcm(a/c, b/c);
d = lcm(a,b);

结论：cd = ab；