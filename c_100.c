/*
001
	��Ŀ����1��2,3,4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
	
	��֪��
	��1��2��3��4���ĸ����֣������������λ�������Ҳ������ظ����ֵĳ��֣�
	
	�����
	��Щ��λ�� 
*/ 
 
 
 
 
 
//#include<stdio.h>
//int main(){
//	int i,j,k;
//	for(i=1;i<5;i++)
//		for(j=1;j<5;j++)
//			for(k=1;k<5;k++)
//				if(i!=j&&j!=k&&k!=i)
//					printf("%d%d%d\n",i,j,k);
//	return 0;
//} 




/*
002
	��Ŀ����ҵ���ŵĽ�������������
	#����I�����ڻ����10��Ԫʱ���������10%
	#�������10��Ԫ������20 ����10�İ�10%��� ����10�� ��7.5%
	#20-40 ����20��5%
	#40-60 ����40��3%
	#60-100 ����60��1.5%
	#����100 ����100��1%
	�Ӽ������뵱�µ������󷢷Ž�������
	
	�ʼǣ�
	һ����case�����������ȷ����int�͵�����
		�ұ���ÿһ����case�������涼��break 
	����scanf�����ʱ�� ��Ҫ��%.2f 
	
*/
//#include<stdio.h>
//
//float ten(float x){
//	return x*0.1;
//}
//float twenty(float x){
//	return ten(10)+(x-10)*0.075;
//}
//float forty(float x){
//	return twenty(20)+(x-20)*0.005;
//}
//float sixty(float x){
//	return forty(40)+(x-40)*0.003;
//}
//float hundred(float x){
//	return sixty(60)+(x-60)*0.0015;
//}
//float over_hundred(float x){
//	return hundred(100)+(x-100)*0.0001;
//} 
//
//int main(){
//	float num;
//	printf("please enter profit(over zero):");
//	scanf("%f",&num);
//	int a;
//	if(0<num&&num<=10)
//		a=1;
//	if(10<num&&num<=20)
//		a=2;
//	if(20<num&&num<=40)
//		a=3;
//	if(40<num&&num<=60)
//		a=4;
//	if(60<num&&num<=100)
//		a=5;
//	if(100<num)
//		a=6;
//	switch(a){
//		case 1:
//			printf("Reward is:%.2f(ten thousand)\n",ten(num));
//			break; 
//		case 2:
//			printf("Reward is:%.2f(ten thousand)\n",twenty(num));
//			break;
//		case 3:
//			printf("Reward is:%.2f(ten thousand)\n",forty(num));
//			break;
//		case 4:
//			printf("Reward is:%.2f(ten thousand)\n",sixty(num));
//			break;
//		case 5:
//			printf("Reward is:%.2f(ten thousand)\n",hundred(num));
//			break;
//		case 6:
//			printf("Reward is:%.2f(ten thousand)\n",over_hundred(num));	
//			break;
//		default:
//			printf("enter right profit!\n");
//			break;
//	}	
//	return 0;
//} 

/*
003
	��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168������һ����ȫƽ�������ʸ����ǣ�
	 
*/

//#include<stdio.h>
//int main(){
//	int a=0;
//	int flag=0;
//	while(flag!=1){
//		a++;
//		int i;
//		for(i=1;i<a+100;i++)
//			if(i*i==a+100)
//				for(i;i<a+168;i++)
//					if(i*i==a+168)
//						flag=1;	
//	}
//	printf("%d",a);
//	return 0;	
//}

// #include<stdio.h>
// int main(){
// 	int a=0;
// 	int flag=0;
// 	while(flag!=1){
// 		a++;
// 		int i;
// 		for(i=0;i<a+100;i++)
// 			if(i*i==a+100)
// 				for(;i<a+168;i++)
// 					if(i*i==a+168)
// 						flag = 1;
// 	}
// 	printf("%d\n",a);
// 	return 0;
// }


/*
004
	��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��� 
	
	
	ƽ�꣺2��28��
	���꣺2��29��
	������жϷ�������400���� ���߲���400���������ܱ�4���� 
*/

// #include<stdio.h>
// int main(){
// 	printf("enter year mouth day:");
// 	int year,mouth,day;
// 	scanf("%d%d%d",&year,&mouth,&day);
// 	int num;
// 	if(year%400==0||(year%400!=0&&year%4==0)){
// 		switch(mouth){
// 			case 1:
// 				if(day>31){
// 					printf("error");
// 					return 0;
// 				}
// 				num = day;
// 				break;
// 		}
// 	}
// 	else{
// 		switch(mouth){
// 			case 1:
// 				num = day;
// 				break;
// 		}
// 	}
// 	printf("%d\n",num);
// }

//#include<stdio.h>
//int main(){
//	int y,m,d;
//	printf("enter year mouth day in order:");
//	scanf("%d%d%d",&y,&m,&d);
//	int num;
//	//���� 
//	if(y%400==0||(y%400!=0&&y%4==0)){
//		//1 3 5 7 8 10 12:31  2:29
//		switch(m){
//			case 1:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=d;
//				break;
//			case 2:
//				if(d>29){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+d;
//				break;
//			case 3:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+d;
//				break;
//			case 4:
//				if(d>30){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+d;
//				break;
//			case 5:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+d;
//				break;
//			case 6:
//				num=31+29+31+30+31+d;
//				break;
//			case 7:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+d;
//				break;
//			case 8:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+d;
//				break;
//			case 9:
//				if(d>30){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+d;
//				break;
//			case 10:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+30+d;
//				break;
//			case 11:
//				if(d>30){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+30+31+d;
//				break;
//			case 12:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+30+31+30+d;
//				break;
//			default:
//				printf("enter right mouth!\n");
//				return 0;
//		} 
//	}  
//	//ƽ�� 
//	else{
//		//1 3 5 7 8 10 12:31  2:28
//		switch(m){
//			case 1:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=d;
//				break;
//			case 2:
//				if(d>28){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+d;
//				break;
//			case 3:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+28+d;
//				break;
//			case 4:
//				if(d>30){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+d;
//				break;
//			case 5:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+d;
//				break;
//			case 6:
//				num=31+29+31+30+31+d;
//				break;
//			case 7:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+d;
//				break;
//			case 8:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+d;
//				break;
//			case 9:
//				if(d>30){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+d;
//				break;
//			case 10:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+30+d;
//				break;
//			case 11:
//				if(d>30){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+30+31+d;
//				break;
//			case 12:
//				if(d>31){
//					printf("enter right day\n");
//					return 0;
//				} 
//				num=31+29+31+30+31+30+31+31+30+31+30+d;
//				break;
//			default:
//				printf("enter right mouth!\n");
//				return 0;
//		} 
//	} 
//	printf("this day is the %d days in this year",num);
//	return 0;
//} 

//------------------------------------------------------------------------------------------- 
/*
004
	��Ŀ��������������xyz���������������С������� 
	

*/
// #include<stdio.h>
// int main(){
// 	printf("enter three number:");
// 	int x,y,z;
// 	scanf("%d%d%d",&x,&y,&z);
// 	if(x<y){
// 		if(x<z){
// 			if(y<z)
// 				printf("%d %d %d",x,y,z);
// 			else
// 				printf("%d %d %d",x,z,y);
// 		}
// 		else{
// 			printf("%d %d %d",z,x,y);
// 		}
// 	}
// 	else{
// 		if(y<z){
// 			if(x<z)
// 				printf("%d %d %d",y,x,z);
// 			else
// 				printf("%d %d %d",y,z,x);
// 		}
// 		else{
// 			printf("%d %d %d",z,y,x);
// 		}
// 	}
// 	return 0;
// }


//#include<stdio.h>
//int main(){
//	//xyz xzy zxy zyx yzx yxz
//	int x,y,z;
//	printf("please enter three number:");
//	scanf("%d%d%d",&x,&y,&z);
//	printf("order three number in ascend:");
//	if(x<y){
//		if(x<z){
//			printf("%d ",x);
//			//x y z
//			if(y<z){
//				printf("%d %d",y,z);
//				return 0;
//			}
//			//x z y
//			else{
//				printf("%d %d",z,y);
//				return 0;
//			}
//		}
//		//z x y
//		else{
//			printf("%d %d %d",z,x,y);
//			return 0;
//		}
//	}
//	else{
//		if(y<z){
//			printf("%d ",y);
//			//y x z
//			if(x<z){
//				printf("%d %d",x,z);
//				return 0;
//			}
//			//y z x
//			else{
//				printf("%d %d",z,x);
//				return 0;
//			}
//		}
//		//z y x
//		else{
//			printf("%d %d %d",z,y,x);
//			return 0;
//		}	
//	}
//	printf("error:enter right number!");
//	return 0;
//} 
//---------------------------------------------------------------------------------

/*
006
	��Ŀ����*�������ĸC��ͼ�� 
*/
//#include<stdio.h>
//int main(){
//	int i;
//	while(i<8){
//		if(i==0||i==7)
//			printf("* * * * * * * *\n");
//		else
//			printf("*\n");
//		i++;
//	}
//	return 0;
//} 

//------------------------------------------------------------------
/*
007
	��Ŀ�����9*9�ھ� ����������� 
*/
// #include<stdio.h>
// int main(){
// 	int i,j;
// 	for(i=1;i<=9;i++){
// 		for(j=1;j<=i;j++)
// 			printf("%d*%d=%d ",i,j,i*j);
// 		printf("\n");
// 	}
// }

//#include<stdio.h>
//int main(){
//	int i,j;
//	for(i=1;i<=9;i++){
//		for(j=1;j<=i;j++){
//			printf("%dx%d=%d\t",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//} 

//--------------------------------------------------------------------


//----------------------------------------------------------------------------
/*
008
	��Ŀ���ŵ����� (��������)
	��һ�����ӣ��ӳ��������������ÿ���¶��� һ�� ���� 
	С���ӳ��������º�ÿ��������һ������
	�������Ӷ����� 
	��ÿ�µ���������Ϊ���٣�
	�����ǰ��ʮ���£�
	
	��һ������ǰ�����µļӺ� 
	3��1+1
	4��1+1+1
	5��1+1+1 +1+1
	6: 1+1+1+1+1 +1+1+1
	7��1+1+1+1+1+1+1+1 +1+1+1+1+1 
	 
*/
// #include<stdio.h>
// int main(){
// 	int pp=1;
// 	int p=1;
// 	int res;
// 	int n;
// 	printf("enter n:");
// 	scanf("%d",&n);
// 	if(n==1||n==2){
// 		printf("1");
// 		return 0;
// 	}
// 	else{
// 		int i;
// 		for(i=2;i<n;i++){
// 			res=pp+p;
// 			pp=p;
// 			p=res;
// 		}
// 		printf("%d",res);
// 		return 0;
// 	}
// }

//Ҫע������ڵ��ж����� �ڵݹ��ʱ��
// #include<stdio.h>
// int feibo(int n){
// 	if(n==1||n==2)
// 		return 1;
// 	else
// 		return feibo(n-1)+feibo(n-2);
// }
// int main(){
// 	printf("%d",feibo(7));
// 	return 0;
// }

// #include<stdio.h>
// int main(){
// 	int pp=1,p=1,res;
// 	int i;
// 	int n;
// 	printf("enter n:");
// 	scanf("%d",&n);
// 	if(n==1||n==2){
// 		printf("1");
// 		return 0;
// 	}
// 	for(i=3;i<=n;i++){
// 		res = p+pp;
// 		pp = p;
// 		p = res;
// 	}
// 	printf("%d\n",res);
// }

// #include<stdio.h>
// int feibo(int n){
// 	if(n==1||n==2)
// 		return 1;
// 	else{
// 		return feibo(n-1)+feibo(n-2);
// 	}
// }
// int main(){
// 	int a;
// 	printf("enter n:");
// 	scanf("%d",&a);
// 	printf("%d\n",feibo(a));
// }



//#include<stdio.h>
//int main(){
//	int first=1,second=1,third=1;
//	int i;
//	int a[40];
//	for(i=1;i<=40;i++){
//		if(i<=2)
//			a[i]=1;
//		else{
//			first=second;
//			second=third;
//			third=first+second;
//			a[i]=third;
//		}
//	}
//	for(i=1;i<=40;i++){
//		printf("%d mouth: %d rabbits\n",i,a[i]*2);
//	}
//	return 0;
//} 
//--------------------------------------------------------------------------

