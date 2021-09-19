#include<bits/stdc++.h>

using namespace std ; 
char s  = 30 ;

void toarray(int num){
    int i = 0 ; 

    while(num ! = 0 ){
        s[i] = num%10 + '0';
        num = num / 10 ;
        i++ ; 
    }

    if (i%2 == 0){
        int m = i/2 ; 
        int n = m-1 ; 

        while(m<i && n >= 0){
            int t = s[n];
            s[n] = s[m];
            s[m] = t;
            m++ ; 
            n-- ; 
        }
        s[m] = '\0';
    }
    else{
        int m = i/2+1 ; 
        int n = m/2-1 ; 

        while(m<i && n >= 0){
            int t = s[n];
            s[n] = s[m];
            s[m] = t;
            m++ ; 
            n-- ; 
        }
        s[m] = '\0';
    }
}

bool isPal(char s[]){

    int i = 0 ; 

    while(s[i] != '\0'){
        i++;
    }

    if(i%2 == 0){
        int m = i/2 ; 
        int n = m-1 ;

        while(s[m] == s[n])
        {
            m++ ; 
            n-- ;
        }

        if(n < 0 && m == i)
        {
            return true ;
        }
        else{
            return false ; 
        }
    }

    else{
        int m = i/2 + 1 ; 
        int n = i/2 - 1 ;

        while(s[m] == s[n])
        {
            m++ ; 
            n-- ;
        }

        if(n < 0 && m == i)
        {
            return true ;
        }
        else{
            return false ; 
        }
    }

}
int toNum(char s[]){
    
    int n = 0 ; 

    while(s[n] != '\0'){
        n++;
    }
    int num = 0,mul = 1;
    
    for (int i = n-1; i >= 0; i--)
    {
        num +=mul * (s[i] - '0');
        mul *= 10 ; 
    }
    return num ; 
    
}

int main()
{
    int num ; 
    cin >> num ; 

    toarray(num + 1) ; 
    while(!isPal(s))
    {
        int n = toNum(s);
        n = n +1 ; 
        toarray(n);
    }

    cout << "next greater palindrome is "<<s<<endl; 
    return 0;
}