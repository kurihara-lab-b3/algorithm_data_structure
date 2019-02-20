#include<cstdio>
#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
  double x;
  double y;
} Point;

void koch(int d, Point p1, Point p2){
  if (d == 0){
    return;
  }
  
  double th = M_PI * 60.0 / 180.0;
  Point s = {p1.x * 2.0 / 3.0 + p2.x/ 3.0, p1.y * 2.0/3.0 + p2.y/3.0};
  Point t = {p1.x / 3.0 + p2.x * 2.0/3.0, p1.y / 3.0 + p2.y * 2.0/3.0};
  Point u = {s.x + (t.x-s.x)*cos(th)-(t.y-s.y)*sin(th),
  s.y + (t.y-s.y)*sin(th)+(t.y-s.y)*cos(th)};

  koch(d-1, p1, s);
  printf("%.8f %.8f\n", s.x, s.y);
  koch(d-1, s, u);
  printf("%.8f %.8f\n", u.x, u.y);
  koch(d-1, u, t);
  printf("%.8f %.8f\n", t.x, t.y);
  koch(d-1, t, p2);
}

int main(){
  int d;
  scanf("%d", &d);
  Point p1, p2;
  p1.x = 0;
  p1.y = 0;
  p2.x = 100;
  p2.y = 0;
  printf("%.8f %.8f\n", p1.x, p1.y);
  koch(d, p1, p2);
  printf("%.8f %.8d\n", p2.x, p2.y);
  return 0;
}
