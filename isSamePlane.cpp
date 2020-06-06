/*

isSamePlane function takes in given set of vectors and returns true if all of them lie on the same plane in 3-Dimensional Space.


*/

#include<iostream>
#include<vector>
using namespace std;

//Returns cross product of two 3-d vectors.Here 3-d vector is represented by 3 integers of a vector<int>,each representing different direction.
vector<int> cross(vector<int> a,vector<int> b)
{
	int icap = (a[1]*b[2])-(a[2]*b[1]);
	int jcap=  (a[2]*b[0])-(a[0]*b[2]);
	int kcap=  (a[0]*b[1])-(a[1]*b[0]);

	vector<int> ans={icap,jcap,kcap};
	return ans;
}

//Returns dot product
int dot(vector<int> a,vector<int> b)
{
	int ans= (a[0]*b[0])+(a[1]*b[1])+(a[2]*b[2]);
	return ans;
}

//Based on two coordinates,returns a vector.
vector<int> giveVector(vector<int> a,vector<int> b)
{
	int icap = b[0]-a[0];
	int jcap=  b[1]-a[1];	
	int kcap=  b[2]-a[2];

	vector<int> ans={icap,jcap,kcap};
	return ans;
}

/****************************************************************************************************/

//Checks if given set of vectors can lie on a same plane or not.
bool isSamePlane(vector<vector<int>> a)
{
		vector<int> v1= giveVector(a[0],a[1]);
		vector<int> v2= giveVector(a[2],a[1]);
		vector<int> currVec;

		/*To be on same plane,all further vectors should be perpendicular from v1 cross v2.
		Any vector perpendicular to v1 cross v2 will result in zero dot product with v1 cross v2.
		*/
		vector<int> perpendicular= cross(v1,v2);
		for(int i=1;i<a.size()-1;i++)
		{
			currVec= giveVector(a[i+1],a[i]);


			//If any vector has a non-zero dot product with vector perpendicular to current plain ,it must be out of the plane.
			if(dot(currVec,perpendicular)) return false;
		}
	return true;	
}


int main(){
	vector<vector<int>> arr={{0,0,0},{2,-1,-1},{3,-3,0},{5,-7,2}};
	isSamePlane(arr) ? cout<<"True" : cout<<"False";

	return 0;
}



