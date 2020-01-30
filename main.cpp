#include <cstdio>

using namespace std;
int ch[10];
int main()
{
   freopen("inp.txt","rt",stdin);
   int i,digit, max = -1,res;
   char a[101];
   scanf("%s",&a);  /*a라는 배열에
   하나씩 문자가 들어감
   */
   for(i= 0; a[i]!='\0';i++)
   {
       digit = a[i]-48;/*실제 숫자화*/
       ch[digit]++;
   }

   for(i=0; i<=9;i++)
   {
       if(ch[i]>=max)/*뒤로 가기때문에 자연스럽게 큰 거 */
        {
            max = ch[i];
            res=i;/*실제 답*/
        }

   }
   printf("%d\n",res);
  return 0;
}
