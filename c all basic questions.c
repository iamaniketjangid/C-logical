// rectange
#include<stdio.h>
int main(){
    int area, length, width;
    printf("Enter length and width of the rectangle: ");
    scanf("%d %d", &length, &width);
    area = length * width;
    printf("Area of the rectangle is: %d", area);
    return 0;

}

// SQUARE
#include<stdio.h>
int main(){
int area,a;
printf("enter the SQUARE");
scanf("%d",&a);
a=a*a;
area=a;
printf("area of the SQUARE is %d",area);
return 0;
}
// rectangle
#include<stdio.h>
int main(){
int area,b,h,a;
printf("enter the length and breadth of the rectangle");
scanf("%d %d",&a,&h);
a=1/2*b*h;
area=a;
printf("area of the rectangle is %d",a);
return 0;
}
// Q.3=
#include <stdio.h>
int main() {
    int num, i;
    unsigned long long factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (
            i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
        return 0;
    }
}
// Q21. 
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 6 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 7.
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        if(i == 1||i == 5 || j == i){
            printf("*");
        }
        else{
            printf(" ");
        }
        printf("\n");
    }
}

// Q25.
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch=='M' || ch=='m'){
        printf("Male");
    }
    else if(ch=='F' || ch=='f'){
        printf("Female");
    }
    else{
        printf("Invalid");
    }
    return 0;
}

// Q24

#include<stdio.h>
int main(){
    for(int i=2;i<=10;i++){
        for(int j=1;j<=10;j++){
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("\n");
    }
}
// Q23
#include<stdio.h>
int main(){
    int count=0;   
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
        printf("The number of digits is %d",count);
        return 0;
        
    }
}

// Q23
#include<stdio.h>
int main()
{
	int n,r,s=0,t;
	printf("enter the number");
	scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
        if(t==s){
        printf("palindrome");
        }
        else{
            printf("not palindrome");
        }
        return 0;
        }
    }
// Q20
#include<stdio.h>   
int main()
{
	int n,r,s=0,t;
	printf("enter the number");
	scanf("%d",&n);
    t=n;
    while(n>0){
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
        if(t==s){
        printf("armstrong");
        }
        else{
            printf("not armstrong");
        }
        return 0;
        }}

// Q19
#include <stdio.h>
int main()
{
	int n,sum=0,m;
        printf("Enter a number:");
        scanf("%d",&n);
        while(n>0)
        {
                m=n%10;
                sum=sum+m;
                n=
                n/10;
                printf("Sum is=%d",sum);
                return 0;
        }
}
// Q18
#include<stdio.h>
 void fact(int);
 int main(){
     fact(5);
     return 0;
 }
 void fact(int n){
     int i,f=1;
     for(i=1;i<=n;i++){
         f=f*i;
     }
     printf("factorial of %d is %d",n,f);
 }

// Q17:-
#include <stdio.h> 
int main(){
    int a=10;
    int b=20;
    int c=a+b;
    printf("%d",c);
    return 0;
}
// Q16
#include <stdio.h>  
int main(){
    int n, i, c;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int t1 = 0, t2 = 1;
    printf("Fibonacci Series: ");
    for (i = 1;i <= n;++i) {
        printf("%d, ", t1);
        c = t1 + t2;
        t1 = t2;
        t2 = c;
        return 0;
    }
}
// Q15
#include <stdio.h>  
int main(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
// Q14
#include<stdio.h>
int main(){
    int rev=0,rem,n;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        printf("Reverse of the number is %d",rev);
        return 0;
    }
}
// Q13
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch=='M' || ch=='m'){
        printf("Male");
    }
    else if(ch=='F' || ch=='f'){
        printf("Female");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
// @12
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    if(a%5==0 && a%8==0){
        printf("divisible by 5 and 8");
    }
    else{
        printf("not divisible by 5 and 8");
    }
}
// Q11
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("valid voter");
    }
    else{
        printf("invalid voter");
    }
    return 0;
}
// Q7
#include <stdio.h>  
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||j==1||j==5||i==3){
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
Q10
// #include <stdio.h>
int main()
{
    int i, j;
    for(i=1; i<=2; i++)
    {
        for(j=1; j<=10; j++)
        {
            printf("%d * %d = %d \n", i, j, i*j);
        }
        printf("\n");
        return 0;
    }
// Q9
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3){
        printf("%d is the largest number",num1);
    }
    else if(num2>num1 && num2>num3){
        printf("%d is the largest number",num2);
    }
    else{
        printf("%d is the largest number",num3);
    }
    return 0;
    
}
}

