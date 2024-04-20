#include<stdio.h>
#include<math.h>
#include<strings.h>
#include<ctype.h>

int main(){
    float a;
    float b;
    char ch;
    float d;
    const float PI = 3.1415926535;
    float radians = d * PI/180;
    double result;

    
    
    printf("Enter the First number\n");
    scanf("%f",&a);
    printf("Enter the Second Number\n");
    scanf("%f",&b);
    printf("Enter the operator{'+'-'*'/'}\n");
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
        printf("Invalid operator\n");
        printf("Do you want to perform any function:{Trigonometry, Logrithm}[T, L]:\n");
        scanf(" %c",&ch);
        if(ch == 'T'){
            printf("Choose The function\n");
            printf("{1)Sin[x], 2)Cos[x] ,3)Tan[x], 4)Cot[x], 5)Sec[x], 6)Cosec[x]}:\n");
            int choice;
            scanf("%d",&choice);
            switch(choice){
                case 1: 
                printf("Enter the angle in degrees:\n");
                scanf("%f",&d);
                result = sin(radians);
                break;
                case 2:
                printf("Enter the angle in degrees:\n");
                scanf("%f",&d);
                result=cos(radians);
                break;
                case 3:
                printf("Enter the angle in degrees:\n");
                scanf("%f",&d);
                result=tan(radians);
                break;
                case 4:
                printf("Enter the angle in degrees:\n");
                scanf("%f",&d);
                result=1/(tan(radians));
                break;
                case 5:
                printf("Enter the angle in degrees:\n");
                scanf("%f",&d);
                result=1/(cos(radians));
                break;
                case 6:
                printf("Enter the angle in degrees:\n");
                scanf("%f",&d);
                result=1/(sin(radians));
                break;
            default:
                printf("Invalid Choice:\n");
                return 1;
                
                

            }
         printf("Result in Radians is: %lf",result);

        }
        else if(ch == 'L'){
            printf("Enter the number:\n");
            scanf("%f",&d);
            result = log10(d);
            printf("Result: %lf",result);
        }
        else{
            printf("Wrong input. Try again.");
        }


    }

    
    return 0;
    

}