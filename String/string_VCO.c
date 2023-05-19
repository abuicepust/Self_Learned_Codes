#include<stdio.h>
int main()
{
    char s1[30];
    int i,vowel,consonant,digit,other;
    printf("Enter the string: \n");
    scanf("%[^\n]%*c",&s1);
    printf("string s1 = %s\n",s1);
    i=vowel=consonant=digit=other=0;
    char ch;
    while((ch=s1[i]) != '\0')
    {
        if(ch == 'a' || ch ==  'A' || ch == 'e' || ch ==  'E' || ch ==  'i' || ch ==  'I' || ch ==  'o' || ch ==  'O' || ch ==  'u' || ch ==  'U')
        {
            vowel++;
        }
        else if( ch == '1' || ch ==  '2' || ch ==  '3' || ch ==  '4' || ch ==  '5' || ch ==  '6' || ch ==  '7' || ch ==  '8' || ch ==  '9')
        {
            digit++;
        }
        else
            consonant++;
        i++;
    }
    printf("Vowel = %d\n",vowel);
    printf("Consonant = %d\n",consonant);
    printf("Digit = %d\n",digit);

    return 0;
}
