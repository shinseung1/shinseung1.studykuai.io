
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
			return lastnum;
}



2번쨰 방법

--->sum을 따로 설정 해 놓고 2번째 for 문에서 돌면서 가장 큰값을 ret에 대입시키는 방법<---
int bettermaxSum(const vector<int> &A){
	int N = A.size(), ret = Min;
	for(int i = 0; i <N ; ++i){
		int sum= 0;
		for(int j =i ; j<N ; j++){
			sum+=A[j];
			ret = max(ret,max);
		}
	}
return ret;

}


3번째 방법
**********************************
--->분할 정복 기법<---

int fastMaxNum(const vector<int> &A , int lo , int hi){ //low와 hi로 쪼개서 푸는 방법
	//기저사례 : 구간의 길이가 1인경우 
	if(lo==hi) return A[lo];
	int mid = (lo + hi) / 2;
	//두 부분에 걸쳐있는 최대 합 구간을 찾는다.
	//A[i...mid] 와 A[mid+1...j] 형태를 가지는 구간의 합으로 이루어 진다.
	// A[i...mid] 형태를 갖는 최대 구간을 찾는다.
	int left = MIN , right = MIN, sum = 0;
	//반쪽자리 구간 중 가장 큰 수 구할떄 
	for(int i= mid ; i>=lo ; i++){
		sum += A[i];
		left = max(left,sum);
	}
	int sum = 0;
	//mid +1 hi 까지의 최대값
	for(int j=mid+1 ; j <=hi; j++){
		sum += A[j];
		right = max(right,sum);
	}
	int single = Max(fastMaxNum(&A,lo,mid) , fastMaxNum(&A,mid+1 , hi));
}

4번쨰 방법 
----> 동적 계획법 <----
int fastMaxSum(const vector<int>&A){
	int N = A.size() , ret = MIN , psum = 0;
	for(int i = 0 ; i < N ; i++){
		psum = max(psum,0)+ A[i];
		ret = max(psum , ret);
	}
}


이진탐색 

int binarySearch(vector<int> &A , int x){

	int hi = A.size();
	int lo = -1;
	while(lo+1<hi){
		int mid = (hi+lo)/2;
		if(A[mid] < x){
			lo = mid;
		}else{
			hi = mid;
		}
	}
	return hi;
}

void insertSort(vector<int> &A){
	int len = A.size();
	for(int index = 0 ; index<len ; index++){
		int exnum =A[index];
	for(int j = index+1 ; j<len ; j++ ){
		if(exnum>A[j]){
			swap(A[index] , A[j]);
		}
	}
	}

}

소풍문제 

int n; //
bool areFriends[10][10];
int countParing(bool taken){
	bool finished = true;

}















