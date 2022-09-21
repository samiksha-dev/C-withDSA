// approach ek count lo initially count=0
// phir recursion use krna hai
// base case hoga ki jb count == size / 2 ho jae
// toh eg. 5 9 12 8 4
// count=0 size=5
// count!=size/2

// aage bahe aur top element ko hata ke kahi aur rkh lia now stack looks like 5 9 12 8
// phir count=1 now 1!=5/2 toh aage bahe aur top element ko hata ke kahi aur rkh lia now stack looks like 5 9 12
// phir count=2 now 2==2 toh bs 12 ko pop kr do uske baad jo jo top alag rkhe the lete hue chalo
// note-size kabhi change nhi hoga
