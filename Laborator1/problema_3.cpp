#include <bits/stdc++.h>
using namespace std;
char mat[150][150];
char c[300];
char aux[300];
int main()
{
    scanf("%[^\n]", &c);
    char *p = strtok(c, " ");
    int cnt = 0;
    while(p)
    {
        strcpy(mat[cnt++], p);
        p = strtok(NULL, " ");
    }
    for(int i=0;i<cnt-1;i++)
        for(int j=i+1;j<cnt;j++)
            if(strlen(mat[i]) < strlen(mat[j]))
                {
                    strcpy(aux, mat[i]);
                    strcpy(mat[i], mat[j]);
                    strcpy(mat[j], aux);
                }
                else 
                {
                    if(strcmp(mat[i], mat[j]) > 0)
                    {
                        strcpy(aux, mat[i]);
                    strcpy(mat[i], mat[j]);
                    strcpy(mat[j], aux);
                    }
                    j--;
                }


    for(int i=0;i<cnt;i++)
        cout << mat[i] << '\n';
    
}