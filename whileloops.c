#include<stdio.h>
int main()
{
    int a = 1;
    int sum = 0;
    while(a <= 10){
        sum = sum+a;
         a++;
    }
    printf("%d", sum);
    return 0;
}
---------------------------------------------------------------------------------------------------
//count the numbers

#include<stdio.h>
int main()
{
    int num = 342484;
    int count = 0;
    while(num > 0 ){
        num =  num/10;
          count++;
    }
    printf("%d", count);
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------//reverse the number
#include<stdio.h>
int main()
{
    int num = 12321;
    int reversed = 0;
    int digit;
    while(num > 0 ){
        digit =  num%10;
        reversed = reversed%10+digit;
        num=num/10;       
    }
    printf("%d", num);
    return 0;
}

--------------------------------------------------------------------------------------------------------------------------
Armstrong number

#include<stdio.h>
int main()
{
    int n = 153;
    int temp;

    int rem,sum=0;
    while(n>0){
        rem=n%10;
        sum = sum*rem*rem*rem;
        n = n/10;
    }
    if(temp==sum){
        printf("armstrong number");
    }
    else{
        printf("not");
    }
    return 0;
}

---------------------------------------------------------------------------------------------------------------------------
//neon number
#include<stdio.h>
int main()
{
    int num=9;
    int square = num*num;
    int sum=0;
    int temp=square;
    
    while(temp>0){
        sum += temp%10;
        temp /= 10;
    }
    
    if(sum == num){
        printf("%d is neon number",num);
    }else{
        printf("%d is not neon number",num);
    }
    return 0;
}