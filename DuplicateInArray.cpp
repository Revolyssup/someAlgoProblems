class Solution{   
  	 int findDuplicateNumber(vector<int>& nums) {
          //Using Floyd's method
        
     	     //Finding intersection of two runners
   	     int hare=nums[0];
   	     int tor=nums[0];
        
   	     //hare moves two steps and tort moves one,till they meet
  	      do{
  	          hare=nums[nums[hare]];
   	         tor=nums[tor]; 
   	   	  }
   	    
    	   	 while(hare!=tor);
            
        	//now both move one step at a time
       	 	//hare moves from intersection and tor moves from starting
        	//they will meet at entrance of cycle,which is duplicate element
       		 tor=nums[0];
        	while(tor!=hare){
          	  hare=nums[hare];
          	  tor=nums[tor];
       		}
        return tor;
        
    }
};