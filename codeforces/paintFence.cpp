// You have a long fence which consists of n sections. Unfortunately, it is not painted, so you decided to hire q painters to paint it. i-th painter will paint all sections x such that li≤x≤ri.

// Unfortunately, you are on a tight budget, so you may hire only q−2 painters. Obviously, only painters you hire will do their work.

// You want to maximize the number of painted sections if you choose q−2 painters optimally. A section is considered painted if at least one painter paints it.

// Input
// The first line contains two integers n and q (3≤n,q≤5000) — the number of sections and the number of painters availible for hire, respectively.

// Then q lines follow, each describing one of the painters: i-th line contains two integers li and ri (1≤li≤ri≤n).

// Output
// Print one integer — maximum number of painted sections if you hire q−2 painters.

#include<bits/stdc++.h>


int count_non_zeroes(int* arr,int n){
    int count(0);
    for(int i=1;i<n;i++) if(arr[i]!=0) count++;
    return count;
}
int fpNotp(int li,int ri,int* ppw,int n){ //fence painted without this painter
    for(int i=li;i<=ri;i++) ppw[i]--;
    int count(0);
    // int count=count_non_zeroes(ppw,n);
    for(int i=1;i<n;i++) if(ppw[i]!=0) count++;

    for(int i=li;i<=ri;i++) ppw[i]++;
    return count;
}



int main(){
    int n,q;
    std::cin>>n>>q;
    std::vector<std::vector<int>> info;
    int ppw[n+1]={0}; //painter per wall.
    int li,ri;
    for(int i=0;i<q;i++){
        std::cin>>li>>ri;
        info.push_back({li,ri});
        for(int j=li;j<=ri;j++) ppw[j]++;
    }


//Removing first painter
    int max=INT_MIN;
    int painter;
    for(int i=0;i<info.size();i++){
        int temp=fpNotp(info[i][0],info[i][1],ppw,n+1);
        if(temp>max){
            max=temp;
            painter=i;
        } 
    }



//Taking new ppw
for(int i=info[painter][0];i<=info[painter][1];i++) if(ppw[i]!=0) ppw[i]--;
//removing that painter
info.erase(info.begin(),info.begin()+painter);




// Removing second painter.
    max=INT_MIN;
    int temp;
    for(int i=0;i<info.size();i++){
        temp=fpNotp(info[i][0],info[i][1],ppw,n+1);
        if(temp>max){
            max=temp;
            painter=i;
        } 
    }



// std::cout<<"Printing ppw after finding"<<info.size()<<"\n";
//Taking new ppw



std::cout<<"Printing ppw before change:Painter is"<<info[painter][0]<<info[painter][1]<<"\n";
for(int i=0;i<n+1;i++){
    std::cout<<ppw[i]<<"\n";
}


for(int i=info[painter][0];i<=info[painter][1];i++) if(ppw[i]!=0) ppw[i]--;
//removing that painter

info.erase(info.begin()+painter);


std::cout<<"Printing ppw after change:Painter is"<<info[painter][0]<<info[painter][1]<<"\n";
for(int i=0;i<n+1;i++){
    std::cout<<ppw[i]<<"\n";
}



std::cout<<count_non_zeroes(ppw,n+1)<<std::endl;
return 0;

}