//-------------------------------------------------------------------------- 
/*
009
	��Ŀ���ж�101��200֮�������
	������ ���������˱�1������������û���ܹ��������� 
*/
// #include<stdio.h>
// int main(){
// 	int i;
// 	for(i=101;i<=200;i++){
// 		int j,flag=0;
// 		for(j=2;j<i;j++){
// 			if(i%j==0)
// 				flag=1;
// 		}
// 		if(flag==0){
// 			printf("%d ",i);
// 		}
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int main(){
// 	int i;
// 	for(i=101;i<=200;i++){
// 		int j;
// 		int flag = 0;
// 		for(j=2;j<i;j++)
// 			if(i%j==0){
// 				flag=1;
// 				break;
// 			}
// 		if(flag==0){
// 			printf("%d\t",i);
// 		}
// 	}
// 	return 0;
// }

//#include<stdio.h>
//int main(){
//	int i,j,k=0;
//	printf("prime number(101-200):");
//	
//	for(i=101;i<=200;i++){
//		for(j=2;j<i;j++){
//			if(i%j==0)
//				break;
//		}
//		if(j==i){
//			if(k%5==0){
//				printf("\n");
//				printf("%d ",i);
//			}
//			else{
//				printf("%d ",i);
//			}
//			k++;
//		}	
//	}
//	return 0;
//}
//------------------------------------------------------------------------


//------------------------------------------------------------------------
/*
010
	��Ŀ��ˮ�ɻ�������ӡ���еġ�ˮ�ɻ�������ָ����һ����λ�����λ���������͵��ڸ�������
		����153=1����+5����+3���� 
*/
// #include<stdio.h>
// int main(){
// 	int i;
// 	for(i=100;i<999;i++){
// 		int k=i;
// 		int a=k%10;
// 		k/=10;
// 		int b=k%10;
// 		k/=10;
// 		int c=k%10;
// 		if((a*a*a+b*b*b+c*c*c)==i)
// 			printf("%d ",i);
// 	}
// 	return 0;
// }
// #include<stdio.h>
// int main(){
// 	int i;
// 	for(i=100;i<999;i++){
// 		int a = (i%100)%10;
// 		int b = (i%100)/10;
// 		int c = i/100;
// 		if(a*a*a+b*b*b+c*c*c==i){
// 			printf("%d\t",i);
// 		}
// 	}
// 	return 0;
// }

//#include<stdio.h>
//int main(){
//	int i,j,k;
//	printf("daffodil number:\n");
//	for(i=1;i<=9;i++)
//		for(j=0;j<=9;j++)
//			for(k=0;k<=9;k++){
//				if(i*i*i+j*j*j+k*k*k==i*100+j*10+k)
//					printf("%d ",i*100+j*10+k);
//			} 
//	return 0;
//
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

/*
011
	��Ŀ����һ���������ֽ���������������90����ӡ��90=2*3*3*5�� 
	
	ע��break continue���ֶ����˳�ѭ���ṹ�� ��ֻ��if��ʱ��ʹ��break�Ǵ���� ֮����if���ڴ��forѭ����ʱ��ſ��� 
*/

// #include<stdio.h>
// #include<stdbool.h>
// bool sushu(int n){
// 	int i;
// 	for(i=2;i<n;i++){
// 		if(n%i==0)
// 			return false;
// 	}
// 	return true;
// }
// int main(){
// 	int n=90;
// 	int k=n;
// 	if(n==1){
// 		printf("1");
// 		return 0;
// 	}
// 	else{
// 		while(n!=1){
// 			int i;
// 			for(i=2;i<=n;i++){
// 				if(sushu(i)){
// 					if(n%i==0&&n!=i){
// 						printf("%d*",i);
// 						n=n/i;
// 						break;
// 					}
// 					if(n==i){
// 						printf("%d=%d",i,k);
// 						n=n/i;
// 						break;
// 					}
// 				}
// 			}
// 		}
// 	}
// }
// #include<stdio.h>
// int main(){
// 	printf("enter a number:");
// 	int n;
// 	scanf("%d",&n);
// 	int a=n;
// 	int i;
// 	if(n==1){
// 		printf("1\n");
// 		return 0;
// 	}
// 	while(n!=1){
// 		for(i=2;i<=n;i++){
// 		int j,flag=0;
// 		for(j=2;j<i;j++)
// 			if(i%j==0){
// 				flag=1;
// 				break;
// 			}
// 		if(flag==0){
// 			if(n%i==0&&n/i!=1){
// 				printf("%d*",i);
// 				n=n/i;
// 				printf("[%d]",n);
// 				break;
// 			}
// 			if(n%i==0&&n/i==1){
// 				printf("%d=%d",i,a);
// 				return 0;
// 			}
// 		}
// 		}
// 	}
	
// }










// #include<stdio.h>
// int main(){
// 	int i,num;
// 	printf("please enter a positive whole number:");
// 	scanf("%d",&num);
// 	if(num==1||num==2){
// 		printf("%d=%d",num,num);
// 	}	
// 	else{
// 		printf("%d=",num);
// 		int k=0;
// 		int a[num];
// 		int b=num;
// 		while(num!=1){
// 			for(i=2;i<=num;i++){
// 				if(num%i==0){
// 					a[k]=i;
// 					k++;
// 					num=num/i;
// 					break;
// 				}
// 		    }
// 		} 
// 		for(i=0;i<k-1;i++){
// 			printf("%d",a[i]);
// 			printf("*");
// 		}
// 		printf("%d",a[k-1]);
// 	}
// 	return 0;	
// } 
//---------------------------------------------------------------------------- 

/*
012
	��Ŀ�����������������Ƕ����ɴ��⣬ѧϰ�ɼ�>=90�ֵ�ѧ����A��ʾ��60-89 B 60����C
	
	ע����������� ��a>b��?a:b 
*/





// #include<stdio.h>
// int main(){
// 	int num;
// 	printf("enter number");
// 	scanf("%d",&num);
// 	num>=90?printf("A"):num<60?printf("C"):printf("B");
// }
//#include<stdio.h>
//int main(){
//	int grade;
//	printf("enter student scores(over zero):");
//	scanf("%d",&grade);
//	printf("the level is:");
//	(grade>90)?printf("A"):(grade<60?printf("C"):printf("B"));
//}


//------------------------------------------------------------------------------------- 
/*
013
	��Ŀ�� ��������������m��n���������Լ������С������ 
	
	ע�� ���Լ����ָ�����ܹ����������������������
		��С��������ָ����������ܹ��������������������С����
		
		���Լ�����㷽���� 1977 615�ֱ�Ϊ��������
		1977/615 = 3 (��152)
		615/152 = 4 (remain 7)
		152/7 = 21(remain 5)
		7/5 = 1 (remain 2)
		5/2 = 2 (remain 1)
		2/1 = 2(remain 0)
		���Լ�� ����remain=0ʱȡ�õ�
		��������һ���Ǵ�ĳ���С�ģ��Ժ�����һ�εı�����������һ�ε�����
		
		��С�������ļ��㷽�����������ĳ˻�/���Լ�� 
*/ 
// #include<stdio.h>
// int main(){
// 	int m,n;
// 	printf("enter m,n:");
// 	scanf("%d%d",&m,&n);
// 	int a,b,re;
// 	a=m,b=n;
// 	do{
// 		re=a%b;
// 		a=b;
// 		b=re;
// 	}while(re!=0);
// 	printf("min:%d,max:%d",(m*n)/a,a);

// }

// #include<stdio.h>
// int main(){
// 	int m,n;
// 	printf("enter m and n:");
// 	scanf("%d%d",&m,&n);
// 	// printf("%d %d",m,n);
// 	int a=m,b=n,re;
// 	if(b>a){
// 		int temp=a;
// 		a=b;
// 		b=temp;
// 	}
// 	do{
// 		re = a%b;
// 		a = b;
// 		b = re;
// 	}while(re!=0);
// 	int min = (m*n)/a;
// 	int max = a;
// 	printf("%d %d",min,max);
// }


// #include<stdio.h>
// int main(){
// 	int m,n;
// 	printf("please enter m and n in order:");
// 	scanf("%d%d",&m,&n);
// 	int a=m,b=n;
// 	int re;
// 	if(m>n){
// 		do{
// 			re=a%b;
// 			a=b;
// 			b=re; 
// 		}while(re!=0);
// 		printf("Greatest Common Divisor is %d\n",a);
		
// 		printf("Lowest Common Multiple is %d",(m*n)/a);
		
// 	}
// 	else{
// 		do{
// 			re=b%a;
// 			b=a;
// 			a=re; 
// 		}while(re!=0);
// 		printf("Greatest Common Divisor is %d\n",b);
		
// 		printf("Lowest Common Multiple is %d",(m*n)/b);
// 	}
// 	return 0;
// } 
//-------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------
/*
014
	��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
	
	�������ո���ascll������ж� ֱ���á�������ʾascll�� 
	
	
	ע��getchar()ÿ�ζ�����һ�����ݣ���������ڿ���������������  
*/
// #include<stdio.h>
// int main(){
// 	char a;
// 	a = getchar();
// 	int word=0;
// 	while(a!='\n'){
// 		if(a>='a'&&a<='z'){
// 			word++;
// 		}
// 		a = getchar();
// 	}
// 	printf("%d",word);
// }
//#include<stdio.h>
//int main(){
//	char c;
//	printf("enter a string:");
//	//ÿ��ȡһ���ַ� 
//	int n_number=0;
//	int n_space=0;
//	int n_word=0;
//	int n_other=0; 
//	c = getchar();
//	//������c��\n��ascll����бȽ�  �����Ǻ�ascll����бȽ� 
//	while(c!='\n'){
//		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
//			n_word++;
//		else if(c==' ')
//			n_space++;
//		else if(c>='0'&&c<='9')
//			n_number++;
//		else
//			n_other++;
//		c = getchar();
//	}
//	printf("there are [word number space other]: %d %d %d %d",n_word,n_number,n_space,n_other);
//	return 0;
//} 
//----------------------------------------------------------------------------------------------

/*
015
	��Ŀ����s=a+aa+aaa+aaaa+aaaa.....a��ֵ������a��һ������
		����2+22+222+2222+22222����ʱ����5������ӣ�
		������������ɼ��̿��� 
	���������������� һ����ʽ������� һ�����м��� 
	
	ע��math���е�pow��)�����㼸�η� pow��10��2��=100 
*/
// #include<stdio.h>
// #include<math.h>
// int main(){
// 	printf("enter a and number:");
// 	int a,b;
// 	scanf("%d%d",&a,&b);
// 	int i;
// 	int k=0;
// 	int sum=0;
// 	for(i=0;i<b;i++){
// 		k=a*pow(10,i)+k;
// 		sum+=k;
// 		if(i!=b-1)
// 			printf("%d+",k);
// 		else
// 			printf("%d=%d",k,sum);
// 	}
// }

// #include<stdio.h>
// #include<math.h>
//int main(){
//	int a,n;
//	printf("please enter two positive whole number[a and n]:");
//	scanf("%d%d",&a,&n);
//	int i;
//	int fn=0;
//	int b=0;//��������� 
//	int c[n];//���������������ʾ 
//	for(i=0;i<n;i++){
//		fn+=a*pow(10,i)+b;
//		b=a*pow(10,i)+b;
//		c[i]=b; 
//	}
//	for(i=0;i<n-1;i++){
//		printf("%d",c[i]);
//		printf("+");
//	} 
//	printf("%d",c[i]);
//	printf("=");
//	printf("%d",fn);
//	return 0;
//} 


//------------------------------------------------------------------------------------- 
/*
016
	��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������
		�����������ָ��ֻҪ���������Ķ����ԣ������������� û��˵����������������������������2��ʼ����1�����������ⲻ�ܱ����������� 
		���磺6=1+2+3 ����ҳ�1000���ڵ��������� 
		28=1+2+4+7+14
	ע������ؼ���Ū��ʲô�����ӣ�������������ʲô���� 
*/
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
// 	int i;
// 	printf("1 ");
// 	for(i=2;i<1000;i++){
// 		int j;
// 		int k=i;
// 		int a[100];
// 		int h=0;
// 		for(j=2;j<i;j++){
// 			if(k%j==0){
// 				a[h]=j;
// 				h++;
// 			}
// 		}
// 		int sum=0;
// 		for(j=0;j<h;j++){
// 			sum+=a[j];
// 		}
// 		//��Ϊ�κ�һ���������ܱ�1����
// 		sum+=1;
// 		if(sum==i){
// 			printf("%d ",i);
// 		}
// 	}
// }
// #include<stdio.h>
// int main(){
// 	int i;
// 	for(i=1;i<1000;i++){
// 		int j;
// 		int k=i;
// 		int a[i];
// 		int n=0;
// 		int num=0;
// 		for(j=1;j<i;j++){
// 			if(k%j==0){
// 				a[n]=j;
// 				k=k/j;
// 				num+=a[n];
// 				n++;
// 			}
// 		}
// 		if(num==i){
// 			for(j=0;j<n-1;j++){
// 				printf("%d+",a[j]);
// 			}
// 			printf("%d=%d",a[n-1],i);
// 			printf("\n");
// 		}
// 	}
// }
//#include<stdio.h>
//int main(){
//	int key;
//	int i;
//	int j;
//	int re;
//	//neither 1 nor 2 are whole number
//	printf("Perfect Number are(between 1 and 1000):");
//	//28 = 2*2*7
//	for(j=3;j<=1000;j++){
//		key=j;
//		re = 1;
//		//compute divisor
//		for(i=2;i<key;i++){
//			if(key%i==0){
//				re=re+i;
//			}
//		}
//		if(re==j){
//			printf("%d ",j);
//		}
//	}
//	return 0;
//} 
//-----------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------- 
/*
017
	��Ŀ��һ���100�׸߶��������䣬ÿ����غ�����ԭ�߶ȵ�һ�룻�����¡�
		�����ڵ�10�����ʱ�������������ף���10�η�����ߣ�
		
	������1	 2	3	4	5	6	7	8	9	10
		100	50	25 12.5	6.75	 
		
	ע����һ�ε�ʱ��ֻ�����µ���һ�� ������ʱ��ķ�������2�� 
*/
// #include<stdio.h>
// int main(){
// 	int i;
// 	int high = 100;
// 	int length = 100; 
// 	int n;
// 	scanf("%d",&n);
// 	if(n==1){
// 		printf("%d %d",high/2,length);
// 		return 0;
// 	} 
// 	high/=2;
// 	for(i=2;i<=n;i++){
// 		length+=high*2;
// 		high/=2;
// 	}
// 	printf("%d %d",high,length);
// }

//#include<stdio.h>
//int main(){
//	float high=100;
//	float distance=100;
//	int i;
//	for(i=2;i<=10;i++){
//		high/=2;
//		distance+=high*2;	
//	}
//	printf("the tenth time pass diatance is %f m and bounce high is %f m",distance,high/2);
//	return 0;	
//} 
//------------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------------ 
/*
018
	��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ������Ե���һ�룬������񫣬�ֶ����һ��
		�ڶ��������ֽ�ʣ�µ����ӳԵ���һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ���һ��
		���˵�10����������Ե�ʱ�򣬼�ֻʣ��һ��������
	�� ��һ��ժ�˶��ٸ����� 
	
	ע�����⵹���� �ӵ�10���Ƶ�9�� ������ 
*/
// #include<stdio.h>
// int main(){
// 	int i;
// 	int num=1;
// 	for(i=9;i>=1;i--){
// 		num=(num+1)*2;
// 	}
// 	printf("%d\n",num);
// }

// #include<stdio.h>
// int main(){
// 	int a=1;
// 	int i;
// 	for(i=9;i>=1;i--){
// 		a=(a+1)*2;
// 	}
// 	printf("there are %d peach in total",a);
// 	return 0;
// } 
//------------------------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------------
/*
019
	��Ŀ����ӡ������ͼ�������Ρ� ��n�� n��  ����һ������ ��ӡ����Ӧ������ 
	
	ע�������� �����ֽ��з��� �ϲ��ֿո�Ϊn/2 n/2-1 n/2-2 .... *Ϊ1 3 5.......
							  �в���ֻ��*Ϊn��
							  �²��ֿո�Ϊ1 2 3 ....  *Ϊ [n/2]*2-1 ....��5 3 1 

	  *
	 ***
	*****
	 ***
	  *


*/
// #include<stdio.h>
// int main(){
// 	int n;
// 	printf("enter n(odd number):");
// 	scanf("%d",&n);
// 	int i;
// 	int a=1;
// 	int b;
// 	for(i=0;i<n/2;i++){
// 		b=n/2-a/2;
// 		int j;
// 		for(j=0;j<b;j++)
// 			printf(" ");
// 		for(j=0;j<a;j++)
// 			printf("*");
// 		a=a+2;
// 		printf("\n");
// 	}
// 	for(i=0;i<n;i++)
// 		printf("*");
// 	printf("\n");
// 	a=n-2;
// 	for(i=0;i<n/2;i++){
// 		b=n/2-a/2;
// 		int j;
// 		for(j=0;j<b;j++)
// 			printf(" ");
// 		for(j=0;j<a;j++)
// 			printf("*");
// 		a=a-2;
// 		printf("\n");
// 	}
// }
//#include<stdio.h>
//int main(){
//	int n;
//	printf("enter Specifications of diamonds(odd number):");
//	scanf("%d",&n);
//	int i,j;
//	//n line
//	//top half 
//	for(i=0;i<n/2;i++){
//		//every line's situation
//		for(j=0;j<n/2-i;j++)
//			printf(" ");
//		int k=2*(i+1)-1;
//		while(k!=0){
//			printf("*");
//			k--;
//		}
//		printf("\n");
//	} 
//	//half
//	for(i=0;i<n;i++)
//		printf("*");
//	printf("\n");
//	//bottom half
//	int h=1;
//	for(i=n/2-1;i>=0;i--){
//		//every line's situation
//		for(j=0;j<h;j++)
//			printf(" ");
//		int k=2*(i+1)-1;
//		while(k!=0){
//			printf("*");
//			k--;
//		}
//		h++;
//		if(i!=0){
//			printf("\n");
//		}
//	} 
//	return 0;
//} 
//------------------------------------------------------------------------------------- 

/*
020
	��Ŀ����һ�������У�2/1,3/2��5/3��8/5,13/8,21/13....���������е�ǰ20��֮��
	 
*/
// #include<stdio.h>
// int main(){
// 	int i;
// 	double a=2,b=1,sum=0;
// 	for(i=0;i<20;i++){
// 		if(i!=19){
// 			sum=a/b;
// 			printf("%.0f/%.0f+",a,b);
// 			double temp=a;
// 			a=a+b;
// 			b=temp;
// 		}
// 		else{
// 			sum=a/b;
// 			printf("%.0f/%.0f=%f\n",a,b,sum);
// 		}
// 	}
// }
//#include<stdio.h>
//int main(){
//	float a=2;
//	float b=1;
//	float sum=0;
//	int i;
//	for(i=0;i<20;i++){
//		sum+=a/b;
//		printf("%.0f/%.0f",a,b);
//		int temp;
//		temp=a;
//		a+=b;
//		b=temp;
//		if(i!=19)
//			printf(" + ");
//	}
//	printf("=%.2f",sum);
//	return 0;
//} 


//------------------------------------------------------------------------------
/*
021
	��Ŀ����1+2��+3��+4��+....n�� 
*/
// #include<stdio.h>
// int digui(int n){
// 	if(n==1||n==0)
// 		return 1;
// 	else{
// 		return n*digui(n-1);
// 	}
// }
// int main(){
// 	printf("enter a number:");
// 	int n;
// 	scanf("%d",&n);
// 	int i;
// 	long int sum=0;
// 	for(i=1;i<=n;i++){
// 		sum += digui(i);
// 		if(i!=n){
// 			printf("%d!+",i);
// 		}
// 		else{
// 			printf("%d!=%ld\n",i,sum);
// 		}
// 	}
// }

//#include<stdio.h>
//int main(){
//	int n;
//	printf("please enter the factorial intent:");
//	scanf("%d",&n);
//	int i,j;
//	int sum_t=0;
//	int sum=1;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++){
//			sum*=j;
//		}
//		printf("%d!",i);
//		if(i!=n){
//			printf("+");
//		}
//		sum_t+=sum;
//		sum=1;
//	}
//	printf("=%d",sum_t);
//	return 0;
//} 
//------------------------------------------------------------------------------ 


//----------------------------------------------------------------------------- 
/*
022
	��Ŀ�����õݹ鷽����5�� 
	
	ע����Ҫ��쳲������ݹ��㷨 
*/

//#include<stdio.h>
//int main(){
//	printf("5!=%d",recursive(5));
//	
//}
//int recursive(int n){
//	if(n!=1)
//		return n*recursive(n-1);
//	else
//		return 1;
//}


//�ǵݹ��쳲�������������д��3������һ����������
//�ݹ�쳲�����
//#include<stdio.h>
//int main(){
//	printf("5 Fibonacci=%d",recursive(5));
//	
//}
//int recursive(int n){
//	if(n==1||n==2) 
//		return 1;
//	else
//		return recursive(n-2)+recursive(n-1);
//	
//}
//------------------------------------------------------------------------------


//----------------------------------------------------------------------------------
/*
023
	��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ���� 
	
	ע�����ڽ׳˺�쳲������������ֺ�һ������ǰһ������Ͻ��еĵݹ�  ��return function��i-1��...���
		������ͨ��û�к�ǰһ���й�ϵ�ĵݹ飬�����õ�return ����ֱ����� 
*/
// #include<stdio.h>
// int main(){
// 	char a;
// 	a = getchar();
// 	while(a!='\n'){
// 		printf("%c ",a);
// 		a = getchar();
// 	}
// }
// #include<stdio.h>
// void reverse(char a[],int n){
// 	if(n>=0){
// 		printf("%c",a[n]);
// 		return reverse(a,n-1);
// 	}
// }
// int main(){
// 	char a;
// 	a = getchar();
// 	int n=0;
// 	char b[100];
// 	while(a!='\n'){
// 		b[n]=a;
// 		n++;
// 		a=getchar();
// 	}
// 	reverse(b,n-1);
// 	printf("\n");

// }
//#include<stdio.h>
//void reverse(char temp[],int i);
//int main(){
//	char c;
//	int i=0;
//	printf("enter a string:");
//	char temp[100];
//	c=getchar();
//	while(c!='\n'){
//		temp[i]=c;
//		i++;
//		c=getchar();
//	}
//	reverse(temp,i-1);
//} 
//void reverse(char temp[],int i){
//	if(i>=0){
//		printf("%c",temp[i]);
//		reverse(temp,i-1);
//	}
//			
//}
//----------------------------------------------------------------------------------


//--------------------------------------------------------------------------------- 
/*
024
	��Ŀ����5��������һ���ʵ�����˶����꣬��˵���ȵ��ĸ��˴�2��
							�ʵ��ĸ��ˣ�˵�ȵ�����������
							���������ȵڶ����˴����� 
							�ڶ������ȵ�һ���˴�����
							����ʵ�һ������˵��10��
			�ʵ�����˶��
	Ҫ���õݹ�ķ������� 
							 
*/ 
// #include<stdio.h>
// int digui(int n){
// 	if(n==1){
// 		return 10;
// 	}
// 	else{
// 		return 2+digui(n-1);
// 	}
// }
// int main(){
// 	int n;
// 	printf("enter a number:");
// 	scanf("%d",&n);
// 	printf("%d\n",digui(n)); 
// }

//#include<stdio.h>
//int main(){
//	int n;
//	printf("enter number:");
//	scanf("%d",&n);
//	printf("the %d people is %d years old",n,addtwo(n));
//}
//int addtwo(int n){
//	if(n!=1){
//		return addtwo(n-1)+2;
//	}
//	else{
//		return 10;
//	}
//}
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
/*
025
	��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ���������� 123 321
	
	ע��int%pow��a��b������ֱ�����㣬Ҫ�Ȱ�pow��a��b���浽int������ ֮���ٽ���ȡ������ 

*/
// #include<stdio.h>
// #include<math.h>
// int main(){
// 	int n;
// 	printf("enter number");
// 	scanf("%d",&n);
// 	int k=n;
// 		int i;
// 		for(i=1;i<=5;i++){
// 			int a = pow(10,i);
// 			if(k%a==k){
// 				printf("weishu:%d\n",i);
// 				break;
// 			}
// 		}
// 		int j;
// 		int b[i];
// 		k = n;
// 		for(j=0;j<i;j++){
// 			b[j]=k%10;
// 			k=k/10;
// 		}
// 		for(j=0;j<i;j++){
// 			printf("%d",b[j]);
// 		}
// 		printf("\n");
// }
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n;
//	int i;
//	int j;
//	printf("please enter positive whole number(less than 100000):");
//	scanf("%d",&n);
//	for(i=1;i<=5;i++){
//		int k = pow(10,i);
//		if(n % k==n){
//			printf("digit is %d\n",i);
//			break;
//		}
//	}
//	printf("reserve output number:");
//	for(j=1;j<=i;j++){
//		printf("%d",n%10);
//		n=n/10;
//	}
//	return 0;
//}
//--------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------
/*
026
	��Ŀ������һ�������ж����Ƿ��ǻ��� 
	
	�������ж�λ�� ���������� ͷ��β���бȽ� 
*/
// #include<stdio.h>
// #include<math.h>
// int main(){
// 	int n;
// 	printf("enter a number:");
// 	scanf("%d",&n);
// 	int i;
// 	int k=n;
// 	for(i=1;i<=10;i++){
// 			int a = pow(10,i);
// 			if(k%a==k){
// 				// printf("weishu:%d\n",i);
// 				break;
// 			}
// 	}
// 	int b[i];
// 	int j;
// 	k=n;
// 	for(j=0;j<i;j++){
// 		b[j]=k%10;
// 		k=k/10;
// 	}
// 		int h;
// 		for(j=0,h=i-1;j<i/2;j++,h--){
// 			if(b[h]!=b[j]){
// 				printf("error\n");
// 				return 0;
// 			}
// 		}
// 		printf("yes\n");
		
// }

//#include<stdio.h>
//int main(){
//	int n;
//	printf("ernter a positive whole number:");
//	scanf("%d",&n);
//	int i,j,k=n;
//	for(i=1;i<=5;i++){
//		int k = pow(10,i);
//		if(n % k==n){
//			break;
//		}
//	}
//	int digit=i;
//	int a[digit];
//	for(j=0;j<digit;j++){
//		a[j]=n%10;
//		n=n/10;
//	}
//	for(i=0,j=digit-1;i<digit/2;i++,j--){
//		if(a[i]!=a[j]){
//			printf("this number isn��t palindrome");	
//			return 0;
//		}
//	}
//	printf("this number is palindrome");
//	return 0;
//} 
//----------------------------------------------------------------------------------- 

//--------------------------------------------------------------------------------------
/*
027
	��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ����������жϵڶ�����ĸ 
	monday tuesday wednesday thursday friday saturday sunday
	
	
	**********��Ҫ*********������getchar������ 
	ע��getchar()�����ζ�ȡ�����ϵ����� ����������һ����ĸ�����û��з������ս�������
	 ��ʱ�ڵ��õڶ��� geychar()ʱ�൱�ڶ����˻��з������Դ�ʱͨ���յ���һ��getchar�������Ե�������з� 
*/ 

//#include<stdio.h>
//int main(){
//	char c;
//	printf("enter first small letter:");
//	c = getchar();
//	getchar();//�Ե����з� 
//	switch(c){
//		case 'm':
//			printf("Monday");
//			break;
//		case 'w':
//			printf("Wednesday");
//			break;
//		case 'f':
//			printf("Friday");
//			break;
//		case 's':
//			printf("enter second small number:");
//			c = getchar();
//			if(c=='a')
//				printf("Saturday");
//			else if(c=='u')
//				printf("Sunday");
//			else
//				printf("error enter");
//			break;
//		case 't':
//			printf("enter second small number:");
//			c = getchar();
//			if(c=='u')
//				printf("Tuesday");
//			else if(c=='h')
//				printf("Thursday");
//			else
//				printf("error enter");
//		default:
//			printf("error enter");
//			break;
//				
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------
/*
028
	��Ŀ��ɾ��һ���ַ�����ָ����ĸ���磺�ַ�����aca��ɾ�����е�a 
	
	ע��c����û��string���͡���char������д��桿 c++��java��vb���� 
	
		�����Ǹ����� ��getchar����ʹ�õڶ��ε�ʱ�� Ҫ��һ��getchar�����Ե�\n 
*/
//#include<stdio.h>
//int main(){
//	char c;
//	char model;
//	printf("enter want delet char:");
//	model = getchar();
//	getchar();
//	printf("please enter a string:");
//	c = getchar();
//	char treat[100];
//	int i=0;
//	while(c!='\n'){
//		if(c!=model){
//			treat[i]=c;
//			i++;
//		}
//		c = getchar();
//	} 
//	int j;
//	printf("after treatment string:");
//	for(j=0;j<i;j++){
//		printf("%c",treat[j]);
//	}
//	return 0;
//}
//-------------------------------------------------------------------------------------- 

//--------------------------------------------------------------------------------------
/*
029
	��Ŀ���ж�һ�����Ƿ���������
	�������ֳ�������prime number��һ������1����Ȼ��������1�����������⣬�����Ĳ��������� 
*/
//#include<stdio.h>
//int main(){
//	int a;
//	printf("please enter a number:");
//	scanf("%d",&a);
//	int i;
//	if(a<=1){
//		printf("this number isn��t prime number!");
//	}
//	else{
//		for(i=2;i<a;i++){
//			if(a%i==0){
//				printf("this number isn��t prime number!");
//				return 0;
//			}
//		}
//		printf("this number is prime number!");
//	}
//	return 0;
//} 
//--------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------
/*
030
	��Ŀ���ַ�����ת���罫�ַ�����i	like kobe����ת�ɡ�ebok ekil i�� 
*/
//#include<stdio.h>
//void reserve(char a[],int i);
//int main(){
//	char c;
//	printf("enter a string:");
//	c = getchar();
//	char s[100];
//	int i=0;
//	while(c!='\n'){
//		s[i]=c;
//		i++;
//		c = getchar();
//	}
//	printf("reserve string is:");
//	reserve(s,i-1);
//	return 0;
//} 
//void reserve(char a[],int i){
//	if(i>=0){
//		printf("%c",a[i]);
//		reserve(a,i-1);
//	}
//	else{
//	}
//}
//---------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------- 
/*
031
	��Ŀ����100���ڵ�����
	ע����ʹ��bool���͵�ʱ����c������Ҫ�ȵ���stdbool.h�� 
*/
//#include<stdio.h>
//#include<stdbool.h>
//bool whether_prime_number(int n);
//int main(){
//	int i;
//	printf("prime number are(2-100):\n");
//	int k=0;
//	for(i=0;i<=100;i++){
//		if(whether_prime_number(i))
//			if(k%5!=0||k==0){
//				printf("%d ",i);
//				k++;
//			}
//			else{
//				printf("\n%d ",i);
//				k++;
//			}
//	}
//	return 0;
//	
//} 
//bool whether_prime_number(int n){
//	if(n<=1)
//		return false;
//	else{
//		int i;
//		for(i=2;i<n;i++){
//			if(n%i==0){
//				return false;
//			}
//		}
//		return true;
//	}
//}
//---------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------
/*
032
	��Ŀ����һ��3*3����Խ���Ԫ��֮�� 
	
	ע��ֻ�з�����жԽ��� 
	����Ϊ��һ���������� ���Բ���Ҫ����ɾ�������Ǹ��ڵ� 
*/
//#include<stdio.h>
//int main(){
//	printf("enter array��s dimension:");
//	int n;
//	scanf("%d",&n);
//	int a[n][n];
//	printf("enter %d*%d array:\n",n,n);
//	int i,j,sum=0; 
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//			if(i==j||i+j==n-1)
//				sum+=a[i][j];
//		}
//	}
//	//odd dimensions will add double a[n/2]a[n/2] 
//	//����Ҫ�����ٴμ� ��Ϊ�����һ���������� ��������ά�Ⱦ������ĵ��Ǹ���ͬʱ���� �жϵ���������
//	//����Ҳֻ���һ�� 
////	if(n%2==1)
////		sum-=a[n/2][n/2];
//	printf("the sum of the diagonals:%d",sum);
//	return 0;
//}
//--------------------------------------------------------------------------------------- 

//----------------------------------------------------------------------------------------
/*
033
	��Ŀ����һ���Ѿ��ź�˳������飬������һ������Ҫ����ԭ���Ĺ��ɽ�������������
	
	***************
	ע �������������㷨 
		��char����ǿת��int����ʱ ��ת�����˶�Ӧ��ascll��ֵ �������� ��Ҫ��ȥ48 ��Ϊ0��ascllΪ48 
*/
//#include<stdio.h>
//int main(){
//	char a[100];
//	int key;
//	printf("enter a asecond string number:");
//	key = getchar();
//	int i=0;
//	while(key!='\n'){
//		a[i]=(int)(key)-48;
//		i++;
//		key = getchar();
//	}
//	printf("enter a number:");
//	int b;
//	scanf("%d",&b);
//	int j;
//	int flag=0;//flag��־λ �ж��Ƿ�������˲��� 
//	for(j=0;j<i;j++){
//		if(b<=a[j]){
//			int k;
//			for(k=i;k>j;k--){
//				a[k]=a[k-1];
//			}
//			a[j]=b;
//			flag=1; 
//			break;
//		}
//	}
//	if(flag==0)
//		a[i]=b;
//	printf("after insert the string number:");
//	for(j=0;j<=i;j++){
//		printf("%d ",a[j]);
//	}
//	return 0;
//} 
//----------------------------------------------------------------------------------------- 



//------------------------------------------------------------------------------------------
/*
034
	��Ŀ�������鵹�� ��������� 
	
	ע�����ã���������ײ���β�����н��� 
*/
//#include<stdio.h>
//int main(){
//	char a[100];
//	int key;
//	printf("enter a string number:");
//	key = getchar();
//	int i=0;
//	while(key!='\n'){
//		a[i]=(int)(key)-48;
//		i++;
//		key = getchar();
//	}
//	int j,k;
//	for(j=0,k=i-1;j<i/2;j++,k--){
//		int temp;
//		temp=a[j];
//		a[j]=a[k];
//		a[k]=temp;
//	}
//	printf("after reserve:");
//	for(j=0;j<i;j++){
//		printf("%d ",a[j]);
//	}
//	return 0;	
//} 
//------------------------------------------------------------------------------------------

//------------------------------------------------------------------------------------------
/*
035
	���ֱ�����
		ȫ�ֱ������ں������⣻�����ڱ��c�ļ������д��ͨ��extern int a��ʹ�� 
		��̬������ Ϊ�˷�ֹ�ڶ�ε���ͬһ��������ʱ�� ��γ�ʼ�� ͨ������static�� 
		auto����
		register���� 
		https://blog.csdn.net/bogedaye/article/details/88377539
		
		
		
036
	����������


037
	�궨�壺����һ������ #define a 3��
			���߶���һ���ַ� #define CH *
			���߶���һ��ʽ��#define square��a��b�� a*b*b
							ʹ�õ�ʱ��ͨ��square��1,2�����ﵽ1*2*2��Ч�� 
							���ַ����ͺ�����ȵĺô�������������������ݵ����ͺͷ������ݵ����� 
		��ע��ṹ��#define �Ժ�Ҫʹ�õ����� Ҫ����Ķ�������һ���������� 
	 
038
	 �궨����ֻ�ǡ��滻�����Բ��������ȼ����⣺
	 	����Ϊֻ�ǻ��滻��ص�ʽ�� ���Կ��ܳ������ȼ������⣨�����Զ������ţ�
	 	���Խ���ķ���Ҳ�ܼ� �����ڶ�Ӧ�ı��ʽ�м������� 
		 ���� #define add��a��b�� ��a��+��b��
		 ������ʹ����add��a��a+b��*5����Ҳ����������ȼ����� 
		 

039
	�������룺#if #ifdef #ifndef 
			ע�����ǰ������#�ģ�
			#if�÷���//��if���������ж�����������ʱ ���� ���б��� ���ᵽ����������ȥ 
				#if ���ͳ����ı��ʽ //���ͳ��� ����ָ���Ǻ궨����� Ҳ����ָ�������ͳ����� const int a=3 a��ֵ������ȥ�ı� 
					�����
				#elif ���ͳ����ı��ʽ
					�����
				#else
					�����
				#endif //���ڽ��� 
			 
		
			#ifdef�÷��� 
				Ҫ��#define a����ʹ�� Ҳ����˵���������������� ��ô��ִ�г����1 û�оͳ����2 
			#ifdef ����
				�����1
			#else
				�����2
			#endif 
			
			
			#ifndef�÷���
				�������ifdef�����෴ ���û����������� ��ôִ�г����1 
			#ifndef ����
				�����1
			#else
				�����2
			#endif 
			
			
	
040
	includeͷ�ļ���������һ��.c�ļ� 
	************************Ҫ��֤.h.c���ļ�Ҫ����.c�ļ�����ͬһ���ļ�����*******************
	*******�����ⲿ.c�ļ��еĺ��� �����ļ���ֱ��ͨ�������˺��� ��֮����о���ʹ��
	*******����.h�ļ� �еĺ궨����� �����ļ���ͨ��include����.h�ļ��� �����ʹ�� 
		.h �ļ��ж������� .c�ļ��ж��Ǻ���
		
	
*/ 			
//------------------------------------------------------------------------------------------ 


//----------------------------------------------------------------------------------------
/*
041 
	01�� 
	��λ��	&��������һ��0���0 
	��λ��	|��������һ��1�����1 
	��λ���	^:����������ͬ��ʱ�� ���1 
	 
	10��������^��&��|��10������ ������ͨ��  2����ת������  ת�ɶ����������ܷ���������Ĺ��� 
*/
//#include<stdio.h>
//#include<math.h>
////binary conversion����10����ת����2���� 
//int b_c(int n){
//	if(n==1)
//		return 1;
//	else{
//		int a[100];
//		int i=0;
//		while(n!=1){
//			a[i]=n%2;
//			n=n/2;
//			i++;
//		}
//		a[i]=1;
//		int num=0;
//		int j;
//		for(j=0;j<=i;j++){
//			num+=pow(10,j)*a[j];
//		}
//		return num;
//	}
//} 
//int main(){
//	int a=6;
//	int b=5;
//	int c=a ^ b;
//	printf("%d",b_c(c)); 
//	return 0; 
//} 
//-----------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------
/*
042
	~����10����ת���ɵĶ����ƽ��а�λȡ�� �����ܷ���λ ������λҲȡ���� 
		5��0000 0101
		~5:1111 1010�������������д洢�Ĳ������ʽ ��Ҫ�������ʽת����ԭ�룩 
		1111 1010 - 1 = 1111 1001
		ȡ���� 1000 0110//ע������ȡ�����ȡ���ǲ�һ���� 
		 
		 
	ע��������8λ��2������ ���е�һλ����������� 0Ϊ�� 1Ϊ��
	************�Ҹ����ڼ�����ж���ͨ��������д洢��******************************* 
	5��ԭ�� 0000 0101  ���� 0000 0101  ���� 0000 0101
	-5��ԭ�� 1000 0101 ���루����λ���䣬����ȡ����1111 1010 ���루����λ���䣬����ȡ�����1��1111 1011
	  
	
	
*/
//#include<stdio.h>
//#include<math.h>
////binary conversion����10����ת����2����  ֻ�������� 
//int b_c(int n){
//	if(n==1)
//		return 1;
//	else{
//		int a[100];
//		int i=0;
//		while(n!=1){
//			a[i]=n%2;
//			n=n/2;
//			i++;
//		}
//		a[i]=1;
//		int num=0;
//		int j;
//		for(j=0;j<=i;j++){
//			num+=pow(10,j)*a[j];
//		}
//		return num;
//	}
//} 
//int main(){
//	int a=6;
//	int b=~a;
//	printf("%d",b);
//	return 0; 
//} 
//----------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------
/*
043
	��Ŀ��������������
	1
	1	1
	1	2	1
	1	3	3	1
	1	4	6	4	1
	1	5	10	10	5	1 
	1	6	15	20	15	6	1
	1	7	21	35	35	21	7	1
	
	ע������ÿ�е����ݺ���һ���е�����֮��Ĺ�ϵ 
*/
//#include<stdio.h> 
//int main(){
//	int n;
//	printf("please enter dimension:");
//	scanf("%d",&n);
//	int a[n][n];
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<=i;j++){
//			if(j==0||j==i)
//				a[i][j]=1;
//			else
//				a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	printf("Pascal Triangle:\n");
//	for(i=0;i<n;i++){
//		for(j=0;j<=i;j++){
//			printf("%d ",a[i][j]);
//		}
//		if(i!=n-1){
//			printf("\n");
//		}
//	}
//	return 0;
//}
//--------------------------------------------------------------------------------------- 

//---------------------------------------------------------------------------------------
/*
044
	��Ŀ����дһ���������� 
	ע��***********************************************
		���ڴ���ַ�ĺ�������д����ʱ ���������ָ����ʽ ���ڽ��մ����ĵ�ַ
					      ���ݺ���ʱ ����Ϊ&ȡ�õĵ�ַ 
*/
// int swap(int *a,int *b){
// 	int temp;
// 	temp=*a;
// 	*a=*b;
// 	*b=temp;
// }
// #include<stdio.h>
// // ָ����ǻ�ֵ�Ĳ���
// void swap(int *a,int *b){
// 	int temp;
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
// int main(){
// 	int a=5,b=6;
// 	swap(&a,&b);
// 	printf("%d %d",a,b);
// }




//#include<stdio.h>
//#include"replace.c"
//void replace(int *a,int *b);
//int main(){
//	int a,b;
//	printf("enter two number:");
//	scanf("%d%d",&a,&b);
//	//����Ҫ��ȡ��ַ�� ȡ����Ӧ�ĵ�ַ 
//	replace(&a,&b);
//	printf("after replace the two number:%d %d",a,b);
//	return 0;
//}
//--------------------------------------------------------------------------------------- 

//--------------------------------------------------------------------------------------
/*
045
	��Ŀ���������飬����һ����������ĵ�һ��Ԫ�ؽ��н�������С��һ�������һ��Ԫ�ؽ��н���
 	
 	ע����ѡ���ʱ��Ϊ�˱������ֵ����Сֵ֮��ͬʱѡ��������ͻ��
	 ��������Сֵ�����ڵ�һ��λ�� �������ֵҪ���������� 
	 	����һ��һ�λ����Ȼ����/С��֮�����ظ�һ�飬ѡ��С/�� 
*/
//#include<stdio.h>
//#include"replace.c"
//void replace(int *a,int *b);
//int main(){
//	char c;
//	printf("enter a string number:");
//	c = getchar();
//	int a[100];
//	int i=0;
//	while(c!='\n'){
//		a[i]=(int)c-48;
//		i++;
//		c = getchar();
//	}
//	if(i==0){
//		printf("no number!");
//		return 0;
//	}
//	else if(i==1){
//		printf("after handle:%d",a[0]);
//		return 0;
//	}
//	else{
//		int max_index=0,min_index=0;
//		int j;
//		for(j=1;j<i;j++){
//			if(a[max_index]<a[j])
//				max_index=j;
//		}
//		if(max_index!=0){
//			replace(&a[max_index],&a[0]);
//		}
//		for(j=1;j<i;j++){
//			if(a[min_index]>a[j])
//				min_index=j;
//		}
//		if(min_index!=0){
//			replace(&a[min_index],&a[i-1]);
//		}
//		printf("after handle:");
//		for(j=0;j<i;j++){
//			printf("%d ",a[j]);
//		}
//	}
//	return 0;
//} 
//-------------------------------------------------------------------------------------- 


//--------------------------------------------------------------------------------------
/*
046
	��Ŀ����n��������ʹ��ǰ��ĸ���˳������ƶ�m��λ�ã����m���������ǰ���m����
	 
	 
	ע����Щ������� ���ᱨ�� �������ѷ��ִ���� һ��Ҫ������±� ������û��Խ�� 
*/
//#include<stdio.h>
//int main(){
//	//����һ������ 
//	char c;
//	printf("enter a string whole number:");
//	c = getchar();
//	int n=0;
//	int a[100];
//	while(c!='\n'){
//		a[n]=(int)c-48;
//		n++;
//		c = getchar();
//	} 
//	//����m 
//	printf("enter m:");
//	int m;
//	scanf("%d",&m);
//	//�洢�������Ԫ��
//	int b[m];
//	int i,k;
//	for(i=n-m,k=0;i<n;i++,k++){
//		b[k]=a[i];	
//	}
//	//û�������Ԫ������ƶ�m��λ��
//	for(i=n-m-1;i>=0;i--){
//		a[i+m]=a[i];
//	}
//	
//	//����������Ԫ�ش����ͷ 
//	for(i=0;i<m;i++)
//		a[i]=b[i];
//	//�������
//	printf("after remove m places:");
//	for(i=0;i<n;i++){
//		printf("%d",a[i]);
//	} 
//} 
//-------------------------------------------------------------------------------------- 


//--------------------------------------------------------------------------------------
/*
047
	��Ŀ����n����Χ��һȦ��˳���ź�
		�ӵ�һ���˿�ʼ��������1��3��������
		���Ǳ���3�����˳�Ȧ�ӣ���������µ���ԭ���ĵڼ��ŵ���λ
		
	ע���ǽ���n��ѭ��1-3���� ���ֻ��ʣ��һ���� 
	
	123456789             12345678       k:3 6 1 5	2	8	4	7
	12 45 78 			  12 45 78
	12  5 7                2 4  78 
	12    7                  4  7     
	1     7                     7
	1
	
	
	ע�����������ģ��
	1���ݲɼ�ģ�飺����Ҫ�Զ����˽��б��
	2����ѭ��
		1�ж��Ƿ���������ģ�� ��ֻʣһ�����ݵ�ʱ�� ����ѭ��
		2 kһֱ����ߣ�һֱ++ 
		�ؼ�һ���� 
			3 iҲһֱ��������ߣ����Ƕ���mark=0��λ�ã�������ͨ��while��ʵ�֣�
				�ҵ�i>=n��ʱ�򻯳�0���Ӷ�ʵ�ֽ�����һ�ֵ�ѭ���� 
		4 ��k��3�ı�����ʱ�򣬽�Ŀǰ��iλ�ô������ݵ�markλ��0, 
	                
*/
//#include<stdio.h>
//int main(){
//	//����n 
//	int n;
//	printf("enter n:");
//	scanf("%d",&n);
//	int i;
//	//�����ṹ�� 
//	struct sequence{
//		int data;
//		int mark;
//	};
//	struct sequence a[n];
//	//���б�� 
//	for(i=0;i<n;i++){
//		a[i].data=i+1;
//		a[i].mark=1;
//	}
//	int flag=0;
//	int k=1,j,count=0,index;
//	i=0;
//	while(1){
//		//�鿴Ŀǰ���м������б�� 
//		count=0;
//		for(j=0;j<n;j++){
//			if(a[j].mark!=0){
//				count++;
//				index=j;
//			}
//		}
//		if(count==1){
//			printf("final number is:%d",index+1);
//			return 0;
//		}
//		//��k��3�ı�����ʱ��ɾ����Ӧ�ı�� 
//		if(k%3==0){	
//			a[i].mark=0;	
//		}
//		//k����ƶ� 
//		k++;
//		//i����ƶ� 
//		i++;
//		//�жϴ˴��ƶ��Ƿ������������Ƿ�Խ�磻
//		if(i>=n)
//			i=0;
//		//�����Ѿ�ɾ����ŵ�λ�ý�������  
//		if(a[i].mark==0){
//			//��������ƶ���ֱ���ҵ����������� 
//				while(a[i].mark!=1){
//					i++;
//			//Խ��Ļ�ͬ��Ҫ���д�ͷ��ʼ 
//					if(i>=n)
//						i=0;
//				}
//					
//		}
//	}
//} 

/*���������� 

//#include<stdio.h> 
//int length;
////ɾ��������ָ��λ��Ԫ�� 
//int delete_num(int *a,int i){
//	int j;
//	printf("[%d:%d]",i,a[i]);
//	for(j=i;j<length;j++){
//		a[i]=a[i+1];
//	}
//	length--;
//}
//int main(){
//	printf("enter man��s number:");
//	scanf("%d",&length);
//	int k;
//	int a[length];
//	int n=length;
//	//���б�� 
//	for(k=0;k<length;k++){
//		a[k]=k+1;
//	}
//	k=1;
//	while(length!=1){
//		if(k%3==0){
//			delete_num(a,k)
//		}
////		if((k%n)%3==0&&(k%n!=0)){
////			delete_num(a,(k%n)-1);
////			//printf("[%d]",(k%n));
////		}
//		k++;
//	}
//	int i=0;
////	for(i=0;i<length;i++){
////		printf("%d ",a[i]);
////	}
//	printf("%d",a[0]);
//	return 0;
//}

*/ 
//-------------------------------------------------------------------------------------- 



//----------------------------------------------------------------------------------
/*
048
	��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main����������ַ�����������䳤�� 

	ע�����������ַ���ʱ��ͨ��\n���жϽ����������Ѿ�֪�����ַ�����ͨ��\0���ж���ֹ 
*/
//#include<stdio.h>
//#include"charlength.c"
//int charlength(char a[]);
//int main(){
//	int c;
//	printf("enter a string:");
//	c = getchar();
//	char a[100];
//	int i=0;
//	while(c!='\n'){
//		a[i]=c;
//		i++;
//		c=getchar();
//	}
//	printf("string length is %d",charlength(a));
//	return 0;
//}
//---------------------------------------------------------------------------------- 

//-----------------------------------------------------------------------------------
/*
049
	��Ŀ����дinput������output�����������룬��� 5��ѧ�������ݼ�¼ 
	
	ע������ʹ�ýṹ�壺���Ը������֣�typedef struct ����{}Ҫ�ĵ����֣� 
*/
// typedef struct student{
// 	int a;
// 	int b;
// }Lnode,*linklist;
//#include<stdio.h>
//typedef struct student{
//	int num;
//	int level; 
//}student;
//void input(student *stu);
//void output(student *stu);
//int main(){
//	student stu[5];
//	input(stu);	
//	output(stu);
//	return 0;
//}
//void input(student *stu){
//	printf("enter 5 students information[number and level]:\n");
//	int num,level;
//	int i;
//	for(i=0;i<5;i++){
//		scanf("%d%d",&num,&level);
//		stu[i].num=num;
//		stu[i].level=level;
//	}
//	printf("upload successful\n");
//}
//void output(student *stu){
//	int i;
//	printf("5 students information[number and level]:\n");
//	for(i=0;i<5;i++){
//		printf("%d %d",stu[i].num,stu[i].level);
//		if(i!=4)
//			printf("\n");
//	}
//}
//----------------------------------------------------------------------------------- 


//------------------------------------------------------------------------------------
/*
050
	��Ŀ��malloc�÷�������һ������
	
	
	ע��
	
	����ָ�룺 
		int *p//����һ��ָ��
		int i=5//����һ������
		
		//���������ַ�ʽ�����Դ洢���� 
		*p=i; //��p���ָ��ָ���λ���ϵ���5 
		p=&i�� //��p�ĵ�ַ��i�ĵ�ַ 
		 
		printf����%d����*p��//���������������� 5
		 				p   //����������������pָ��ĵ�ַ 
		 
	
����malloc��
		
	��ʹ��֮ǰ����stdlib.h�� 
	��ʹ��ģʽ����������* �������� = ����������*��malloc��sizeof���������ͣ�*��С���� 
	��ָ�������գ�int* p =��int *�� malloc(sizeof(int)*100);
	//�൱������pָ���� ���ٵ�100���洢��ַ�Ŀ�ͷ
	
	ͬʱ������֮��Ҫ��p���л��գ�free��p���� 
	
	
	
���ڷ����������ν���ʹ�ã�

	��strcpy���������ݸ��Ƶ�p�У�
	����#include<string.h>
	����strcpy��p,"hello"��
	���ߵ����ں����������ݵĺ�����
	strcat��p,"teacher"��; 
	 
���������ڴ�realloc��
	
	//��ʼʱ����� 
	int* p =��int *�� malloc(sizeof(int)*100);
	
	��Ҫ������һ��ָ��ȥָ�� 
	int *q = ��int *��realloc��p,sizeof(int)*20��;
	//�൱����ԭ��p�Ļ����ϣ�������20�� 
		 
*/
//#include<stdio.h>
//int main(){
//	int a=5;
//	int *p;
//	p=&a;
//	printf("%d",*p);
//}
//------------------------------------------------------------------------------------ 


//----------------------------------------------------------------------------------
/*
051
	��Ŀ������һ�����������䷭ת����� 
*/
//#include<stdio.h>
//int main(){
//	int a;
//	printf("enter a number:");
//	scanf("%d",&a);
//	int b[100];
//	int i=0;
//	while(a){
//		b[i]=a%10;
//		a=a/10;
//		i++;
//	}
//	int j;
//	printf("after reserve:");
//	for(j=0;j<i;j++){
//		printf("%d",b[j]);
//	}
//	return 0;
//} 
//----------------------------------------------------------------------------------


//-----------------------------------------------------------------------------------
/*
052
	��Ŀ��
		��дһ��ָ�뺯��������n
		nΪż����ʱ�򣬵��ú�����1/2+1/4+1/6+.....1/n ������ʱ1/1+1/3+1/5.....1/n 
		
		ָ�뺯��������ֵ��ָ��ĺ�������������һ���������������ķ���ֵ��һ��ָ��
		����ָ�룺������һ��ָ�룬��ָ��ĵ�ַָ����һ����������������ָ������ָ��
				  �൱���Ƕ���һ��ָ�룬ָ���� 
		
*/
//ָ�뺯��������
//#include<stdio.h>
//int add(int x,int y){
//	return x+y;
//} 
//int main(){
//	int add(int x,int y);
//	//������Ƕ��庯��ָ���ģʽ  ע�������Ҫȥadd�ĵ�ַ 
//	int (*p)(int,int)=&add;
//	//�������60 
//	printf("%d",p(20,p(10,30)));
//}


//ע������i=i+1���Լ�д��i++�����඼������i=i+n,����ֻдi+n 
//	  �ڳ���С����ʱ��������ø��������� 
//	  ���ں���ָ��p�����ͣ�����Ǻͺ����ķ���ֵ������ͬ 

//�����Ŀ
//#include<stdio.h>
//float fraction(int n){
//	float i;
//	float sum=0;
//	if(n%2==0){
//		for(i=2;i<=n;i=i+2){
//			printf("1/%.0f",i);
//			if(i!=n)
//				printf("+");
//			sum+=1/i;
//		}
//		printf("=%f",sum);
//	}
//	else{
//		for(i=1;i<=n;i=i+2){
//			printf("1/%.0f",i);
//			if(i!=n)
//				printf("+");
//			sum+=1/i;
//		}
//		printf("=%f",sum);
//	}
//}
//int main(){
//	float fraction(int n);
//	int n;
//	printf("enter n(positive whole number):");
//	scanf("%d",&n);
//	float (*p)(int) =  &fraction;
////	fraction(n);
//	p(n);
//	return 0;
//} 
//----------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------
/*
******************************************************************************************
053
	��Ŀ��ָ��ָ���ָ�루����ָ�룩
		�ؼ����𿪿� int *    p          �Լ�int *  *    p 
		
		�ܣ��洢��ͨ������洢ָ��ĵ�ַ�ǲ�һ���� 
	 	������ͨ���ݵĵ�ַ��Ҫ�洢��ָ��ָ���λ�����磺ͨ������ָ��
		 ��int a��int *p=&a��
		����ָ��ĵ�ַҪ��洢����һ��ָ��ָ���λ���Ҫͨ������ָ�� 
		��int *p��int **q=&p�� 
		
		%x�������ַ 
		
		
		ֱ�����ָ����������������洢�ĵ�ַ����*p���������洢�ĵ�ַ�е�ֵ 
		
		
		*ָ����� �൱�� �ǲ鿴�Ĵ洢�ĵ�ַ�д洢������
		����
		int *p��
		int a=5�� 
		*p=a��
		Ҳ���൱����p�洢��a�ĵ�ַ=��p=&a�� 
		
		ָ���ڿ�ʼ��ʱ��һ��Ҫ����ֵ 
*/
//#include<stdio.h>
//int main(){
//	int a=5;
//	//p�д���int����a�ĵ�ַ 
//	int *p=&a;
//	//q�����ŵ���p����int*���͵ĵ�ַ 
//	int **q=&p;
//	//ͬ��������ַҲ��һ�� h��������q�ĵ�ַ 
//	int ***h=&q;
//	//*h=q�ĵ�ַ�д洢�Ķ���=p�ĵ�ַ 
//	printf("%x",*h);  
//	//q=p�ĵ�ַ *q=p�ĵ�ַ�д洢�Ķ��� 
//	printf("%x %x",&a,*q);
//	//**q=:q=���洢�ĵ�ַ��p�ĵ�ַ��   *q=���洢�ĵ�ַ�д洢�����ݡ�a�ĵ�ַ��  **q=���洢�ĵ�ַ�еĴ洢�����ݣ���ַ���д洢�����ݡ�a������ݡ� 
//	printf("��%d��",**q); 
//} 
//---------------------------------------------------------------------------------


//----------------------------------------------------------------------------------
/*
054
	��Ŀ����ά����
	 	
		 ֱ�Ӵ洢ʱ��int a��3����4��={{1,2,3,4}��{1,2,3,4}��{1,2,3,4}}
		 �ڼ�����еĴ洢��ʽ���������洢�� �������û�ж�ά�ṹ	
		 ͬʱ����a��0���ǵ�һ�еĵ�һ��Ԫ�صĵ�ַ �����ַ�д洢�˵�һ��Ԫ�ص����� 
*/ 
//#include<stdio.h>
//int main(){
////	int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}} ;
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int (*p)[3]=a;//��Ϊ����a�������ʱһ����ַ ���Բ�����ȡ��ַ��   ע�� �����n�� n�����Ǻ�mn���������ֵ��ͬ 
//	//(p+0)ȷ����һ�� *��p+0��������һ�е����� *��*��p+0��+0�����������е�ĳһλ������ 
//	printf("%d",*(*(p+1)+1));
//} 
//---------------------------------------------------------------------------------- 

//---------------------------------------------------------------------------------
/*
055
	��Ŀ���ṹ��
	
	���ڽṹ���е�.��->������ 
*/
//#include<stdio.h>
////����ṹ�� ͬʱ������������� 
//typedef struct student{
//	int num;
//	int level;
//}stu;
//int main(){
//	stu a;
//	//���������ı��� ����ֱ����.���в��� 
//	a.num=0;
//	printf("%d\n",a.num);
//	//���ڶ����ָ��  ���ṹ��ĵ�ַ������ 
//	stu *p=&a;
//	//�����ַ��� һ����ȡָ��Ĵ洢�ĵ�ַ��ֵȻ������.���� ���߾�����->ֱ�Ӳ��� 
//	printf("%d %d",(*p).num,p->num); 
//	
//	//����ǽṹ��ָ��ָ�����һ���ṹ��������׵�ַ ��ô����ͨ��p++��ָ����һ���ṹ��
////		Ҳ�������ǵ�λ�ö��ǰ��ŵ� 
//} 
//--------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------
/*
056
	��Ŀ���ַ����Ƚϴ�С 
	
	�ַ����Ƚϴ�С����strcmp��str1��str2����ʵ�֣� 
	��������᷵��str1-str2�Ľ��
	���>0��ô˵��str1����str2 
	strcmp() ����� ASCII �������αȽ� str1 �� str2 ��ÿһ���ַ���
	ֱ�����ֲ������ַ������ߵ����ַ���ĩβ������\0����
	
	��fgets���洢��λ�ã��ַ����ĳ��ȣ�stdin��;
	�������Ĭ����ͨ��\n������������������ʡȥ��ͨ��whileѭ�� getchar�����ϵ����� 
	�����ַ����ĳ��� ͨ��sizeof str/sizeof str[0]��ʵ�֣�
	char a[5];
	fgets(a,5,stdin);
	Ҳ�����ַ����ĳ���/�����洢λ�õĳ��ȣ�������ַ�����ĳ��� 
	********�������ַ���ֻ�ܴ��ַ����顢�Ҵ������ݵĳ���Ҳ��֪��*********** 
	
	�����ַ�������������֣����Բ���ð�����򡢡����Ͻ��� ѡ������һ����
	ע�������ַ����齻��ͨ��strcpy��ʵ�� 
	
	
*/
//#include<stdio.h>
//#include<stdlib.h> 
//#include<string.h>
//void swap(char a[],char b[],int n);
//int main(){
//	printf("please enter you string��s number:");
//	int n;
//	scanf("%d",&n);
//	printf("please enter %d strings[same length]:\n",n);
//	getchar();
//	int i;
//	int num;
//	char a[n];
//	char b[n][100];
//	for(i=0;i<n;i++){
//		printf("%d:",i);
//		int j=0;
//		a[i] = getchar();
//		while(a[i]!='\n'){
//			b[i][j]=a[i];
//			j++;
//			a[i] = getchar();
//		}
//		num=j;
//		//printf("\n");
//	}
//	int k;
//	for(i=1;i<n;i++){
//		for(k=0;k<n-i;k++){
//			//���ô�����Ĵ�С 
////			printf("[i:%d,k:%d,%d]",i,k,strcmp(b[k],b[k+1]));
//			if(strcmp(b[k],b[k+1])>0){
//				swap(b[k],b[k+1],num); 
//			}
//		}
//	}
//	printf("after order:\n");
//	for(i=0;i<n;i++){
//		for(k=0;k<num;k++){
//			printf("%c",b[i][k]);
//		}
//		if(i!=n-1)
//			printf("\n");
//	}
//	return 0;
//} 
//void swap(char a[],char b[],int n){
//	char temp[n];
//	strcpy(temp,a);
//	strcpy(a,b);
//	strcpy(b,temp);
//}
//------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------
/*
057
	��Ŀ��809*����=800*����+9*����  ����������λ��
		  809*����Ϊ4λ�� 8*����Ϊ2λ�� 9*����Ϊ3λ��
		  �󣿣����Լ�809*������Ľ�� 	 
*/
//#include<stdio.h>
//int main(){
//	int i;
//	for(i=10;i<99;i++){
//		if(809*i==800*i+9*i){
//			if((809*i)/10000==0&&(809*i)/1000>0)
//				if((8*i)/10>0&&(8*i)/10<10)
//					if((9*i)/100>0&&(9*i)/100<10){
//						printf("??:%d 809*??:%d",i,809*i);
//						return 0;
//					}			
//		}
//	}
//	printf("no find");
//	return 0;
//} 
//----------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------
/*
058
	��Ŀ���˽���ת����10���� 
		 
	ʮ����		 10:         16
	������		 1010        10000
	�˽���		 12           20
	
	����10��������������֮���ת��������ͨ�� 10������ת��2���� 2������ת��8��16���� 

	����whileʵ��2����ת����ʱ�� ���������һλһ����1
	
	��scanf��ʱ�� ��Ҫ�Ƕ������˱���֮�� �ٵ����������
	
	ͨ��string.h��������memset��a,0,sizeof(a))��ʵ������ĳ�ʼ��
	����ʹ���������+-����֮ǰһ��ע��ǵó�ʼ���� 	
*/
//#include<stdio.h>
//#include<math.h>
//#include<string.h> 
//int ten_conversion_eight(int key);
//int main(){
//	printf("enter a decimal number:");
//	//����ֱ�Ӹ�ֵ int n = scanf����%d����&n���������� 
//	int n;
//	scanf("%d",&n);
//	printf("after converse base 8:%d",ten_conversion_eight(n));
//}
//int ten_conversion_eight(int key){
//	int i=0;
//	int a[100];
//	//��10��������ת����2����  
//	while(key!=1){
//		a[i]=key%2;
//		key=key/2;
//		i++;
//	}
//	//���һλһ����1 
//	a[i]=1;
//	int j; 
//	i++;
//	//ceil()����ȡ��  �������double���� ����Ҫ����ת�� 
//	int b[(int)ceil(i/3)];
//	//��b�����ʼ��Ϊ0�� 
//	memset(b,0,sizeof(b));
//	int k=0;
//	for(j=0;j<i;j++){
//		if(j%3==0&&j!=0){
//			k++;
//		}
//		b[k]+=pow(2,j-k*3)*a[j];
//	}
//	int sum=0;
//	int h;
//	for(h=0;h<=k;h++){
//		sum+=pow(10,h)*b[h];
//	}
//	return sum;
//}
//-------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------
/*
059
	��Ŀ����0-7������ɵģ�����λ�����ظ����������� 
	
	������
	��Ϊ��0-7 ��������������8λ
	��Ҫ�������� ���Ը�λ������1 3 5 7��4���е�һ�֣�
	��Ҫ����λ�� �������λ������1 
*/ 
//#include<stdio.h>
//#include<string.h>
//int main(){
//	int i=0;
//	int sum[8];
//	memset(sum,1,sizeof(sum));
//	int num=0;
//	int j;
//	while(i<8){
//		if(i==0){
//			sum[i]=4;
//			num+=sum[i];
//			printf("the %d position:%d\n",i+1,sum[i]);
//		}
//		else if(i==1){
//			sum[i]=4*6;
//			num+=sum[i];
//			printf("the %d position:%d\n",i+1,sum[i]);
//		}
//		else{
//			sum[i]=4*6;
//			for(j=6;j>6-i+1;j--){
//				sum[i]*=j;
//			}
//			num+=sum[i];
//			printf("the %d position:%d\n",i+1,sum[i]);
//		}
//		i++;	
//	} 
//	printf("sum:%d",num);
//	return 0;
//} 
//--------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------
/*
060
	��Ŀ��һ��ż�����ܱ�ʾΪ��������֮�� 
		����һ��ż�������ֽ��2������ 
*/
//#include<stdio.h>
//#include<stdbool.h>
//bool prime_number(int n);
//int main(){
//	int n;
//	printf("please enter a even number:");
//	scanf("%d",&n);
//	int i,j;
//	for(i=2;i<n;i++){
//		if(prime_number(i)){
//			for(j=2;j<n;j++){
//				if((prime_number(j))&&j+i==n){
//					printf("split two prime number is:%d %d",i,j);
//					return 0;
//				}
//			}
//		}
//	}
//	
//} 
//bool prime_number(int n){
//	int i;
//	if(n==2){
//		return true;
//	}
//	else if(n>2){
//		for(i=2;i<n;i++){
//			if(n%i==0){
//				return false;
//			}
//		}
//		return true;
//	}
//	else{
//		printf("enter positive whole number!");
//		return false;
//	}
//}
//------------------------------------------------------------------------------------ 


//--------------------------------------------------------------------------------------
/*
061
	��Ŀ���ж�һ�������ܱ�����9���� 
		ֻ����һ��ֻ��9��ɵ��������ܹ�������������
		����һ���������жϼ���9��ɵ�ʱ���ܹ��������� 
*/
//#include<stdio.h>
//#include<math.h>
//int main(){
//	printf("enter a prime number:");
//	int n;
//	scanf("%d",&n);
//	int i=0;
//	int a=0;
//	while(1){
//		a+=9*pow(10,i);
//		if(a%n==0){
//			printf("%d can whole divided %d",n,a);
//			return 0;
//		}
//		i++;
//	}
//	return 0;
//} 
//-------------------------------------------------------------------------------------- 

//---------------------------------------------------------------------------------------
/*
062
	��Ŀ���������ַ������ӵĳ��� 
*/ 
//#include<stdio.h>
//int main(){
//	char a[100];
//	char c;
//	printf("please enter the frist string:");
//	c = getchar();
//	int i=0;
//	while(c!='\n'){
//		a[i]=c;
//		i++;
//		c = getchar();
//	}
//	char b[100];
//	printf("please enter the second string:");
////	getchar();
//	c = getchar();
//	int j=0;
//	while(c!='\n'){
//		b[j]=c;
//		j++;
//		c = getchar();
//	}
//	char h[i+j];
//	int k;
//	for(k=0;k<i;k++){
//		h[k]=a[k];
//	}
//	for(k=0;k<j;k++){
//		h[k+i]=b[k];
//	}
//	printf("after combine:");
//	for(k=0;k<i+j;k++){
//		printf("%c",h[k]);
//	}
//	return 0;
//} 
//---------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------
/*
063
	��Ŀ��ѧϰ�ṹ��Ĵ�ֵ�ʹ�ַ 
*/
//#include<stdio.h>
//typedef struct student{
//	int num;
//	char gender;
//}stu;
//void change_value(stu a);
//void change_adress(stu *b);
//int main(){
//	stu a;
//	stu *b;
//	a.num=22;
//	a.gender='M';
//	b = &a;
//	change_value(a);
//	//���ִ�ֵ�� ֵû�з����ı� 
//	printf("%d %c\n",a.num,a.gender);
//	change_adress(b);
//	//��ַ�� ����ֵ�����˸ı� 
//	printf("%d %c",a.num,a.gender);
//	return 0;
//} 
//void change_value(stu a){
//	a.num=23;
//	a.gender='W';
//}
//һ���ֽڱ�������ָ����
//void change_adress(stu *b){
//	b->num=23;
//	b->gender='W';
//}
//---------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------
/*
064
	��Ŀ����ȡ7������1-50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ�ĸ��� 
*/
//#include<stdio.h>
//int main(){
//	int n;
//	int i,j;
//	printf("please enter seven number(between 1 and 50):\n");
//	for(i=0;i<7;i++){
//		printf("the %d:",i+1);
//		scanf("%d",&n);
//		//ѧ�����ֲ����������˳���������Ĳ��� 
//		if(n>50||n<1){
//			printf("error enter! again enter number!");
//			i--;
//			continue;
//		}
//		for(j=0;j<n;j++){
//			printf("*");
//		}
//		if(i!=6){
//			printf("\n");
//		}
//	}
//} 
//--------------------------------------------------------------------------------------- 

//---------------------------------------------------------------------------------------
/*
065
	��Ŀ��ĳ����˾���ù����绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ�
		���ܵĹ������£�
		ÿλ���ֶ�����5��Ȼ���ü������� ����10 ��������������֣�
		�ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������ 
*/
//#include<stdio.h>
//void swap(int *a,int *b);
//int main(){
//	int n;
//	printf("enter a four position number:");
//	scanf("%d",&n);
//	int a[4];
//	int i;
//	for(i=0;i<4;i++){
//		a[i]=n%10;
//		n=n/10;
//	}
//	for(i=0;i<4;i++){
//		a[i]=(a[i]+5)%10;
//	}
//	swap(&a[0],&a[3]);
//	swap(&a[1],&a[2]);
//	printf("after secret:");
//	for(i=0;i<4;i++){
//		printf("%d",a[i]);
//	}
//	return 0;
//} 
//void swap(int *a,int *b){
//	int *temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//---------------------------------------------------------------------------------------- 

//-------------------------------------------------------------------------------------
/*
066
	��Ŀ��������
	 #include<stdio.h>
	#include<stdlib.h>
	
	#define M 5
	int main()
	{
	    int a[M]={1,2,3,4,5};
	    int i,j,t;
	    i=0;j=M-1;
	    //���ʵ������������ݵķ�ת 
	    while(i<j)
	    {
	        t=*(a+i);//t = 1 2
	        *(a+i)=*(a+j);//a[]=5 2 3 4 5 a[]=5 4 3 4 5
	        *(a+j)=t;//a[]=5 2 3 4 1 a[]=5 4 3 2 1
	        i++;j--;//i=1 j=3 i=2 j=2
	    }
	    for(i=0;i<M;i++) {
	        printf("%d\n",*(a+i));//5 4 3 2 1
	    }
	    
	}
*/
//----------------------------------------------------------------------------------


//----------------------------------------------------------------------------------
/*
067
	��Ŀ��������Ϸ��û���о͸�һ����ʾ�����˻���С�ˣ������ˣ���Ҫ��Ҫ�����棬�������� 
*/
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//int main(){
//	
//	//time(NULL)��������ķ���ֵ����Ϊsrand�����Ĳ����ģ�
//	//��˼�������ڵ�ϵͳʱ����Ϊ����������������������
//	srand((int)time(NULL));
//	//����������õ���������ڴ� ���Խ���%100ȡ��Ĳ��� ͬʱ����+1����֤�������1-100�� 
//	int key = (rand()%100+1);
//	int i=1;
//	int n;
//	printf("guess action!\n");
//	while(1){
//		printf("please finish the %d time enter(1-100):",i);
//		scanf("%d",&n);
//		if(n>key){
//			printf("over the key,please again!\n");
//			i++;
//			continue;
//		}
//		if(n<key){
//			printf("less the key,please again!\n");
//			i++;
//			continue;
//		}
//		if(n==key){
//			printf("successful guess!\nyou finish it by %d times guess!\n",i);
//			printf("do you want guess next number?(answer Y or N):");
//			//ǰ��������ı���ʱ�� Ҫ�ȳ�һ�� �����������ʱ��Ҳ��һ�� 
//			getchar();
//			char c;
//			c = getchar();
//			getchar();
//			if(c=='Y'){
//				srand((int)time(NULL));
//				int key = (rand()%100+1);
//				printf("guess action!\n");
//				i=1;
//				continue;
//			}
//			if(c=='N'){
//				printf("quit now!");
//				return 0;
//			}	
//		}
//	}
//} 
//---------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------
/*
068
	��Ŀ�������ַ����г��ֵ��Ӵ��ĸ��� 
	
	ע���ڽ����ӵ�ʱ�� Ҫ�ȱ���֮���λ��  ����ѭ���� �ڽ�������ط� 
*/
// #include<stdio.h>
// int main(){
// 	char a[100];
// 	char c;
// 	printf("please enter a string:");
// 	c = getchar();
// 	int i=0;
// 	while(c!='\n'){
// 		a[i]=c;
// 		i++;
// 		c = getchar();
// 	}
// 	char b[100];
// 	printf("please enter model string:");
// 	c = getchar();
// 	int j=0;
// 	while(c!='\n'){
// 		b[j]=c;
// 		j++;
// 		c = getchar();
// 	}
// 	int k,h=0;
// 	int count=0;
// 	for(k=0;k<i;k++){
// 		if(a[k]==b[h]){
// 			int l=k;
// 			while(1){
// 				if(h==j){
// 					count++;
// 					h=0;
// 					k=l+j;
// 					break;
// 				}
// 				if(a[k]==b[h]){
// 					k++;
// 					h++;
// 				}
// 				else{
// 					k=l;
// 					h=0;
// 					break;
// 				}		
// 			}
// 		}
		
// 	}
// 	printf("this string have %d model string",count);
// 	return 0;
// }
//---------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------
/*
069
	��Ŀ��ʱ�亯�� 
		1 ��ʾ��ǰ��ʱ��
		2  
*/
//#include<stdio.h>
//#include<time.h>
//
//int main(){
//	time_t rawtime;   //����ʱ�����ֵ
//	struct tm *timeinfo;//����time_t�ṹ��ָ�� 
//	time(&rawtime);//��ȡ��ǰ��ʱ��  
//	timeinfo = localtime(&rawtime);//�����ʱ��ת������ʵʱ���ʱ���ʾ���� 
//	printf("now time is %s",asctime(timeinfo));
//	return 0;
//} 



//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main(){
//	long i =10000000L;
//	clock_t start,finish;
//	double TheTimes;
//	printf("finish %d times block spend time is:",i);
//	start = clock();//clock()��ʼ�����������ʱ����CPUʱ�Ӽ�ʱ��Ԫ�� 
//	while(i--);
//	finish=clock();
//	TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
//	// CLOCKS_PER_SEC��ʾһ������CPU���е�ʱ�������� ������ʱ��Ԫ��ת����ʱ�� 
//	printf("%f",TheTimes);
//	return 0; 
//} 
//---------------------------------------------------------------------------------- 



//-------------------------------------------------------------------------
/*
070
	��Ŀ���Ӽ���������һЩ�ַ�������������͵�������ȥ��ֱ������һ��#Ϊֹ 

	ע��stdlib��ȫ����standard library 
	
		�����ļ��洢
		1 ����<stdlib.h>��
		2 ����FILE * ���͵ı���
		3 ��gets()����ȡ�ļ������֡�������׺��
		4 ��fp = fopen��filename����r��)���ж��ļ��Ƿ����
		5 �� fp = fopen��filename����w��)���Բ����ڵ��ļ����д���
		6 ��fputc��c��fp����ʵ�ֶ��ļ���д�룬��һ���ַ�һ���ַ���д��
		7 fclose(fp)�ر��ļ� 
*/
//#include<stdio.h>
//#include<stdlib.h> 
//int main(){
//	//nullҪ��д  �ļ�ָ�� 
//	FILE *fp = NULL;
//	char filename[20];
//	printf("enter the filename:");
//	gets(filename);//����һ���ַ��� 
//	char c;
//	fp = fopen(filename,"r");
//	if(fp==NULL){
//		printf("will create a %s file\n",filename);
//		fp = fopen(filename,"w");
//	} 
//	printf("enter knowledge in %s end by '#'\n",filename);
//	getchar();//�Ե�����Ļ��з�
//	c = getchar();
//	while(c!='#'){
//		fputc(c,fp);
//		c = getchar();
//	} 
//	fclose(fp);
//	//��ͣ�ڴ��� 
////	system("pause");
//	return 0;	
//} 
//-------------------------------------------------------------------------


//-------------------------------------------------------------------------
/*
071
	��Ŀ���Ӽ���������һ���ַ�������Сд��ĸȫ��ת��Ϊ��д��ĸ��
	Ȼ�������һ�������ļ���test���б��棬������ַ����ԣ���β 
	
	ע�����ܶ��ַ������á�����������ֻ������ͨ���ַ������ã��ַ����á���
		��Ϊ������ַ������á�������������ʾ����������������Ƶ�ascllֵ 

	-48��ת�����֣�-32��Сдת��д
	��int��b-48  b��һ���ַ�����
	char c = 'b';
	c-32�͡�b��-32�Ľ��һ�� ע�������Ƿ������
*/
//#include<stdio.h>
//#include<stdlib.h>
//int main(){
//	FILE *fp;
//	char a[100];
//	char c;
//	printf("enter a string[end by ! english version]:");
//	c = getchar();
//	int i=0;
//	while(c!='!'){
//		//������'c'>=92���� 
//		if((c>='a')&&(c<='z')){
//			a[i]=c-32;//ֱ�ӽ���-32 ��Ҫ�á�c��-32����
//			i++;
//			c = getchar(); 
//			continue;
//		}
//		a[i]=c;
//		i++;
//		c = getchar();
//	}
//	int j ;
//	fp = fopen("test.txt","w");
//	for(j=0;j<i;j++){
////		printf("[%c]",a[j]);
//		fputc(a[j],fp);
//	}
//	fclose(fp);
//	printf("write over");
//	system("pause");
//	return 0;
//} 

//#include<stdio.h>
//int main(){
//	char c = 'a';
//	printf("%d",'c');
//	
//} 
//------------------------------------------------------------------------- 


//-------------------------------------------------------------------------
/*
072
	��Ŀ�������������ļ�A��B�������һ����ĸ��Ҫ����������ļ��е���Ϣ�ϲ�
	������ĸ˳�����򣩣������һ���µ��ļ�C�� 
	
	ע��strcpy��str1��str2�������ַ���2���Ƶ��ַ���1��
		strcmp��str1��str2�����Ƚ�str1-str2��ascll��
		strcat��str1��str2������str2�ӵ�str1�� 
		strlen(str)������ַ�����ĳ��� 
		
		����memset��ʼ���ַ����飬��ͨ��'\0' ������ ����ͨ��NULL 
*/
//------------------------------------------------------------------------- 

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//void swap(char *a,char *b);
//int main(){
//	FILE *fp;
//	fp = fopen("C.txt","w");
//	FILE *fa;
//	char ca[100];
//	memset(ca,'\0',sizeof(ca)); 
//	FILE *fb;
//	char cb[100];
//	memset(cb,'\0',sizeof(cb)); 
//	//����ǵö�fa....��������������� 
//	if((fa = fopen("A.txt","r"))==NULL){
//		printf("A.txt isn��t exist!");
//		return 0;
//	}
//	//fgets������faָ����ļ��������������ca������ 
//	//�����if��ִ�е�ʱ�� �Լ������ļ� 
//	fgets(ca,100,fa);
//	fclose(fa);
//	if((fb = fopen("B.txt","r"))==NULL){
//		printf("B.txt isn��t exist!");
//		return 0;
//	}
//	fgets(cb,100,fb);
//	fclose(fb);
//	int a=strlen(ca);
//	int b=strlen(cb);
//	int i=0,j=0;
//	for(i=0;i<a;i++){
//		for(j=1;j<a-i;j++){
//			if(ca[j-1]>ca[j]){
////				printf("**%d**%d*\n",ca[j-1],ca[j]);
//				swap(&ca[j-1],&ca[j]);
////				printf("**%d**%d*\n",ca[j-1],ca[j]);
//			}
//		}
//	}
//	for(i=0;i<b;i++){
//		for(j=1;j<b-i;j++){
//			if(cb[j-1]>cb[j]){
////				printf("**%d**%d*\n",ca[j-1],ca[j]);
//				swap(&cb[j-1],&cb[j]);
////				printf("**%d**%d*\n",ca[j-1],ca[j]);
//			}
//		}
//	}
////	for(i=0;i<a;i++){
////		printf("{{%c}}",ca[i]);
////	}
////	for(i=0;i<b;i++){
////		printf("|=%c=|",cb[i]);
////	}
//	for(i=0;i<b;i++){
//		for(j=1;j<b-i;j++){
//			if(cb[j-1]>cb[j]){
//				swap(&cb[j-1],&cb[j]);
//			}
//		}
//	}
//	//�������ֲ�����ǰ�������������Ѿ����ź����� 
//	i=j=0;
//	while(!(i==a&&j==b)){
//		//�����һ���Ѿ������� ����ʣ�µ��Ǹ���ʣ�µĲ���ȫ������ 
//		if(i==a&&j<b){
//			while(j!=b){
//				printf("1[%c]",cb[j]);
//				fputc(cb[j],fp);
//				j++;
//			}
//			break; 
//		}
//		if(j==b&&i<a){
//			while(i!=a){
//				fputc(ca[i],fp);
//				i++;
//			}
//			break;
//		}
//		//û�пյ������ʱ�� ���ν��ж�ȡ 
//		if(ca[i]<cb[j]){
//			fputc(ca[i],fp);
//			i++;
//		}	
//		else{
//			fputc(cb[j],fp);
//			j++;
//		}	
//	}
//	fclose(fp);
//	return 0;
//} 
//void swap(char *a,char *b){
//	char temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//-----------------------------------------------------------------------
/*
073
	��Ŀ�������ѧ����ÿ��ѧ�������ſεĳɼ����Ӽ���������������
		(ѧ�š����������ſεĳɼ�)�������ƽ���ɼ���
		��ԭ���������Լ��������ƽ����������ڴ����ļ���stud����
		
		
	ע�������ļ���д�����ͨ�����ն˽���д����һ���ģ�ֻ��������f
		��fprintf��fp,"%d",a��;�������뵽�ļ���
		�����ַ������������fputs��str��fp��;���ӷ���Ͳ����ٽ���ѭ����
		��ͬ������ն�������putsҲһ���� 
*/
//-----------------------------------------------------------------------
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//typedef struct score{
//	int math;
//	int english;
//	int chinese;
//}score;
//typedef struct student{
//	int no;
//	char name[20];
//	score sco;
//	float average;
//}stu;
//int main(){
//	int i;
//	FILE *fp;
//	fp = fopen("stud.txt","w");
//	fputs("no",fp);
//	fputc(' ',fp);
//	fputs("name",fp);
//	fputc(' ',fp);
//	fputs("math",fp);
//	fputc(' ',fp);
//	fputs("english",fp);
//	fputc(' ',fp);
//	fputs("chinese",fp);
//	fputc(' ',fp);
//	fputs("average",fp);
//	fputs("\n",fp);
//	stu stu[5];
//	printf("enter five student information(no name score[math��english��chinese])��\n");
//	for(i=0;i<5;i++){
//		printf("enter the %d student informations:\n",i+1);
//		scanf("%d",&stu[i].no);
//		getchar();
//		gets(stu[i].name);
////		getchar();
//		scanf("%d",&stu[i].sco.math);
//		getchar();
//		scanf("%d",&stu[i].sco.english);
//		getchar();
//		scanf("%d",&stu[i].sco.chinese);
//		getchar();
//		stu[i].average = (stu[i].sco.math+stu[i].sco.english+stu[i].sco.chinese)/3;
////		fputc((char)stu[i].no,fp);
//		fprintf(fp,"%d",stu[i].no);
//		fputs("     ",fp);
//		fputs(stu[i].name,fp);
//		fputs("     ",fp);
////		fputc((char)stu[i].sco.math,fp);
//		fprintf(fp,"%d",stu[i].sco.math);
//		fputs("       ",fp);
////		fputc((char)stu[i].sco.english,fp);
//		fprintf(fp,"%d",stu[i].sco.english);
//		fputs("      ",fp);
////		fputc((char)stu[i].sco.chinese,fp);
//		fprintf(fp,"%d",stu[i].sco.chinese);
//		fputs("      ",fp);
////		fputc((char)stu[i].average,fp);
//		fprintf(fp,"%.3f",stu[i].average);
//		fputs("\n",fp);
//		
//	}
//	
//} 

//----------------------------------------------------------------------
/*
������Ŀ
	��дһ���㷨������24Сʱ�Ƶ�ʱ�� ���12Сʱ�Ƶ�ʱ�� ��PM����AM 
	��/��/��---����.��.�� 
	
	
	ע��ͨ��%02d����������ʾ�����������λ����6��ʱ����ʾ06 
*/
//---------------------------------------------------------------------- 

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main(){
//	char a[10];
//	printf("enter time:");
//	gets(a);
//	int n=strlen(a);
//	int hour=0,minute=0;
//	minute=(a[3]-48)*10+(a[4]-48);
//	hour=(a[0]-48)*10+(a[1]-48);
//	if(hour<12&&hour>=0){
//		printf("after reverse:");
//		printf("%d:%02d AM",hour,minute);
//	}
//	else if(hour>=12&&hour<24){
//		printf("after reverse:");
//		printf("%d:%02d PM",hour-12,minute);
//	}
//	else{
//		printf("error enter");
//	}
//	return 0;
//}

// #include<stdio.h>
// #include<string.h>
//ֱ���������־��� ��Ҫ���ַ��ٽ���ת�� 
//int main(){
//	char a[20];
//	printf("enter date:");
//	gets(a);
//	int n=strlen(a);
//	int year=(a[6]-48)*1000+(a[7]-48)*100+(a[8]-48)*10+(a[9]-48);
//	printf("%c %c",a[0],a[1]);
//	int mouth=(a[0]-48)*10+(a[1]-48);
//	int day=(a[3]-48)*10+(a[4]-48);
//	printf("%d,%d,%d",year,mouth,day);
//	if(n>10||a[2]!='/'||a[5]!='/'||day>31||mouth>12){
//		printf("error enter");
//		return 0;
//	}
//	else{
//		printf("after reverse:%04d.%02d.%02d",year,mouth,day);
//		return 0;
//	}
//} 
// int main(){
// 	int year,mouth,day;
// 	scanf("%d/%d/%d",&mouth,&day,&year);
// 	if(mouth>12||mouth<=0){
// 		printf("error enter");
// 		return 0; 
// 	}
// 	else{
// 		if(day>31||day<=0){
// 			printf("error enter!");
// 			return 0;
// 		}
// 		else{
// 			if(year<=0){
// 				printf("error enter!");
// 				return 0;
// 			}
// 			printf("%d.%02d.%02d",year,mouth,day);
// 			return 0;
// 		}
// 	}
// } 


 

// #include<stdio.h>
// int main(){
// 	// int b=7;
// 	// float a=2.5,c=4.7; 
// 	// printf("%d",(b/3*(int)(a+c)/2));
// 	// int a;
// 	// a=6,6*a;
// 	// printf("%d",a);
// 	// int a=5,b=6,c=7,d=8;
// 	// printf("%d",d=a/2&&b==c||!a);
// 	// int a=6;
// 	// printf("%d",a+=a-=a*a);
// 	int x; 
// 	x=2&&1;
// 	printf("%d",x); 
// 	// int a[2][3]={{1},{2,3}};
// 	// int i,j;
// 	// for(i=0;i<2;i++){
// 	// 	for(j=0;j<3;j++){
// 	// 		printf("%d ",a[i][j]);
// 	// 	}
// 	// 	printf("\n");
// 	// }
	
// }


// 

#include<stdio.h>
// void f(char *p){
// 	if(*(p+1)=='\0'){
// 		printf("%c",*p);
		
// 	}
// 	if(*(p+1)!='\0'){
// 		f(p+1);
// 		printf("%c",*p);
		
// 	}
// }
int main(){
	char p;
	p=getchar();
	int a = (int)p;
	printf("%d\n",a);
	a = (int)p-48;
	printf("%d\n",a);
	// f(p);
}















