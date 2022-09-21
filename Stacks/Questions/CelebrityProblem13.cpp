// question-a celebrity is that person who is known by everyone but he does not knows anyone
// we are given a matrix where index tells about the person
// eg.index-  0 1 2
//    0  0 1 0
//    1  0 0 0
//    2  0 1 0
// brute force
//  so first of all there is ni sense in checking diagonal elements since person 0 knowing itself does not make any sence
// now we can draw consclusion that for a specific person if in row we have all 0's that means he does not know anyone
// if that specific person ha entire col has 1 except diagonal then that means everybody knows him,hence he is a celebrity
// so basically for every element we are checkingg its row and col
// for(int i=0;i<n;i++)//for iterating over that particular element
// iske andar{ row}+{col}=O(n)+o(n)
// phir loop ke bahar if(bool se)
// therefore overall O(n*n)

//------------------------------------------------------------------------------------------
APPROACH - 2
    // put all the elements inside the stack
    // Jab stak stack ka size !=1
    // do do eleemnent ko compare karo
    // A nikala from s.top() aur phir pop kr lia
    // B nikala from s.top() aur phir pop kr lena
    // phir if(A knows B) A toh celebbrity nhi hoga A ko pop kro B ho skta hai
    // if (B knows A) B toh celebbrity nhi hoga B ko pop kro A ho skta hai
    // jo single element bacha hua hai woh ek "Potential Celebrity" ho sakta hai
    // jab ek single element bache usse verify kro ki woh celebrity hai ya nhi
    // for verifying celebrity knows no one mtlb uski row check karo all should be 0's
    // everyone knows celebrity mtlb jaake uski col check krp sb 1 hona chahye except diagonal

    // Time complexity=O(n)

    class celebrity
{
private:
    bool knows(int a, int b, vector<int> M, int n)
    {
        if (M[a][b] == 1)
            return true;
        else
            return -1;
    }

public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        // step-2
        while (s.size > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (knows(a, b, M, n))
                s.push(b);
            else
                s.push(a);
        }
        int ans = s.top();
        // step-3
        bool rowCheck = false;
        int zerosCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
                zerosCount++;
        }
        if (zerosCount == n)
            rowCheck = true;

        bool colCheck = false;
        int onesCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1)
                onesCount++;
        }
        if (onesCount == n - 1)
            colCheck = true;

        if (rowCheck == true && colCheck == true)
            return ans;
        else
            return -1;
    }
}

// optimising
class celebrity
{
private:
    bool knows(int a, int b, vector<int> M, int n)
    {
        if (M[a][b] == 1)
            return true;
        else
            return -1;
    }

public:
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }
        // step-2
        while (s.size > 1)
        {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if (knows(a, b, M, n))
                s.push(b);
            else
                s.push(a);
        }
        int ans = s.top();
        // step-3
        int zerosCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (M[ans][i] == 0)
                zerosCount++;
        }
        if (zerosCount != n)
            return -1

                   int onesCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (M[i][ans] == 1)
                onesCount++;
        }
        if (onesCount != n - 1)
            return -1

                return ans;
    }
}