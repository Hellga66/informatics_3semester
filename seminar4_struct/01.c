#include <stdio.h>
#include <math.h>

struct point
{
    double x;
    double y;
};

typedef struct point Point;

struct triangle
{
    Point a;
    Point b;
    Point c;
};

typedef struct triangle Triangle;

void print_point(Point p) {
    printf("(%.2f, %.2f)", p.x, p.y);
}

void print_triangle(Triangle* t) {
    printf("{{%.2f, %.2f}, {%.2f, %.2f}, {%.2f, %.2f}}", 
           t->a.x, t->a.y, t->b.x, t->b.y, t->c.x, t->c.y);
}

double distance(Point p1, Point p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

double get_triangle_perimeter(const Triangle* t) {
    double side1 = distance(t->a, t->b);
    double side2 = distance(t->b, t->c);
    double side3 = distance(t->c, t->a);
    return side1 + side2 + side3;
}

Triangle moved_triangle(const Triangle* t, Point vector) {
    Triangle new;
    new.a.x = t->a.x + vector.x;
    new.b.x = t->b.x + vector.x;
    new.b.y = t->b.y + vector.y;
    new.c.x = t->c.x + vector.x;
    new.c.y = t->c.y + vector.y;
    return new;
}

void move_triangle(Triangle* t, Point vector) {
    t->a.x += vector.x;
    t->a.y += vector.y;
    t->b.x += vector.x;
    t->b.y += vector.y;
    t->c.x += vector.x;
    t->c.y += vector.y;
}

int main()
{
    Triangle t = {{1.00, 0.00}, {0.50, 2.00}, {0.00, 1.50}};
    printf("Perimeter = %.2f\n", get_triangle_perimeter(&t));

    Point d = {1.0, 1.0};
    print_triangle(&t);
    printf("\n");
    move_triangle(&t, d);
    print_triangle(&t);
    printf("\n");
}