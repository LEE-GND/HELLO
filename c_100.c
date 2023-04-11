/*
001
	题目：有1，2,3,4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
	
	已知：
	有1、2、3、4这四个数字，让他们组成三位的数（且不能有重复数字的出现）
	
	输出：
	这些三位数 
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
	题目：企业发放的奖金根据利润提成
	#利润（I）低于或高于10万元时，奖金提成10%
	#利润高于10万元，低于20 低于10的按10%提成 高于10的 按7.5%
	#20-40 高于20的5%
	#40-60 高于40的3%
	#60-100 高于60的1.5%
	#高于100 超过100的1%
	从键盘输入当月的利润，求发放奖金总数
	
	笔记：
	一、在case后面紧跟的是确定的int型的数字
		且必须每一个都case部分里面都有break 
	二、scanf输入的时候 不要带%.2f 
	
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
	题目：一个整数，它加上100后是一个完全平方数，再加上168后又是一个完全平方数，问该数是？
	 
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
	题目：输入某年某月某日，判断这一天是这一年的第几天 
	
	
	平年：2月28天
	闰年：2月29天
	闰年的判断方法：被400整除 或者不被400整除但是能被4整除 
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
//	//闰年 
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
//	//平年 
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
	题目：输入三个整数xyz，请把这三个数由小到大输出 
	

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
	题目：用*号输出字母C的图案 
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
	题目：输出9*9口诀 【梯形输出】 
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
	题目：古典问题 (兔子生崽)
	有一对兔子，从出生后第三个月起，每个月都生 一对 兔子 
	小兔子长到三个月后，每个月又生一对兔子
	假如兔子都不死 
	问每月的兔子总数为多少？
	（输出前四十个月）
	
	后一个月是前两个月的加和 
	3：1+1
	4：1+1+1
	5：1+1+1 +1+1
	6: 1+1+1+1+1 +1+1+1
	7：1+1+1+1+1+1+1+1 +1+1+1+1+1 
	 
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

//要注意输出口的判断条件 在递归的时候
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
	题目：判断101到200之间的素数
	素数、 质数：除了被1和它本身以外没有能够整除的数 
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
	题目：水仙花数，打印所有的“水仙花数”，指的是一个三位数其各位数字立方和等于该数本身。
		例如153=1立方+5立方+3立方 
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
	题目：将一个正整数分解质因数，如输入90，打印出90=2*3*3*5； 
	
	注：break continue这种都是退出循环结构的 在只有if的时候使用break是错误的 之后在if处于大的for循环的时候才可以 
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
	题目：利用条件运算符的嵌套完成此题，学习成绩>=90分的学生用A表示，60-89 B 60以下C
	
	注：条件运算符 （a>b）?a:b 
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
	题目： 输入两个正整数m和n，求其最大公约数和最小公倍数 
	
	注： 最大公约数：指的是能够整除这个两个数的最大的数
		最小公倍数：指的是这个数能够被这个两个数整除的最小的数
		
		最大公约数计算方法： 1977 615分别为这两个数
		1977/615 = 3 (余152)
		615/152 = 4 (remain 7)
		152/7 = 21(remain 5)
		7/5 = 1 (remain 2)
		5/2 = 2 (remain 1)
		2/1 = 2(remain 0)
		最大公约数 是在remain=0时取得的
		分析：第一次是大的除以小的，以后是上一次的被除数除以上一次的余数
		
		最小公倍数的计算方法：两个数的乘积/最大公约数 
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
	题目：输入一行字符，分别统计出其中英文字母、空格、数字和其他字符的个数
	
	分析：空格用ascll码进行判断 直接用‘’来表示ascll码 
	
	
	注：getchar()每次都插入一个数据，在输入框内可以连续输入数据  
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
//	//每次取一个字符 
//	int n_number=0;
//	int n_space=0;
//	int n_word=0;
//	int n_other=0; 
//	c = getchar();
//	//这里是c和\n的ascll码进行比较  ‘’是和ascll码进行比较 
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
	题目：求s=a+aa+aaa+aaaa+aaaa.....a的值，其中a是一个数字
		例如2+22+222+2222+22222（此时共有5个数相加）
		几个数相加是由键盘控制 
	分析：输入两个数 一个是式子里的数 一个是有几项 
	
	注：math库中的pow（)用来算几次方 pow（10，2）=100 
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
//	int b=0;//存过渡数据 
//	int c[n];//存各项数据用于显示 
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
	题目：一个数如果恰好等于它的因子之和，这个数就称为“完数”
		这里的因子是指，只要能整除他的都可以（不包括他本身） 没有说必须是质因数（必须是质数：从2开始除了1和它本身以外不能被整除的数） 
		例如：6=1+2+3 编程找出1000以内的所有完数 
		28=1+2+4+7+14
	注：此题关键是弄懂什么是因子，它与质因子有什么区别 
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
// 		//因为任何一个整数都能被1整除
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
	题目：一球从100米高度自由下落，每次落地后反跳回原高度的一半；再落下。
		求它在第10次落地时，共经过多少米？第10次反弹多高？
		
	分析：1	 2	3	4	5	6	7	8	9	10
		100	50	25 12.5	6.75	 
		
	注：第一次的时候只有向下的这一趟 其他的时候的反弹都是2趟 
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
	题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃掉了一半，还不过瘾，又多吃了一个
		第二天早上又将剩下的桃子吃掉了一半，又多吃了一个，以后每天早上都吃了前一天剩下的零一个
		到了第10天早上再想吃的时候，见只剩下一个桃子了
	问 第一天摘了多少个桃子 
	
	注：此题倒着推 从第10天推第9天 这样推 
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
	题目：打印出如下图案【菱形】 ：n行 n列  输入一个数字 打印出对应的菱形 
	
	注：上中下 三部分进行分析 上部分空格为n/2 n/2-1 n/2-2 .... *为1 3 5.......
							  中部分只有*为n个
							  下部分空格为1 2 3 ....  *为 [n/2]*2-1 ....即5 3 1 

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
	题目：有一分数序列：2/1,3/2，5/3，8/5,13/8,21/13....求出这个序列的前20项之和
	 
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
	题目：求1+2！+3！+4！+....n！ 
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
	题目：利用递归方法求5！ 
	
	注：还要会斐波那契递归算法 
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


//非递归的斐波那契就是上面写的3个月生一对兔子问题
//递归斐波那契
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
	题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来 
	
	注：对于阶乘和斐波那契数列这种后一项是在前一项基础上进行的递归  用return function（i-1）...完成
		对于普通的没有和前一项有关系的递归，不会用到return 而是直接输出 
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
	题目：有5个人坐在一起，问第五个人多少岁，他说他比第四个人大2岁
							问第四个人，说比第三个大两岁
							第三个，比第二个人大两岁 
							第二个，比第一个人大两岁
							最后问第一个人他说他10岁
			问第五个人多大
	要求用递归的方法运算 
							 
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
	题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各个数字 123 321
	
	注：int%pow（a，b）不能直接运算，要先把pow（a，b）存到int变量中 之后再进行取余运算 

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
	题目：输入一个数，判断他是否是回文 
	
	分析：判断位数 存入数组中 头和尾进行比较 
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
//			printf("this number isn’t palindrome");	
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
	题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母 
	monday tuesday wednesday thursday friday saturday sunday
	
	
	**********重要*********【关于getchar（）】 
	注：getchar()是依次读取键盘上的内容 所以在输入一个字母后又用换行符进行终结了输入
	 此时在调用第二个 geychar()时相当于读入了换行符。所以此时通过空调用一个getchar（）来吃掉这个换行符 
*/ 

