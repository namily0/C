//Qに作用する力を求めるコード
//x軸上一直線に配置する前提
//ベクトルではなく電荷の符号で向きを表記

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#define epsilon 8.854 * pow(10,-12)
#define law 1/(4*M_PI*epsilon)

double CoulombsLaw(double Q[][2]);

int main()
{
    double Q[3][2];
    printf("Qの電荷、Q1の電荷、Q1とQの距離、Q2の電荷、Q2とQの距離をスペース区切りで入力してください。");
    scanf("%lf %lf %lf %lf %lf",&Q[0][0],&Q[1][0],&Q[1][1],&Q[2][0],&Q[2][1]);
    printf("%lf",CoulombsLaw(Q));
}

double CoulombsLaw(double Q[][2])
{
    double ans = 0;
    ans += Q[0][0] * Q[1][0] * law /pow(Q[1][1],2);
    ans += Q[0][0] * Q[2][0] *law /pow(Q[2][1],2);
    return ans;
}