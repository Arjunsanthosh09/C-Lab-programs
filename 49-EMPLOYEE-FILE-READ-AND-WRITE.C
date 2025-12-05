#include<stdio.h>
#include<conio.h>
struct employee{
	int id;
	char name[20];
	float salary;
	char designation[20];
};
struct employee ep;
void main(){
	int n,i,j=0;
	FILE *fp;
	clrscr();
	printf("Enter the number of employees:");
	scanf("%d",&n);
	fp=fopen("employee.dat","wb");
	if(fp==NULL){
		printf("\nError opening the file..");
	}
	for(i=0;i<n;i++){
		printf("Enter details of the employee %d",i+1);
		printf("\n\nenter the employee id:");
		scanf("%d",&ep.id);
		printf("Enter the employee name:");
		scanf("%s",&ep.name);
		printf("Enter the employee Designation:");
		scanf("%s",&ep.designation);
		printf("Enter the salary :");
		scanf("%f",&ep.salary);
		fwrite(&ep,sizeof(ep),1,fp);
	}
	fclose(fp);
	fp=fopen("employee.dat","rb");
	if(fp==NULL){
		printf("\n Error opening the file..");
	}
		printf("\n\n Employee Details  \n\n");
	while(fread(&ep,sizeof(ep),1,fp)){
		printf("Deatils of employee %d\n\n",j+1);
		printf("Employee name:%s",ep.name);
		printf("\nEmployee id: %d",ep.id);
		printf("\nEmployee designation: %s",ep.designation);
		printf("\nEmployee salary :%f",ep.salary);
		j++;
	}
	fclose(fp);
	getch();


}