//#include<stdio.h>
//int main(){
//	char c;
//	printf("enter first small letter:");
//	c = getchar();
//	getchar();//吃掉换行符 
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
	题目：删除一个字符串的指定字母，如：字符串“aca”删除其中的a 
	
	注：c语言没有string类型【用char数组进行代替】 c++，java，vb中有 
	
		还是那个问题 在getchar（）使用第二段的时候 要用一个getchar（）吃掉\n 
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
	题目：判断一个数是否是质数、
	质数：又称素数（prime number）一个大于1的自然数，除了1和它本身以外，其他的不能整除它 
*/
//#include<stdio.h>
//int main(){
//	int a;
//	printf("please enter a number:");
//	scanf("%d",&a);
//	int i;
//	if(a<=1){
//		printf("this number isn‘t prime number!");
//	}
//	else{
//		for(i=2;i<a;i++){
//			if(a%i==0){
//				printf("this number isn‘t prime number!");
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
	题目：字符串反转，如将字符串“i	like kobe”反转成“ebok ekil i” 
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
	题目：求100以内的素数
	注：在使用bool类型的时候，在c语言中要先导入stdbool.h库 
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
	题目：求一个3*3矩阵对角线元素之和 
	
	注：只有方阵才有对角线 
	且因为是一个个遍历的 所以不需要进行删除中心那个节点 
