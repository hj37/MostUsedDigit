#include <cstdio>

using namespace std;
int ch[10];
int main()
{
   freopen("inp.txt","rt",stdin);
   int i,digit, max = -1,res;
   char a[101];
   scanf("%s",&a);  /*a��� �迭��
   �ϳ��� ���ڰ� ��
   */
   for(i= 0; a[i]!='\0';i++)
   {
       digit = a[i]-48;/*���� ����ȭ*/
       ch[digit]++;
   }

   for(i=0; i<=9;i++)
   {
       if(ch[i]>=max)/*�ڷ� ���⶧���� �ڿ������� ū �� */
        {
            max = ch[i];
            res=i;/*���� ��*/
        }

   }
   printf("%d\n",res);
  return 0;
}
