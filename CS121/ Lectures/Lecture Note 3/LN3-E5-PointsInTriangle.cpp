// Javier M. Raut
// CS1D - LN3 - E5
// Points in triangle?

#include <iostream>
using namespace std;

int main() {
   // vertices of right triangle
   double x1 = 0.0, y1 = 0.0; // vertex at (0,0)
   double x2 = 200.0, y2 = 0.0; // vertex at (200,0)
   double x3 = 0.0, y3 = 100.0; // vertex at (0,100)

   // prompt the user for a point with x and y coordinates
   double x, y;
   cout << "Enter the x-coordinate of the point: ";
   cin >> x;
   cout << "Enter the y-coordinate of the point: ";
   cin >> y;

   // check if the point is inside the triangle using barycentric coordinates
   double alpha = ((y2 - y3)*(x - x3) + (x3 - x2)*(y - y3)) / ((y2 - y3)*(x1 - x3) + (x3 - x2)*(y1 - y3));
   double beta = ((y3 - y1)*(x - x3) + (x1 - x3)*(y - y3)) /  ((y2 - y3)*(x1 - x3) + (x3 - x2)*(y1 - y3));
   double gamma = 1.0 - alpha - beta;

   bool inside = (alpha > 0) && (beta > 0) && (gamma > 0);
   
   // output whether the point is inside or outside the triangle
   if (inside) {
      cout << "The point (" << x << ", " << y << ") is inside the triangle." << endl;
   }
   else {
      cout << "The point (" << x << ", " << y << ") is outside the triangle." << endl;
   }
   
   return 0;
}