*/
//#include<stdio.h>
//int main(){
//	printf("enter array’s dimension:");
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
//	//不需要进行再次减 因为这个是一个个遍历的 即便奇数维度矩阵中心的那个数同时满足 判断的两个条件
//	//但是也只会加一遍 
////	if(n%2==1)
////		sum-=a[n/2][n/2];
//	printf("the sum of the diagonals:%d",sum);
//	return 0;
//}
//--------------------------------------------------------------------------------------- 

//----------------------------------------------------------------------------------------
/*
033
	题目：有一个已经排好顺序的数组，现输入一个数，要求按照原来的规律将它插入数组中
	
	***************
	注 ：看各种排序算法 
		在char类型强转成int类型时 是转换成了对应的ascll码值 对于数字 还要减去48 因为0的ascll为48 
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
//	int flag=0;//flag标志位 判断是否进行完了插入 
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
	题目：将数组倒置 并逆序输出 
	
	注：倒置：将数组的首部和尾部进行交换 
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
	各种变量：
		全局变量：在函数以外；或者在别的c文件里面编写的通过extern int a来使用 
		静态变量： 为了防止在多次调用同一个函数的时候 多次初始化 通过加上static来 
		auto变量
		register变量 
		https://blog.csdn.net/bogedaye/article/details/88377539
		
		
		
036
	各种作用域：


037
	宏定义：定义一个变量 #define a 3，
			或者定义一个字符 #define CH *
			或者定义一个式子#define square（a，b） a*b*b
							使用的时候通过square（1,2）来达到1*2*2的效果 
							这种方法和函数相比的好处：它不区分输入的数据的类型和返回数据的类型 
		【注意结构：#define 以后要使用的名字 要代替的东西（不一定是数）】 
	 
038
	 宏定义因只是“替换”所以产生的优先级问题：
	 	他因为只是会替换相关的式子 所以可能出现优先级的问题（不会自动加括号）
	 	所以解决的方法也很简单 就是在对应的表达式中加上括号 
		 比如 #define add（a，b） （a）+（b）
		 这样即使是用add（a，a+b）*5这种也不会出现优先级问题 
		 

039
	条件编译：#if #ifdef #ifndef 
			注意这个前面是有#的：
			#if用法：//和if的区别：在判断条件不满足时 不会 进行编译 不会到汇编代码里面去 
				#if 整型常量的表达式 //整型常量 这里指的是宏定义变量 也可以指的是整型长变量 const int a=3 a的值不能再去改变 
					程序段
				#elif 整型常量的表达式
					程序段
				#else
					程序段
				#endif //用于结束 
			 
		
			#ifdef用法： 
				要与#define a搭配使用 也就是说如果定义了这个宏名 那么就执行程序段1 没有就程序段2 
			#ifdef 宏名
				程序段1
			#else
				程序段2
			#endif 
			
			
			#ifndef用法：
				和上面的ifdef正好相反 如果没定义这个宏名 那么执行程序段1 
			#ifndef 宏名
				程序段1
			#else
				程序段2
			#endif 
			
			
	
040
	include头文件：引用另一个.c文件 
	************************要保证.h.c等文件要和主.c文件都在同一个文件夹下*******************
	*******对于外部.c文件中的函数 在主文件中直接通过声明此函数 在之后的中就能使用
	*******对于.h文件 中的宏定义变量 在主文件中通过include引用.h文件后 便可以使用 
		.h 文件中多是声明 .c文件中多是函数
		
	
*/ 			
//------------------------------------------------------------------------------------------ 


//----------------------------------------------------------------------------------------
/*
041 
	01： 
	按位与	&：但凡有一个0输出0 
	按位或	|：但凡有一个1则输出1 
	按位异或	^:当两个数不同的时候 输出1 
	 
	10进制数（^、&、|）10进制数 将其结果通过  2进制转换函数  转成二进制数才能发现它上面的规律 
*/
//#include<stdio.h>
//#include<math.h>
////binary conversion输入10进制转换成2进制 
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
	~：对10进制转换成的二进制进行按位取反 【不管符号位 即符号位也取反】 
		5：0000 0101
		~5:1111 1010（这个数计算机中存储的补码的形式 还要把这个形式转换成原码） 
		1111 1010 - 1 = 1111 1001
		取反码 1000 0110//注意这是取反码和取反是不一样的 
		 
		 
	注：首先是8位的2进制数 其中第一位是用来存符号 0为正 1为负
	************且负数在计算机中都是通过补码进行存储的******************************* 
	5：原码 0000 0101  反码 0000 0101  补码 0000 0101
	-5：原码 1000 0101 反码（符号位不变，其余取反）1111 1010 补码（符号位不变，其余取反后加1）1111 1011
	  
	
	
