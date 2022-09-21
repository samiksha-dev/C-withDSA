// approach-1
// for eg.[2,1,4,3]
// for 2 check in 1,4,3 2 se smallest 1
// now for 1 check in 4 3 no one is smallest therefore -1
// now for 4 check in 3 4 se chota 3 therefore ans=3
// now checking for 3 uske baad toh kuch hai hi nhi therefore kaha chota milega ans=-1

// checking in loop
//  ek loop for(int i=0;i<n;i++){

// dusra loop for(int j=i+1;j<n;j++)}
// therefore complexity=O(n*n)

// Method-2
// for eg.[2,1,4,3]
//  check from right
// initially stack me -1 push kara lo
// check for s.top()
// lets see we are checking for 3
// if s.top() jisme -1 hai abhi woh agar current element mtlb 3 se chota hai toh wahi toh ans hai uske paas s.push(curr) mtlb 3 ko push kra do
// agar maan lo s.top() bada hai toh chota dhoondh ke lao mtlb while(s.top>=curr){
// s.pop()
//}//ans=s.top() hoga
// phir s.push(curr)
// Time complexity-O(n)