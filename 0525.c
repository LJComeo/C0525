#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

//����ַ���A���ַ���B����������ʣ�
//int main(){
	//strtok
	/*char str[] = "you are,a.student";
	char sep[] = ",.";
	char *tok = NULL;
	for (tok = strtok(str, sep); tok != NULL; tok = strtok(NULL, sep)){
		puts(tok);
	}*/

	//strncmp
	/*char str1[] = "abcafafa";
	char str2[] = "abcmoeofmlmf";
	int n = strncmp(str1, str2, 3);
	printf("%d\n", n);*/

	//strncpy
	//Ҫ�������ַ�������֮��\0
	/*char str1[20] = "abcdef";
	char str2[20] = "1234";
	strncpy(str1, str2, 6);*/

	//strncat
	//��ƴ�ӵ��ַ���Ҫд�����С
	//Ҫƴ�ӵ��ַ����Ĵ�СС��str2ʱ���油\0
	/*char str1[20] = "abcdef";
	char str2[] = "1234";
	strncat(str1, str2, 3);*/

	//strstr:�ڵ�һ���ַ���������ҵڶ����ַ���,
	//����ҵ��˾ͷ����ҵ����׵�ַ
	/*char str1[] = "abcbcdef";
	char str2[] = "bck";
	char *p = NULL;
	if(p=strstr(str1, str2))
		puts(p);*/
	//system("pause");
	//return 0;
//}

//ģ��ʵ��strstr
//char *my_strstr(const char*str1, const char*str2){
//	 char *p = (char *)str1;
//	 char *s1 = (char *)str1;
//	 char *s2 = (char *)str2;
//	 assert(str1 != NULL);
//	 while (*p){
//		 s1 = p;
//		 s2 = (char *)str2;
//		 while (*s1 && *s2 && *s1 == *s2){
//			 s1++;
//			 s2++;
//		 }
//		 if (*s2 == '\0'){
//			 return p;
//		 }
//		 p++;
//	 }
//	 return NULL;
//
//}
//int main(){
//	char str1[] = "abcbcdefggggg";
//	char str2[] = "bcdef";
//	char *p = NULL;
//	if (p = my_strstr(str1, str2)){
//		puts(str1);
//	}
//	system("pause");
//	return 0;
//}

//strerror ����������Ϣ
//memcpy �����������ͣ����ݡ��ַ���...��  ���Ჹ\0
//void *my_memcpy(void *dest, const void *src, size_t count){
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (count){
//		*(char *)dest = *(char *)src;
//		src = (char *)src + 1;
//		dest = (char *)dest + 1;
//		count--;
//	}
//}
//int main(){
//	char str1[20] = "abcdef";
//	char str2[10] = "123";
//	my_memcpy(str1, str2, 6);
//	/*int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int arr2[10] = { 9, 8, 0 };
//	memcpy(str1, str2, 2);
//	memcpy(arr1, arr2, 2 * sizeof(int));*/
//	puts(str1);
//	system("pause");
//	return 0;
//}

//memmove
//int main(){
//	char a[20] = "1234567890";
//	char b[20] = "qwert";
//	memmove(a + 2, a, 5);
//	//memcpy(a + 2, a, 5);
//	puts(a);
//	system("pause");
//	return 0;
//}