#include<stdio.h>
#include<math.h>
int main(){
    float a;
    float b;
    char ch;
    printf("Enter the First number\n");
    scanf("%f",&a);
    printf("Enter the Second Number\n");
    scanf("%f",&b);
    printf("Enter the operator\n");
    scanf(" %c",&ch);
    if(ch == '+'){
        printf("The Sum is");
        printf("\t%f + %f = %.2f",a,b,(a+b));
    }
    else if(ch == '-'){
        printf("The Difference is");
        printf("\t%f - %f = %.2f",a,b,(a-b));
    }
    else if(ch == '*'){
        printf("The Product is");
        printf("\t%f * %f = %.2f",a,b,(a*b));
    }
    else if(ch == '/'){
        printf("The Quotient is");
        if(b == 0){
            printf("\tCan't Divide by Zero");
        }
            else{
              printf("\t%f / %f = %f",a,b,(a/b));
            }
    }
    
    else{
        printf("Invalid operator");
    }
    return 0;
}

         
        


