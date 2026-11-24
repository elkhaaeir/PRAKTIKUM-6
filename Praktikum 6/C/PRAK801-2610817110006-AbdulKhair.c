#include <stdio.h>

int main(void) {
	int value;
	int *ptr;

	scanf("%d", &value);

	ptr = &value;

	printf("Nilai variabel = %d\n", value);
	printf("Alamat variabel = %p\n", (void*)&value);
	printf("Nilai melalui pointer = %d\n", *ptr);

	*ptr = *ptr * 2;

	printf("Nilai setelah diubah lewat pointer = %d\n", value);

	return 0;
}