*/
//#include<stdio.h>
//#include<math.h>
////binary conversion输入10进制转换成2进制  只能是正数 
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
	题目：输出杨辉三角形
	1
	1	1
	1	2	1
	1	3	3	1
	1	4	6	4	1
	1	5	10	10	5	1 
	1	6	15	20	15	6	1
	1	7	21	35	35	21	7	1
	
	注：看出每行的数据和上一行中的数据之间的关系 
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
	题目：编写一个交换函数 
	注：***********************************************
		关于传地址的函数：编写函数时 参数定义成指针形式 用于接收传来的地址
					      传递函数时 参数为&取得的地址 
*/
// int swap(int *a,int *b){
// 	int temp;
// 	temp=*a;
// 	*a=*b;
// 	*b=temp;
// }
// #include<stdio.h>
// // 指向的是换值的操作
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
//	//这里要用取地址符 取出相应的地址 
//	replace(&a,&b);
//	printf("after replace the two number:%d %d",a,b);
//	return 0;
//}
//--------------------------------------------------------------------------------------- 

//--------------------------------------------------------------------------------------
/*
045
	题目：输入数组，最大的一个数与数组的第一个元素进行交换，最小的一个和最后一个元素进行交换
 	
 	注：在选择的时候为了避免最大值和最小值之间同时选择会产生冲突，
	 【可能最小值正好在第一个位置 正好最大值要和他交换】 
	 	于是一次一次换，先换最大/小，之后再重复一遍，选最小/大 
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
	题目：有n个整数，使其前面的各数顺序向后移动m个位置，最后m个数变成最前面的m个数
	 
	 
	注：有些溢出错误 不会报错 这是最难发现错误的 一定要看清楚下标 看看有没有越界 
*/
//#include<stdio.h>
//int main(){
//	//输入一串数字 
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
//	//输入m 
//	printf("enter m:");
//	int m;
//	scanf("%d",&m);
//	//存储最后的溢出元素
//	int b[m];
//	int i,k;
//	for(i=n-m,k=0;i<n;i++,k++){
//		b[k]=a[i];	
//	}
//	//没有溢出的元素向后移动m个位置
//	for(i=n-m-1;i>=0;i--){
//		a[i+m]=a[i];
//	}
//	
//	//将最后溢出的元素存在最开头 
//	for(i=0;i<m;i++)
//		a[i]=b[i];
//	//输出数组
//	printf("after remove m places:");
//	for(i=0;i<n;i++){
//		printf("%d",a[i]);
//	} 
//} 
//-------------------------------------------------------------------------------------- 


//--------------------------------------------------------------------------------------
/*
047
	题目：有n个人围成一圈，顺序排号
		从第一个人开始报数（从1到3报数），
		凡是报到3的人退出圈子，问最后留下的是原来的第几号的那位
		
	注：是进行n次循环1-3报数 最后只会剩下一个人 
	
	123456789             12345678       k:3 6 1 5	2	8	4	7
	12 45 78 			  12 45 78
	12  5 7                2 4  78 
	12    7                  4  7     
	1     7                     7
	1
	
	
	注：此题包括的模块
	1数据采集模块：输入要对多少人进行编号
	2进入循环
		1判断是否满足条件模块 当只剩一个数据的时候 跳出循环
		2 k一直向后走，一直++ 
		关键一步： 
			3 i也一直跟着向后走，但是对于mark=0的位置，跳过，通过while来实现，
				且当i>=n的时候化成0，从而实现进行新一轮的循环。 
		4 当k是3的倍数的时候，将目前的i位置处的数据的mark位置0, 
	                
*/
//#include<stdio.h>
//int main(){
//	//输入n 
//	int n;
//	printf("enter n:");
//	scanf("%d",&n);
//	int i;
//	//构建结构体 
//	struct sequence{
//		int data;
//		int mark;
//	};
//	struct sequence a[n];
//	//进行编号 
//	for(i=0;i<n;i++){
//		a[i].data=i+1;
//		a[i].mark=1;
//	}
//	int flag=0;
//	int k=1,j,count=0,index;
//	i=0;
//	while(1){
//		//查看目前还有几个人有编号 
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
//		//当k是3的倍数的时候删除对应的编号 
//		if(k%3==0){	
//			a[i].mark=0;	
//		}
//		//k向后移动 
//		k++;
//		//i向后移动 
//		i++;
//		//判断此次移动是否满足条件：是否越界；
//		if(i>=n)
//			i=0;
//		//对于已经删除编号的位置进行跳过  
//		if(a[i].mark==0){
//			//不断向后移动，直到找到符合条件的 
//				while(a[i].mark!=1){
//					i++;
//			//越界的话同样要进行从头开始 
//					if(i>=n)
//						i=0;
//				}
//					
//		}
//	}
//} 

