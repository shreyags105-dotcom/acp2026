#include<stdio.h>
type def struct{
    float length;
    float width;    
    float area;
}Rectangle;

void input(int n,Rectangle rect[n]);
void calculate_area(int n,Rectangle rect[n]);
void largestarea(int n,Rectangle rect[n]);
void output(int n,int largestarea,Rectangle rect[n]);
 int main(){
    int n;
    printf("enter no of rectangle:");
    scanf("%d",&n);
    Rectangle rect[n];
    input(n,rect);
    calculate_area(n,rect);
    largestarea(n,rect);
    output(n,rect);
     return 0;
 }

 void input(int n,Rectangle rect[n]);{
    for(int i;i<n;i++){
        printf("enter length and width of rectangle %d:",i+1);
        scanf("%f%f",&rect.length[i],&rect.width[i]);
    }
 }
void calculate_area(int n,Rectangle rect[n]);{
    for(int i=0;i<n;i++){
        rect.area[i]=rect.length[i]*rect.width[i];
    }
}
void largestarea(int n,Rectangle rect[n]);{
    int largestarea=0;
    for(int i=0;i<n;i++){
        if(rect.area[i]>rect.[largestarea])
            largestarea=i;
    }
    return largestarea;
}
void output(int n,int largestarea,Rectangle rect[n]);{
    printf("\nAreas of all rectangles:\n");
    for (int i = 0; i < n; i++) {
        printf("Rectangle %d Area: %f\n",i + 1, rects[i].area);
    }
    printf("\nRectangle with Largest Area:\n");
    printf("Length=%f\nWidth=%f\nArea=%f", 
            rects[largestIndex].length,rects[largestIndex].width, rects[largestIndex].area);
}