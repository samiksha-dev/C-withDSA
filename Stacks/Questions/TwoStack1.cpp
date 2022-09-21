class TwoStack
{

public:
    int *arr;
    int top1;
    int top2;
    int size;

    // Initialize TwoStack.
    // inputing stack1 from left to right and inputing 2nd array from
    // right to left
    TwoStack(int s)
    {
        // Write your code here.
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num)
    {
        // Write your code here.
        // i.e atleast one space is there
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = num;
        }
        // 		else{
        // 			cout<<"stack overflow";
        // 		}
    }

    // Push in stack 2.
    void push2(int num)
    {
        // Write your code here.
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = num;
        }
        // 		else{
        // 			cout<<"stack overflow";
        // 		}
    }

    // Pop from stack 1 and return popped element.
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
            return -1;
        // Write your code here.
    }

    // Pop from stack 2 and return popped element.
    int pop2()
    {
        // Write your code here.
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
            return -1;
    }
};
