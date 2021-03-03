// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    	while (true) {
		if (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}
		else {
			return a;
		}
	}
}
