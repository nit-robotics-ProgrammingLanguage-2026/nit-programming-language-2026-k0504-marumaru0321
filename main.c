#include <stdio.h>
int main(void)
{
    int ireru;
    scanf("%d",&ireru);
    int f=!(ireru<0||(ireru>=10&&ireru<12)||ireru>=15);/*ireruが０以上10未満の時またはireruが１２以上１５未満の範囲内の整数ならばOKと出力する。*/
    if(f==1){printf("OK");/*判定が真ならOK,それ以外はNGをそれぞれ出力する。*/
    }
    else
    {printf("NG");
    }
    return 0;
}
