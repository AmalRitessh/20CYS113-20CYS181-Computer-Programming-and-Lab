[Practice] Matrix Multiplication - Fixed

#include <stdio.h>

int main() {
    // Define matrices A and B
    
    int A[3][3];
    int B[3][3];
    int C[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for(int t=0; t<3; t++) {
        for(int y=0; y<3; y++) {
            scanf("%d", &B[t][y]);
        }
    }
    // Perform matrix multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int sum = 0;
            for(int k = 0; k < 3; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Print the resultant matrix
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

[Practice] Matrix Multiplication - Variable

#include <stdio.h>

int main() {
  int m, n, i, j, k;
  scanf("%d %d", &m, &n);

  int A[m][n], B[m][n], C[m][n];


  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }


  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      C[i][j] = 0;
      for (k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}


[Practice] Pattern - * Half Pyramid

#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    if(0<a && a<25){
        for(i=1;i<=a;i++){
            for(j=1;j<=i;j++){
                printf("*   ");
            }
            printf("\n");
        }
        return 0;
    }
    else{
        printf("Invalid Input");
    }
}

[Quiz 1] Palindrome Check

#include <stdio.h>
#include <math.h>
int main(){
    int a,k,ans=0,i,j;
    scanf("%d",&a);
    if (a<0){
        a=a*-1;    
    }
    
    k=log10(a)+1;
    int val[k];
    for(i=0;i<k;i++){
        val[i]=a%10;
        a=a/10;
    }
    for(i=0;i<k/2;i++){
            for(j=k/2;j<k;j++){
                if (val[i]==val[j]){
                    ans=ans+1;
                    break;
                }
                else{
                    continue;
                }
            }
        }
        if((k/2)==ans){
            printf("Is a palindrome.");
        }
        else{
            printf("Is not a palindrome.");
        }
}

[Periodicals 2] Simple Student Management System

#include <stdio.h>
#include <string.h>

struct students{
    char name[30];
    int age;
    enum score{
        A,B,C,D,F
    }e_s;
}b[72];


int main(){
    char grade[10];
    int val_menu,t=0,error;
    do{
        scanf("%d",&val_menu);
        
        switch (val_menu){
            
            case 1: 
                if(t==3){
                    printf("Maximum number of students reached.\n");
                }
                else{
                    scanf("%s",b[t].name);
                    scanf("%d",&b[t].age);
                    scanf("%s",grade);
                    if (strcmp(grade,"A")==0){
                        b[t].e_s=0;
                    }
                    else if (strcmp(grade,"B")==0){
                        b[t].e_s=1;
                    }
                    else if (strcmp(grade,"C")==0){
                        b[t].e_s=2;
                    }
                    else if (strcmp(grade,"D")==0){
                        b[t].e_s=3;
                    }
                    else if (strcmp(grade,"F")==0){
                        b[t].e_s=4;
                    }
                    else{
                        b[t].e_s=4;
                    }
                    t=t+1;
                    printf("Student added successfully.\n");    
                }
                break;
                
                
            case 2: //displaying students
                printf("List of students:\n");
                for(int i=0;i<t;i++){
                    printf("Student %d\n",i+1);
                    printf("Name: %s\n",b[i].name);
                    printf("Age: %d\n",b[i].age);
                    if (b[i].e_s==0){
                        printf("Score: A\n");
                    }
                    else if (b[i].e_s==1){
                        printf("Score: B\n");
                    }
                    else if (b[i].e_s==2){
                        printf("Score: C\n");
                    }
                    else if (b[i].e_s==3){
                        printf("Score: D\n");
                    }
                    else if (b[i].e_s==4){
                        printf("Score: F\n");
                    }
                    printf("\n");
                }
                break;
                
                
                
            case 3: //higest score
                printf("Highest-scoring student:\n");
                for(int i=0;i<t;i++){
                    if (b[i].e_s==0){
                        printf("Name: %s\n",b[i].name);
                        printf("Age: %d\n",b[i].age);
                        if (b[i].e_s==0){
                            printf("Score: A\n");
                        }
                        else if (b[i].e_s==1){
                            printf("Score: B\n");
                        }
                        else if (b[i].e_s==2){
                            printf("Score: C\n");
                        }
                        else if (b[i].e_s==3){
                            printf("Score: D\n");
                        }
                        else if (b[i].e_s==4){
                            printf("Score: F\n");
                        }
                    }
                    break;
                }
                printf("\n");
                break;
                
                
            case 4: //exiting
                printf("Exiting the program. Thank you for using our system!");
                break;
        }
    } while (val_menu!=4);
}

[Practice][Functions] Generate all the prime numbers between two given numbers

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    generate_prime(a,b);
}

void generate_prime(int a,int b){
    int k = b-a,i,check;
    int it = a;
    int val[k];
    for(i=0;i<k;i++){
        val[i]=a;
        a=a+1;
    }
    printf("Prime numbers between %d and %d are: ",it,b);
    for(i=0;i<k;i++){
        check=isprime(val[i]);
        if (check==1){
            printf("%d ",val[i]);
        }
    }
}

int isprime(int a){
    int ans=1,i;
    for(i=1;i<a;i++){
        if (a%i==0){
            ans=ans+1;
        }
    }
    if (ans==2){
        return 1;
    }
    else{
        return 0;
    }
}

[Practice][Functions] Convert Decimal to Binary, Octal and Hexadecimal

#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<=0){
        printf("Error: Value should be greater than 0");
    }
    else{
        decimalToBinary(a);
        printf("\n");
        decimalToOctal(a);
        printf("\n");
        decimalToHexadecimal(a);
    }
}

void decimalToBinary(int a){
    int val[30],k=0,i;
    while(a!=0){
        if(a%2==0){
            val[k]=0;
            k=k+1;
        }
        else{
            val[k]=1;
            k=k+1;
        }
        a=a/2;    
    }
    printf("Binary equivalent: ");
    for(i=k-1;i>=0;i--){
        printf("%d",val[i]);
    }
}

void decimalToOctal(int a){
    int val[30],k=0,i,it;
    while(a!=0){
        it=(a%8);
        val[k]=it;
        k=k+1;
        a=a/8;
    }
    printf("Octal equivalent: ");
    for(i=k-1;i>=0;i--){
        printf("%d",val[i]);
    }
}

void decimalToHexadecimal(int a){
    printf("Hexadecimal equivalent: ");
    printf("%X",a);
}


