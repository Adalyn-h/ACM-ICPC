����--��չŷ����£�
����һ������(x,y)ʹ�� xa + yb = gcd(a,b).


1.��С��Լ��
�Ƶ���

xa + yb = c;
a - b = kc;��kΪ������
a%(a-b)==0, b%(a-b)==0.

�ݹ����ʵ�֣�

int gcd(int a,int b)
{
     return a%b==0 ? b: gcd(b,a%b);
}

2.��С������
�Ƶ���

xa yb c d
d = k - c;��kΪ������
k = lcm(a/c, b/c);
d = lcm(a,b);

���ۣ�cd = ab��