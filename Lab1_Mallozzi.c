int main(){

	int userScore = 0, gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, 
		gradeE = 0, gradeF = 0, counter = 0;
	double average = 0.0;
	
	printf("==Enter integer scores 0-100, -1 to stop ==\n");
	
	while(userScore != -1){
		
		printf("Enter score %d: ", counter + 1);
		scanf("%d", &userScore);
		
		while(userScore < -1 || userScore > 100){
			printf("== Score must be 0 - 100\n");
			printf("Enter score %d: ", counter + 1);
			scanf("%d", &userScore);
		}
		if(userScore <= 100 && userScore >= 90){
			gradeA++;
		} else if(userScore < 90 && userScore >= 80){
			gradeB++;
		} else if(userScore < 80 && userScore >= 70){
			gradeC++;
		} else if(userScore < 70 && userScore >= 60){
			gradeD++;
		} else if(userScore < 60 && userScore >= 50){
			gradeE++;
		} else if(userScore < 50 && userScore >= 0){
			gradeF++;
		}
		average += userScore;
		counter++;
	}
	
	--counter;
	
	if(counter < 1){
		printf("== No valid scores entered");
	} else {
		
		average /= counter;
		printf("Number of scores: %d\n", counter);
		printf("Average Score: %.2f\n", average);
		printf("Grade A: %d\n", gradeA);
		printf("Grade B: %d\n", gradeB);
		printf("Grade C: %d\n", gradeC);
		printf("Grade D: %d\n", gradeD);
		printf("Grade E: %d\n", gradeE);
		printf("Grade F: %d\n", gradeF);
		
	}
	
	return 0;
}
