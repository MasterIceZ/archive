#include <stdio.h>
#include <string.h>
struct Student{
	char name[222];
	int age, room;
};
Student class_2[5];
int main(){
	strcpy(class_2[1].name, "Alice", sizeof class_2[1].name);
	class_2[1].age = 10;
	class_2[1].room = 2;
	class_2[2] = {"Alice", 10, 2};
	for(int i=1; i<=2; ++i){
		printf("#%d\n", i);
		printf("Name: %s\n", class_2[i].name);
		printf("Age: %d\n", class_2[i].age);
		printf("Room: %d\n", class_2[i].room);
	}
	return 0;
}
