// M-1 by using two loop mtlb ek element pe ho uske baad dusre loop ki help se baaki list me dekho woh element dobara hai kay
// time and space coplexity-O(n*n) and O(1)

// M-2 pehle sort kr lo phir pichle method se remove kr lo duplicates
// Time complexity=O(nlogn) since merge sort se O(nlogn) lgta hai sort krne me aur pichle method se phir remove kr lenge toh uska O(n)
// therefore=O(nlogn)+O(n)=O(nlogn)
// space complexity-O(1)

// M-3 by using map map<Node*,bool> mtlb har node dekh lo visited hai ya nhi agr visited hai toh true kr do
// agr dobaraa woh node mil jae toh pehle se hi true marked hai ab usko delete kr do
// time and space coplexity-O(n) and O(n)
