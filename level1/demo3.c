#include<stdio.h>

typedef struct{
    float length;
    float width;    
    float area;
} Rectangle;

void input(int n, Rectangle rect[n]);
void calculate_area(int n, Rectangle rect[n]);
int largestarea(int n, Rectangle rect[n]);
void output(int n, int largestIndex, Rectangle rect[n]);

int main(){
    int n, largestIndex;

    printf("enter no of rectangle: ");
    scanf("%d",&n);

    Rectangle rect[n];

    input(n, rect);
    calculate_area(n, rect);
    largestIndex = largestarea(n, rect);
    output(n, largestIndex, rect);

    return 0;
}

// FIXED: return type should be void
void input(int n, Rectangle rect[n]){
    for(int i = 0; i < n; i++){
        printf("enter length and width of rectangle %d: ", i+1);
        scanf("%f %f", &rect[i].length, &rect[i].width);
    }
}

void calculate_area(int n, Rectangle rect[n]){
    for(int i = 0; i < n; i++){
        rect[i].area = rect[i].length * rect[i].width;
    }
}

int largestarea(int n, Rectangle rect[n]){
    int largestIndex = 0;

    for(int i = 1; i < n; i++){
        if(rect[i].area > rect[largestIndex].area){
            largestIndex = i;
        }
    }
    return largestIndex;
}

void output(int n, int largestIndex, Rectangle rect[n]){
    printf("\nAreas of all rectangles:\n");

    for (int i = 0; i < n; i++){
        printf("Rectangle %d Area: %f\n", i + 1, rect[i].area);
    }

    printf("\nRectangle with Largest Area:\n");
    printf("Length = %f\nWidth = %f\nArea = %f\n",
           rect[largestIndex].length,
           rect[largestIndex].width,
           rect[largestIndex].area);
}