/*错误做法： 

//#include<stdio.h> 
//int length;
////删除数组中指定位置元素 
//int delete_num(int *a,int i){
//	int j;
//	printf("[%d:%d]",i,a[i]);
//	for(j=i;j<length;j++){
//		a[i]=a[i+1];
//	}
//	length--;
//}
//int main(){
//	printf("enter man‘s number:");
//	scanf("%d",&length);
//	int k;
//	int a[length];
//	int n=length;
//	//进行编号 
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
	题目：写一个函数，求一个字符串的长度，在main函数中输出字符串，并输出其长度 

	注：对于输入字符的时候通过\n来判断结束，对于已经知道的字符数组通过\0来判断终止 
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
	题目：编写input（）和output（）函数输入，输出 5个学生的数据记录 
	
	注：对于使用结构体：可以更换名字：typedef struct 名字{}要改的名字； 
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
	题目：malloc用法，创建一个链表
	
	
	注：
	
	对于指针： 
		int *p//定义一个指针
		int i=5//定义一个数据
		
		//下面这两种方式都可以存储数据 
		*p=i; //让p这个指针指向的位置上等于5 
		p=&i； //让p的地址存i的地址 
		 
		printf（“%d”，*p）//这样读出的数据是 5
		 				p   //这样读出的数据是p指向的地址 
		 
	
对于malloc：
		
	在使用之前导入stdlib.h库 
	【使用模式：数据类型* 数据名字 = （数据类型*）malloc（sizeof（数据类型）*大小）】 
	用指针来接收：int* p =（int *） malloc(sizeof(int)*100);
	//相当于是让p指向了 开辟的100个存储地址的开头
	
	同时在用完之后要把p进行回收，free（p）； 
	
	
	
对于分配的数据如何进行使用：

	用strcpy函数将数据复制到p中：
	导入#include<string.h>
	调用strcpy（p,"hello"）
	或者调用在后面增加数据的函数：
	strcat（p,"teacher"）; 
	 
对于扩充内存realloc：
	
	//开始时申请的 
	int* p =（int *） malloc(sizeof(int)*100);
	
	需要重新用一个指针去指向 
	int *q = （int *）realloc（p,sizeof(int)*20）;
	//相当于在原来p的基础上，再增加20； 
		 
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
	题目：输入一个整数，将其翻转后输出 
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
	题目：
		编写一个指针函数，输入n
		n为偶数的时候，调用函数求1/2+1/4+1/6+.....1/n ；奇数时1/1+1/3+1/5.....1/n 
		
		指针函数（返回值是指针的函数）：本质是一个函数，不过他的返回值是一个指针
		函数指针：本质是一个指针，该指针的地址指向了一个函数，所以它是指向函数的指针
				  相当于是定义一个指针，指向函数 
		
*/
//指针函数的例子
//#include<stdio.h>
//int add(int x,int y){
//	return x+y;
//} 
//int main(){
//	int add(int x,int y);
//	//这个就是定义函数指针的模式  注意后面是要去add的地址 
//	int (*p)(int,int)=&add;
//	//结果等于60 
//	printf("%d",p(20,p(10,30)));
//}


//注：除了i=i+1可以简写成i++，其余都必须是i=i+n,不能只写i+n 
//	  在出现小数的时候别忘了用浮点型数据 
//	  对于函数指针p的类型，最好是和函数的返回值类型相同 

//解决题目
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
	题目：指向指针的指针（二级指针）
		关键：拆开看 int *    p          以及int *  *    p 
		
		总：存储普通数据与存储指针的地址是不一样的 
	 	对于普通数据的地址想要存储到指针指向的位置里如：通过单级指针
		 ：int a；int *p=&a；
		对于指针的地址要想存储到另一个指针指向的位置里，要通过二级指针 
		：int *p；int **q=&p； 
		
		%x是输出地址 
		
		
		直接输出指针则输出的是它所存储的地址，而*p则是它所存储的地址中的值 
		
		
		*指针变量 相当于 是查看的存储的地址中存储的数据
		所以
		int *p；
		int a=5； 
		*p=a；
		也是相当于是p存储了a的地址=：p=&a； 
		
		指针在开始的时候一定要付初值 
