#include <stdio.h>

struct Wallet {
	char name[30];
	int balance;
};

void topUp(struct Wallet *d, int nominal) {
	d->balance = d->balance + nominal;

	printf("Top up %d berhasil, saldo = %d\n",
		nominal, d->balance);
}

void pay(struct Wallet *d, int nominal) {
	if (d->balance >= nominal) {
		d->balance = d->balance - nominal;

		printf("Bayar %d berhasil, saldo = %d\n",
			nominal, d->balance);
	} else {
		printf("Bayar %d gagal, saldo tidak cukup\n",
			nominal);
	}
}

int main(void) {
	struct Wallet d;
	int n;
	char type;
	int nominal;

	scanf("%s %d", d.name, &d.balance);
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf(" %c %d", &type, &nominal);

		if (type == 'T') {
			topUp(&d, nominal);
		} else if (type == 'B') {
			pay(&d, nominal);
		}
	}

	printf("Saldo akhir %s = %d\n", d.name, d.balance);

	return 0;
}