#include <stdio.h>
#include <math.h>

const char* circle_intersection(double x1, double y1, double r1, 
                                     double x2, double y2, double r2) 
{
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx*dx + dy*dy);

    double sum_radii = r1 + r2;
    double diff_radii = fabs(r1 - r2);
    
    const double epsilon = 1e-5;
    
    if (distance > sum_radii + epsilon) {
        return "Do not intersect";
    } else if (fabs(distance - sum_radii) < epsilon || 
               fabs(distance - diff_radii) < epsilon) {
        return "Touch";
    } else if (distance < diff_radii - epsilon) {
        return "Do not intersect";
    } else {
        return "Intersect";
    }
}

int main() 
{
    double x1, y1, r1, x2, y2, r2;
    
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    scanf("%lf %lf %lf", &x2, &y2, &r2);
    
    printf("%s\n", circle_intersection(x1, y1, r1, x2, y2, r2));

}