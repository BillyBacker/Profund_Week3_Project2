#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float det(float In[2][2]) {
	return In[1][0] * In[0][1] - In[0][0] * In[1][1];
}

int main() {
	float factor[2][2];
	float ans[2];
	float xMat[2][2];
	float yMat[2][2];
	while (true) {
		printf("From Ax+By = C\n");
		printf("Enter A B C : ");
		scanf("%f %f %f", &factor[0][0], &factor[0][1], &ans[0]);
		xMat[0][0] = ans[0];
		xMat[0][1] = factor[0][1];
		yMat[0][1] = ans[0];
		yMat[0][0] = factor[0][0];
		printf("From Ax+By = C\n");
		printf("Enter A B C : ");
		scanf("%f %f %f", &factor[1][0], &factor[1][1], &ans[1]);
		xMat[1][0] = ans[1];
		xMat[1][1] = factor[1][1];
		yMat[1][1] = ans[1];
		yMat[1][0] = factor[1][0];
		if (det(factor) == 0) {
			char repile[1];
			printf("Answer Undefined\n Reset? (y/n) : ");
			scanf("%s", &repile);
			if (repile == "n") {
				break;
			}
		}
		else {
			printf("x = %f, ", det(xMat) / det(factor));
			printf("y = %f", det(yMat) / det(factor));
			break;
		}
	}
}