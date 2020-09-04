/*Given a 2^n bits ,we can convey 2^n-(n+1) bits as information successfully with one-bit error correction
Here n bits are required to convey the parity on n sub groups
And the 0th bit is reserved to check the overall parity.
For k=2^n bits, n bits=log(k) bits are required as parity bits*/

/*All the indices on powers of two hold the parity of that group. 
For instance, the index 8(1000) holds the parity of all the bits who are index i,such that i has 1 at 4th bit from left just like 8.
That is to say, an & operation of 8 and i will never give 0. And for all non i's,the & operation will give 0.

Other than these parity bits, all other bits are sequentially arranged on remaining indices

The 0th bit has the overall parity of all the information*/
#include<iostream>
#include<vector>
#include<cmath>
//Creating the array of k bits from k-(n+1) bits entered. with size=k.
std::vector<int> senderBits(std::vector<int>& info,int size){
        std::vector<int> tosend(size); //to return a vector of k bits.
        for(int i=1;i<size;i*=2){ //reserving all bits corresponding to parity groups.
            tosend[i]=-1;
        }

        int j=0;  //keeps track of original array
        for(int i=1;i<size;i++){
            if(tosend[i]!=-1)   tosend[i]=info[j++];  // For bits other than parity describing bits will be used to store information sequentially.  
        }
        //setting reserved all bits corresponding to parity groups to zero.
        tosend[0]=0;
        for(int i=1;i<size;i*=2){ 
            tosend[i]=0;
        }

  
        /**Setting the parity bits after checking their groups*/
        int overallParity=0;
        for(int i=1;i<size;i*=2){ 
            int flag=0;
            for(int j=1;j<size;j++){ 
                if(j&i){ //This bit belongs to the group and so contributes to the parity of this group.
                    flag=flag^tosend[j];
                }
                overallParity=overallParity^tosend[j];
            }
            tosend[i]=flag;
            
        }
    tosend[0]=overallParity;
    return tosend;
}


/**Error correction function at reciever,which finds the flipped bit,reflips it and then extracts the information*/
/***THE FUN PART: Because each group corresponds to bit at particular position.
 * When we xor the entire array from 1st index,we will get the index of the flipped bit.
 * HOW?- I can explain here upto some extent.
 * SO basically,if we xor the bits of each group individually,we will get whether the flipped bit is in that group or not(if parity is odd,that means that grp has flipped  bit).
 * If the answer is 1(yes this group has flipped bit) for any ith group,that means,the flipped bit has 1 at ith index(starting from 1st index).(THINK ABOUT IT!!!).
 * The bit at 0th index is 1 when the bit is flipped.So we can cross check the err also through there.
*/
std::vector<int>  extract(std::vector<int>& recieved){
    std::vector<int> info(recieved.size()-(log2(recieved.size()))-1);//initializing 
    int flippedindex=0;
    for(int i=1;i<recieved.size();i++){
        if(recieved[i]) flippedindex=flippedindex^i;
        
    }
    recieved[flippedindex]=!recieved[flippedindex]; //bit correction.
    int j=0; //keeps track of info 
    for(int i=3;i<recieved.size();i++){
        if(!(ceil(log2(i)) == floor(log2(i)))){ //when the index is not power of 2
            info[j++]=recieved[i];
        }
    }
    return info;
}


/**Dummy function to return message with one random bit flip */
std::vector<int> createNoise(std::vector<int>& tosend){
    std::vector<int> distorted=tosend;
    int randindex=rand()%(tosend.size());
    distorted[randindex]=!distorted[randindex]; 
    return distorted;
}


int main(){
    std::vector<int> test={0,1,0,1};
    std::cout<<"\nActual information from sender......\n";
     for(int i=0;i<test.size();i++)
        std::cout<<test[i]<<" ";


    std::vector<int> ans=senderBits(test,8);
    std::cout<<"\nBefore noise......\n";
     for(int i=0;i<ans.size();i++)
        std::cout<<ans[i]<<" ";


    
    std::cout<<"\nAfter noise......\n";
    std::vector<int> distorted=createNoise(ans);
    for(int i=0;i<distorted.size();i++)
        std::cout<<distorted[i]<<" ";


    std::cout<<"\nExtracted information after bit correction......\n";
    std::vector<int> recieved=extract(distorted);
     for(int i=0;i<recieved.size();i++)
        std::cout<<recieved[i]<<" ";

}