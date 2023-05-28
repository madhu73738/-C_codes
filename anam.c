// To check whether two strings are anagram.

#include <stdio.h>
#include <string.h>
void checkAnagram(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2){
        printf("The strings are not anagrams");
        return;
    }
    int freq1[26] = {0};
    int freq2[26] = {0};
    for(int i = 0; i < len1; i++){
        freq1[str1[i] - 'a']++;
        freq2[str2[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(freq1[i] != freq2[i]){
            printf("The strings are not anagrams");
            return;
        }
    }
    printf("The strings are anagrams");
}

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    checkAnagram(str1, str2);
    return 0;
}