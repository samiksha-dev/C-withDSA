Address Typecasting

    While declaring a pointer,
    why can’t we just write like this :

    int a = 5;
pointer p = &a;

Why do we have a complicated syntax like :

    int a = 5;
int *p = &a;

It’s generally because we need to specify that when we invoke a particular pointer, how will the compiler know what type of value a pointer has stored, and while invoking / transferring data, how much space needs to be allotted to it.

                                                                                                                                                                                                That is why while declaring a pointer,
    we start with the data type and then assign the name to the pointer.That data type specifies what type of value we are storing in the pointer.

    The term typecasting means assigning one type of data to another type,
    like storing an integer value to a char data type.

    Example :

    int x = 65;
char c = x;

When you check the value stored in variable ‘c ‘, it will print the ASCII value stored at that integer variable, i.e., ‘x’, and print ‘A’ (whose ASCII value is 65).

                                                                                                                                This type of typecasting done above is known as implicit typecasting as the compiler itself interprets the conversion of integer value to ASCII character value.

                                                                                                                                Example :

    int i = 65;
int *p = &i;
char *pc = (char *)p;

You can see that in the third line, we can’t directly do like this :

    char *pc = p;

This will give an error as we are trying to store an integer - type pointer value into a character - type value.To remove the error, we have to type - cast ourselves by providing(char *) on the right - hand side as done in the code above.This type of typecasting is known as explicit typecasting.

                                                                                                                                                                                                          Prev Previous Next Next
