#include <stdio.h>
int main (void)
{
              double s = 0, t = 2, m, e = 0.0001;

              while ( t - s > e) {
                            m = (s + t) / 2;
                            if (m * m >= 2) {
                                          t = m;
                            } else {
                                          s = m;
                            }
              }
              printf("%lf ≦ √2 ≦ %lf \n", s,t);
}