
//선택정렬 조건
void selectionSort(vector<int> &A){
 int len = A.size();
 for(int i = 0;  i < len ; i ++){
 	int minindex = i;
 	for(int j = i+1 ; j < len ; j ++){
 		if(A[minindex]>A[j]){
 			swap(A[minindex] , A[j]);
 		}


 	}

 }

}

//삽입정렬 조건 
void insertSort(vector<int> &A){
	int len = A.size();
	for(int i = 0 ; i < len ; i ++){
		int index = i;
		while(index > 0 && A[index-1] > A[index]){
			swap(A[j-1] , A[j]);
			j--;
		} 
		}
	}


연속된 부분에서 그 합이 최대인 구간을 찾는 문제
ex = [-7,4,-3,6,3,-8,3,4] 일 때 [4,-3,6,3] = 10;

for-> i<a.size

if(이전의 값 > 더한 후의 값)
	더하지않는다
else
	더한다


int maxNum(vector<int> &A){
	int lastnum =0;
	for(int i = 0; i < A.size() ; i ++){
		int maxnum = A[i];
		for(int j=i+1 ; j < A.size() ; j++){
			if(maxnum<maxnum+A[j]){
				maxnum+=A[j];
			}
		}
	}	
			if(lastnum <maxnum){
				lastnum = maxnum;
				
			}

}