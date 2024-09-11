#include <stdio.h>
#include <math.h>

//define PI
#define PI 3.14159

double askForUserInput();
double calculateDistance();
double calculatePerimter();
double calculateArea();
double calculateWidth();
double calculateHeight();

double calculateDistance(){
    double distance;
    distance = askForUserInput();
    return distance;
}

double calculatePerimeter(){
//perimter == 2*PI*r
    double r = calculateDistance()/2;
    double perimeter = 2 * PI * r;
    printf("The perimeter of the city encompassed by your request is: %.2f\n", perimeter);
    return 2; 
}

double calculateArea(){
//area == PI*r*r
    double r = calculateDistance()/2;
    double area = PI * r * r;
    printf("The area of the city encompassed by your request is: %.2f\n", area);
    return 2;
}

double calculateWidth(){
//height and width of a circle are equal, and are also equal to the diameter, unless I'm missing something...
    double width = calculateDistance();
    printf("The width of the city encompassed by your request is: %.2f\n", width);
    return 1;
}

double calculateHeight(){
//height and width of a circle are equal, and are also equal to the diameter, unless I'm missing something...
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is: %.2f\n", height);
    return 1;
}

//consulted stackoverflow.com on how to use scanf for values separated by a comma
double askForUserInput(){
    int x1, x2, y1, y2;
    double distance;
//first coordinate pair
    printf("Enter first coordinate pair separated by a comma: ");
    scanf("%d,%d", &x1, &y1);
//second coordinate pair
    printf("Enter second coordinate pair separated by a comma: ");
    scanf("%d,%d", &x2, &y2);
//distance formula
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    return distance;
//every function uses some form or other of diameter/distance, so distance is calculated here
}

int main(void)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
