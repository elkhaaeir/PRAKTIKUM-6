#include <stdio.h>

struct Participant {
	char name[30];
	int age;
	int score;
};

int main(void) {
	struct Participant partisipant[10];
	int n;
	int highest = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d %d",
			partisipant[i].name,
			&partisipant[i].age,
			&partisipant[i].score);
	}

	for (int i = 1; i < n; i++) {
		if (partisipant[i].score > partisipant[highest].score) {
			highest = i;
		}
	}

	printf("Peserta dengan skor tertinggi adalah %s ",
		partisipant[highest].name);

	printf("dengan skor %d\n",
		partisipant[highest].score);

	return 0;
}