*/
//#include<stdio.h>
//int main(){
//	int a=5;
//	//p中存入int类型a的地址 
//	int *p=&a;
//	//q里面存放的是p的是int*类型的地址 
//	int **q=&p;
//	//同理三级地址也是一样 h里面存的是q的地址 
//	int ***h=&q;
//	//*h=q的地址中存储的东西=p的地址 
//	printf("%x",*h);  
//	//q=p的地址 *q=p的地址中存储的东西 
//	printf("%x %x",&a,*q);
//	//**q=:q=它存储的地址【p的地址】   *q=它存储的地址中存储的数据【a的地址】  **q=它存储的地址中的存储的数据（地址）中存储的数据【a存的数据】 
//	printf("【%d】",**q); 
//} 
//---------------------------------------------------------------------------------


//----------------------------------------------------------------------------------
/*
054
	题目：二维数组
	 	
		 直接存储时：int a【3】【4】={{1,2,3,4}，{1,2,3,4}，{1,2,3,4}}
		 在计算机中的存储形式：是连续存储的 计算机中没有二维结构	
		 同时对于a【0】是第一行的第一个元素的地址 这个地址中存储了第一行元素的数据 
*/ 
//#include<stdio.h>
//int main(){
////	int a[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}} ;
//	int a[2][3]={{1,2,3},{4,5,6}};
//	int (*p)[3]=a;//因为这里a输出出来时一个地址 所以不用再取地址了   注意 这个【n】 n必须是和mn中最大数的值相同 
//	//(p+0)确定哪一行 *（p+0）读出这一行的数据 *（*（p+0）+0）读出这行中的某一位的数据 
//	printf("%d",*(*(p+1)+1));
//} 
//---------------------------------------------------------------------------------- 

//---------------------------------------------------------------------------------
/*
055
	题目：结构体
	
	对于结构体中的.与->的区别 
*/
//#include<stdio.h>
////构造结构体 同时对其进行重命名 
//typedef struct student{
//	int num;
//	int level;
//}stu;
//int main(){
//	stu a;
//	//对于声明的变量 可以直接用.进行操作 
//	a.num=0;
//	printf("%d\n",a.num);
//	//对于定义的指针  将结构体的地址付给他 
//	stu *p=&a;
//	//有两种方法 一种是取指针的存储的地址的值然后再用.操作 或者就是用->直接操作 
//	printf("%d %d",(*p).num,p->num); 
//	
//	//如果是结构体指针指向的是一个结构体数组的首地址 那么可以通过p++来指向下一个结构体
////		也就是他们的位置都是挨着的 
//} 
//--------------------------------------------------------------------------------- 


//----------------------------------------------------------------------------------
/*
056
	题目：字符串比较大小 
	
	字符串比较大小，用strcmp（str1，str2）来实现： 
	这个函数会返回str1-str2的结果
	如果>0那么说明str1大于str2 
	strcmp() 会根据 ASCII 编码依次比较 str1 和 str2 的每一个字符，
	直到出现不到的字符，或者到达字符串末尾（遇见\0）。
	
	用fgets（存储的位置，字符串的长度，stdin）;
	这个函数默认是通过\n来结束，所以这样就省去了通过while循环 getchar来不断的输入 
	至于字符串的长度 通过sizeof str/sizeof str[0]来实现，
	char a[5];
	fgets(a,5,stdin);
	也就是字符串的长度/单个存储位置的长度，计算出字符数组的长度 
	********但是这种方法只能存字符数组、且存入数据的长度也不知道*********** 
	
	对于字符串排序输出这种，可以采用冒泡排序、【不断交换 选出最大的一个】
	注：这里字符数组交换通过strcpy来实现 
	
	
*/
//#include<stdio.h>
//#include<stdlib.h> 
//#include<string.h>
//void swap(char a[],char b[],int n);
//int main(){
//	printf("please enter you string‘s number:");
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
//			//不用带数组的大小 
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
	题目：809*？？=800*？？+9*？？  ？？代表两位数
		  809*？？为4位数 8*？？为2位数 9*？？为3位数
		  求？？，以及809*？？后的结果 	 
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
	题目：八进制转换成10进制 
		 
	十进制		 10:         16
	二进制		 1010        10000
	八进制		 12           20
	
	对于10进制与其他进制之间的转换，都是通过 10进制先转成2进制 2进制再转成8或16进制 

	在用while实现2进制转换的时候 别忘了最后一位一定是1
	
	在scanf的时候 需要是定义完了变量之后 再调用这个函数
	
	通过string.h库来调用memset（a,0,sizeof(a))来实现数组的初始化
	【在使用数组进行+-操作之前一定注意记得初始化】 	
