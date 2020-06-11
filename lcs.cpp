#include<bits/stdc++.h>  
using namespace std; 
  
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}
  
int lcs( char *X, char *Y, int m, int n )  
{  
    int LCS[m + 1][n + 1];  
    int i, j;  
    for (i=0; i<=m;i++)  
    {  
        for (j=0; j <=n;j++)  
        {  
        if (i==0 || j==0){
            LCS[i][j] = 0;  
        }
        else if (X[i - 1] == Y[j - 1])  {
            LCS[i][j] = LCS[i - 1][j - 1] + 1;  
        }
        else{
            LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);  
    }
        }  
    } 
    return LCS[m][n];  
}     
int main()  
{  
    char X[100];  
    char Y[100];  
    scanf("%s",X);
    scanf("%s",Y);
    int m = strlen(X);  
    int n = strlen(Y);  
    cout << lcs( X, Y, m, n );  
    return 0;  
}  
