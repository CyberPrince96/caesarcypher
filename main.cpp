#include <iostream>

using namespace std;
char encrypt(char c,int case_correct)
{
    return((c+3-case_correct)%26+case_correct);
}
char decrypt(char c,int case_correct)
{
    return((c-3-case_correct+26)%26+case_correct);
}
int case_checker(char c)
{
    if(isupper(c))
        return 65;
    else if(islower(c))
        return 97;
    else return 0;
}

int main()
{
    char ans='y';
    int ch;
    int i;
    while(ans=='y')
    {
    string text="";
    cout<<"\nEnter Text \t:";
    cin>>text;
    cout<<"\n1.Encryption\n2.Decryption\nEnter Your Choice 1 or 2\t:";
    cin>>ch;
    if(ch==1)
    {
        i=0;
        while(text[i]!='\0')
        {
            text[i]=encrypt(text[i],case_checker(text[i]));
            i=i+1;
        }
    }
    else if(ch==2)
    {
         i=0;
        while(text[i]!='\0')
        {
            text[i]=decrypt(text[i],case_checker(text[i]));
            i=i+1;
        }
    }
    else cout<<"\nWrong Choice!!!";
    cout<<"\n"<<text;
    cout<<"\n Want to continue y/n\t:";
    cin>>ans;
    }
    return 0;
}

