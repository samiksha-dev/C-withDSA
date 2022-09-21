// ques-{{{} is ki kitne bracket reverse kr de ki yeh valid ho jae
// toh {}{} mtlb bs ek bracket ko reverse karna pada
// so note-no. of open brackets should be equal to closing brackets and 2nd every closing bracket should have opening bracket before it
// so since equal hona chahye mtkb length of stack humesha even honi chahye odd nhi ho skti
// therefore three invalid  patterns can be seen
//{{{{{{-only open
//}}}}}}}-only close
//}}{{-open then close
// so algo
// if length is odd return -1
// string me se valid part-remove kr do
// jo bacha hoga woh upar ke 3 patterns me se koi ek hoga
// now checking in patterns

// 1st-{{{-open then close
// let a=no. of opening brace,b=no. of close brace
// this pattern can have two case that is the length can be even or odd
//{{{{ or {{{{{ odd we dont have to see since pehle hi  dkh lia length odd nhi ho sktu
// now for even  {{{{ so a=4 so what we can do {}{} so we did 2 reversals ans=2 i.e a/2

// 2nd -}}}}}}}-only close
// this pattern can have two case that is the length can be even or odd
// }}}} or }}}}} odd we dont have to see since pehle hi  dkh lia length odd nhi ho sktu
// now for even }}}} b=4 so what we can do {}{} so we did 2 reversals ans=2 i.e b/2

// 3rd case-}}{{-open then close
// we can have 4 cases
// 3.1-}}{{
// even opening and closing
// }}{{ so a=2 b=2
//{}{} so we did 2 reversals ans can we a/2 or b/2

// 3.2=}}}{{{
// odd opening and closing
// a=3 b=3
// so we can do {}{}{} so we did 4 reversals

// 3.3 -evenopening and odd closing
// but even+odd=odd not possible pehle hi dekh lia

// 3.4 -oddopening and even closing
// but even+odd=odd not possible pehle hi dekh lia

// so we can see that ans or reversal=(a+1)/2+(b+1)/2