*/
//#include<stdio.h>
//#include<math.h>
//#include<string.h> 
//int ten_conversion_eight(int key);
//int main(){
//	printf("enter a decimal number:");
//	//不能直接赋值 int n = scanf（“%d”，&n）这样不行 
//	int n;
//	scanf("%d",&n);
//	printf("after converse base 8:%d",ten_conversion_eight(n));
//}
//int ten_conversion_eight(int key){
//	int i=0;
//	int a[100];
//	//将10进制数据转化成2进制  
//	while(key!=1){
//		a[i]=key%2;
//		key=key/2;
//		i++;
//	}
//	//最后一位一定是1 
//	a[i]=1;
//	int j; 
//	i++;
//	//ceil()向上取整  但求出的double类型 所以要进行转换 
//	int b[(int)ceil(i/3)];
//	//让b数组初始化为0； 
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
	题目：求0-7所有组成的（各个位都不重复）奇数个数 
	
	分析：
	因为是0-7 所以最多可以生成8位
	且要想是奇数 所以个位必须是1 3 5 7（4种中的一种）
	且要想有位数 所以最高位必须是1 
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
	题目：一个偶数总能表示为两个素数之和 
		输入一个偶数把它分解成2个素数 
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
	题目：判断一个素数能被几个9整除 
		只能是一个只由9组成的数，它能够被素数整除。
		输入一个素数，判断几个9组成的时候，能够被它整除 
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
	题目：将两个字符串连接的程序 
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
	题目：学习结构体的传值和传址 
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
//	//发现传值后 值没有发生改变 
//	printf("%d %c\n",a.num,a.gender);
//	change_adress(b);
//	//传址后 发现值发生了改变 
//	printf("%d %c",a.num,a.gender);
//	return 0;
//} 
//void change_value(stu a){
//	a.num=23;
//	a.gender='W';
//}
//一个字节本来就是指针了
//void change_adress(stu *b){
//	b->num=23;
//	b->gender='W';
//}
//---------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------
/*
064
	题目：读取7个数（1-50）的整数值，每读取一个值，程序打印出该值的个数 
*/
//#include<stdio.h>
//int main(){
//	int n;
//	int i,j;
//	printf("please enter seven number(between 1 and 50):\n");
//	for(i=0;i<7;i++){
//		printf("the %d:",i+1);
//		scanf("%d",&n);
//		//学会这种不符合条件退出重新输入的操作 
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
	题目：某个公司采用公共电话传递数据，数据是四位的整数，在传递过程中是加密的，
		加密的规则如下：
		每位数字都加上5，然后用加完后的数 除以10 的余数代替改数字，
		再将第一位和第四位交换，第二位和第三位交换。 
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
	题目：读程序
	 #include<stdio.h>
	#include<stdlib.h>
	
	#define M 5
	int main()
	{
	    int a[M]={1,2,3,4,5};
	    int i,j,t;
	    i=0;j=M-1;
	    //这个实现了数组的数据的翻转 
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
	题目：猜数游戏：没猜中就给一句提示，大了还是小了，猜中了，问要不要继续玩，不玩拉倒 
*/
//#include<stdio.h>
//#include<stdlib.h>
//#include <time.h>
//int main(){
//	
//	//time(NULL)这个函数的返回值是作为srand函数的参数的，
//	//意思是以现在的系统时间作为随机数的种子来产生随机数
//	srand((int)time(NULL));
//	//由于这样获得的随机数过于大 所以进行%100取余的操作 同时进行+1来保证随机数（1-100） 
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
//			//前面有输出文本的时候 要先吃一下 在输入结束的时候也吃一下 
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
	题目：计算字符串中出现的子串的个数 
	
	注：在进入子的时候 要先保存之间的位置  跳出循环后 在进入这个地方 
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
	题目：时间函数 
		1 显示当前的时间
		2  
*/
//#include<stdio.h>
//#include<time.h>
//
//int main(){
//	time_t rawtime;   //定义时间变量值
//	struct tm *timeinfo;//定义time_t结构体指针 
//	time(&rawtime);//获取当前的时间  
//	timeinfo = localtime(&rawtime);//将这个时间转化成真实时间的时间表示方法 
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
//	start = clock();//clock()开始、结束测出的时间是CPU时钟计时单元数 
//	while(i--);
//	finish=clock();
//	TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
//	// CLOCKS_PER_SEC表示一秒钟内CPU运行的时钟周期数 来将计时单元数转换成时间 
//	printf("%f",TheTimes);
//	return 0; 
//} 
//---------------------------------------------------------------------------------- 



//-------------------------------------------------------------------------
/*
070
	题目：从键盘上输入一些字符，逐个将他们送到磁盘上去，直到输入一个#为止 

	注：stdlib的全称是standard library 
	
		对于文件存储
		1 导入<stdlib.h>库
		2 创建FILE * 类型的变量
		3 用gets()来读取文件的名字【包含后缀】
		4 用fp = fopen（filename，“r”)来判断文件是否存在
		5 用 fp = fopen（filename，“w”)来对不存在的文件进行创建
		6 用fputc（c，fp）来实现对文件的写入，【一个字符一个字符的写】
		7 fclose(fp)关闭文件 
*/
//#include<stdio.h>
//#include<stdlib.h> 
//int main(){
//	//null要大写  文件指针 
//	FILE *fp = NULL;
//	char filename[20];
//	printf("enter the filename:");
//	gets(filename);//输入一个字符串 
//	char c;
//	fp = fopen(filename,"r");
//	if(fp==NULL){
//		printf("will create a %s file\n",filename);
//		fp = fopen(filename,"w");
//	} 
//	printf("enter knowledge in %s end by '#'\n",filename);
//	getchar();//吃掉上面的换行符
//	c = getchar();
//	while(c!='#'){
//		fputc(c,fp);
//		c = getchar();
//	} 
//	fclose(fp);
//	//暂停黑窗口 
////	system("pause");
//	return 0;	
//} 
//-------------------------------------------------------------------------


//-------------------------------------------------------------------------
/*
071
	题目：从键盘中输入一个字符串，将小写字母全部转换为大写字母，
	然后输出到一个磁盘文件“test”中保存，输入的字符串以！结尾 
	
	注：不能对字符变量用‘’扩起来，只能是普通的字符可以用，字符串用“”
		因为如果将字符变量用‘’括起来，表示的是这个变量的名称的ascll值 

	-48是转成数字，-32是小写转大写
	（int）b-48  b是一个字符变量
	char c = 'b';
	c-32和‘b’-32的结果一样 注意区分是否带‘’
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
//		//不能用'c'>=92这种 
//		if((c>='a')&&(c<='z')){
//			a[i]=c-32;//直接进行-32 不要用‘c’-32这样
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
	题目：有两个磁盘文件A和B，各存放一行字母，要求把这两个文件中的信息合并
	（按字母顺序排序），输出到一个新的文件C中 
	
	注：strcpy（str1，str2）：将字符串2复制到字符串1中
		strcmp（str1，str2）：比较str1-str2的ascll码
		strcat（str1，str2）：将str2加到str1上 
		strlen(str)：输出字符数组的长度 
		
		对于memset初始化字符数组，是通过'\0' 来定义 不是通过NULL 
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
//	//这里记得对fa....这个操作加上括号 
//	if((fa = fopen("A.txt","r"))==NULL){
//		printf("A.txt isn‘t exist!");
//		return 0;
//	}
//	//fgets方法打开fa指向的文件，并将其输出到ca数组中 
//	//上面的if在执行的时候 以及打开了文件 
//	fgets(ca,100,fa);
//	fclose(fa);
//	if((fb = fopen("B.txt","r"))==NULL){
//		printf("B.txt isn‘t exist!");
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
//	//下面这种操作的前提是两个数组已经都排好序了 
//	i=j=0;
//	while(!(i==a&&j==b)){
//		//如果有一个已经读完了 ，则将剩下的那个的剩下的部分全部读入 
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
//		//没有空的数组的时候 依次进行读取 
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
	题目：有五个学生，每个学生有三门课的成绩，从键盘输入以上数据
		(学号、姓名、三门课的成绩)，计算出平均成绩，
		将原来的数据以及计算出的平均分数存放在磁盘文件“stud”中
		
		
	注：对于文件的写入和普通的在终端进行写入是一样的，只不过多了f
		用fprintf（fp,"%d",a）;这样输入到文件中
		对于字符数组的输入用fputs（str，fp）;更加方便就不用再进行循环了
		【同理对于终端输入用puts也一样】 
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
//	printf("enter five student information(no name score[math、english、chinese])：\n");
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
机试题目
	编写一个算法，输入24小时制的时间 输出12小时制的时间 带PM或者AM 
	月/日/年---》年.月.日 
	
	
	注：通过%02d可以用来表示输出的整数的位数，6的时候显示06 
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
//直接输入数字就是 不要用字符再进行转化 
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















