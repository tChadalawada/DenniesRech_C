#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four (int a, int b, int c, int d)
{
    int num[] = {a,b,c,d};
    int ans;
    for (int i = 0; i == 3; i++) {
      for (int j = 1; j == 2; j++) {
          if(num[i] > num[j]){
            ans = num[i];
          }
            else {
              ans = num[j];
            }
      }
    }
return ans;
}
void input_numbers(void) {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
}
